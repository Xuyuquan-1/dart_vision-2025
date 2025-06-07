#include <cstddef>
#include <cstdint>
#include <image_transport/loader_fwds.hpp>
#include <image_transport/subscriber.hpp>
#include <iostream>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <rclcpp/subscription.hpp>
#include <rclcpp/subscription_content_filter_options.hpp>
#include <string>
#include <image_transport/image_transport.hpp>
#include <sensor_msgs/msg/image.hpp>
#include <std_msgs/msg/string.hpp>
#include <opencv2/opencv.hpp>
#include <rclcpp/rclcpp.hpp>
#include <cv_bridge/cv_bridge.h>

#include <vision_interfaces/msg/uart.hpp>
#include <vision_interfaces/msg/uartf.hpp>

#include <memory>
#include <serial/serial.h>
#include <functional>



typedef struct {
        uint8_t Head;
        // uint8_t Size;
        uint8_t data[10] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}; 
}__attribute__((packed)) Package;

class SerialNode: public rclcpp::Node {
        public:
        SerialNode(const char* name): Node("serial_port_node") {
                subscriber = this->create_subscription<vision_interfaces::msg::Uartf>("/senddataf", 10, std::bind(&SerialNode::callback, this, std::placeholders::_1));
                
                serialport.setPort("/dev/ttyACM0");
                serialport.setBaudrate(115200);
                serial::Timeout _time = serial::Timeout::simpleTimeout(2000);
                serialport.setTimeout(_time);
                serialport.open();

                if(serialport.isOpen()){
                        std::cout<<"serial port is open"<<std::endl;
                }
                else{
                        std::cout<<"serial port error"<<std::endl;
                } 
        }

        private:

        void callback(const vision_interfaces::msg::Uartf::SharedPtr msg) {
                dxf = msg->deviation_x;
                dyf = msg->deviation_y;
                std::cout << "I have received !: " << dxf << " "<< dyf << std::endl;

                // unsigned char* dxp = (unsigned char*)&dx;
                // unsigned char* dyp = (unsigned char*)&dy;

                // Send(dxp, dyp);
                // cv::waitKey(1);      

                uint8_t x_f = 0;
                uint8_t y_f = 0;
                int dx = int(dxf*10);
                int dy = int(dyf*10);
                if (dx < 0)
                {
                        dx = dx - 2*dx;
                        x_f = 1;
                        // std::cout << dx << std::endl;
                }

                if (dy < 0)
                {
                        dy = dy - 2*dy;
                        y_f = 1;
                        // std::cout << dx << std::endl;
                }

                


                uint32_t dx32 = static_cast<uint32_t>(dx);
                uint32_t dy32 = static_cast<uint32_t>(dy);
                
                pkg.Head = 0xA6;
                pkg.data[0] = dx32;
                pkg.data[1] = dx32 >> 8;
                pkg.data[2] = 0xfe;
                pkg.data[3] = 0xfe;
                pkg.data[4] = x_f;
                pkg.data[5] = dy32;
                pkg.data[6] = dy32 >> 8;
                pkg.data[7] = 0xff;
                pkg.data[8] = 0xff;
                pkg.data[9] = y_f;
                
                SendINT(pkg.Head);
                for (int i = 0; i < sizeof(Package) - 1; i ++) {
                        SendINT(pkg.data[i]);
                }


        }

        // void Send(unsigned char* dxp, unsigned char* dyp) {
        //         pkg.Head = 0xA6;
        //         // pkg.Size = 0x08;
        //         pkg.dx = *dxp;
        //         pkg.dy = *dyp;

        //         unsigned char* pkg_p = (unsigned char*)&pkg;

        //         serialport.write(pkg_p, sizeof(Package));
        // }

        void SendINT(unsigned char ch) {
                // ch = 0x01;
                serialport.write(&ch, sizeof(ch));

        }

        // void SendByte(unsigned char ch) {
        //         serialport.write(&ch, sizeof(ch));
        // }


        float dxf = 0;
        float dyf = 0;
        
        serial::Serial serialport;
        Package pkg;
        rclcpp::Subscription<vision_interfaces::msg::Uartf>::SharedPtr subscriber; 
};


int main(int argc , char *argv[]) {

        rclcpp::init(argc, argv);
        std::shared_ptr<rclcpp::Node> node = std::make_shared<SerialNode>("serial_port_node");

        rclcpp::spin(node);

        rclcpp::shutdown();

        return 0;

}
