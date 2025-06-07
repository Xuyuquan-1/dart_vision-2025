#include <image_transport/loader_fwds.hpp>
#include <image_transport/subscriber.hpp>
#include <iostream>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
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
#include <chrono>
#include <algorithm>
#include <vector>

#include <chrono>



#define TOWER_H 300
#define CAM_H 10
#define CAM_BACK 10
#define CAM_FORWORD 10


#define DEPTH 16
//DEPTH - CAM_BACK

#define Dart 10

#define CENTER_X 720
#define CEMTER_Y 540

#define YAW 10






using namespace std;
using namespace cv;

using namespace std::chrono;

cv::Mat grey;

bool is_contours(const vector<Point> p){
        if (cv::contourArea(p) > 1440*1080*0.002 || cv::contourArea(p) < 0.0002*1440*1080)
                return true;
        else
                return false;
}

double fps()
{
	static double fps = 0.0;
	static int frameCount = 0;
	static auto lastTime = system_clock::now();
	static auto curTime = system_clock::now();
	
	curTime = system_clock::now();
	
	auto duration = duration_cast<microseconds>(curTime - lastTime);
	double duration_s = double(duration.count()) * microseconds::period::num / microseconds::period::den;

	if (duration_s > 2)//2秒之后开始统计FPS
	{
		fps = frameCount / duration_s;
		frameCount = 0;
		lastTime = curTime;
	}

	++frameCount;

	return fps;
}


class Resolve : public rclcpp::Node {
       public:

        Resolve(std::string name): Node(name) {
                uart_pub =  this->create_publisher<vision_interfaces::msg::Uart>("/senddata", 10);
                uartf_pub =  this->create_publisher<vision_interfaces::msg::Uartf>("/senddataf", 10);
        };


        void Send(string center_x, string center_y) {
                int point_x = -1;
                int point_y = -1;
                //小数点在第i位之后
                for (int i=0; i<center_x.length(); i++) {
                        if (center_x[i] == '.')
                        point_x = i;

                }

                for (int i=0; i<center_y.length(); i++) {
                        if (center_y[i] == '.')
                        point_y = i;

                }

                vision_interfaces::msg::Uart send_data;
                send_data.deviation_x = center_x;
                send_data.deviation_y = center_y;
                send_data.point_x = point_x;
                send_data.point_y = point_y;

                uart_pub->publish(send_data);
                

        }

        void Sendf(float x, float y) {
                vision_interfaces::msg::Uartf send_data;
                send_data.deviation_x = x;
                send_data.deviation_y = y;

                uartf_pub->publish(send_data);
        }

        rclcpp::Publisher<vision_interfaces::msg::Uart>::SharedPtr uart_pub;
        rclcpp::Publisher<vision_interfaces::msg::Uartf>::SharedPtr uartf_pub;
       

};


cv::Point start_point(720, 0);
cv::Point end_point(720, 1080);

cv::Point start_point2(700, 540);
cv::Point end_point2(740, 540);


cv::Scalar color(0, 255, 0);

int thickness = 1;


// // 滑动窗口滤波
// class slinding_window {
//         public:
//                 slinding_window(int window_size = 5, float max_inactivate_time = 0.01, float threshold = 10000.0) {
//                         this->window_size = window_size;
//                         this->max_inactivate_time = max_inactivate_time;
//                         this->threshold = threshold;
//                 }
                
//                 void add_point(float cen_x, float cen_y) {
                        
//                         //异常值检测
//                         if(points.empty()) {
//                                 points.push_back(cv::Point2f(cen_x, cen_y));
//                                 return;
//                         }
//                         cv::Point2f last_element = points.back();
//                         if(pow(abs(cen_x - last_element.x), 2) + pow(cen_y - last_element.y,2)  <= threshold) {
//                                 points.push_back(cv::Point2f(cen_x, cen_y));
//                         }
//                         del_element();

//                 }

//                 cv::Point2f get_element() {
//                         if(points.empty())
//                                 return cv::Point2f(-1, -1);
//                         return points.back();
//                 }

//                 void del_element() {
//                         if(points.size()>window_size) {
//                                 points.erase(points.begin());
//                         }
//                 }



//         private:
//                 std::vector<cv::Point2f> points;
//                 int window_size;
//                 float max_inactivate_time;
//                 float threshold;
// };

// //滑动窗口manager
// slinding_window sw = slinding_window();

cv::Mat img;

// void  video_capture() {

//         // std::string outputVideoPath = "video/test.mp4";
//         cv::VideoWriter outputVideo;
        
//         cv::Size size_ = cv::Size(1440, 1080);
//         outputVideo.open("video/test.mp4", cv::VideoWriter::fourcc('M','J','P','G'), 10.0, size_, true);

//         if(!outputVideo.isOpened()) {
//                 std::cout << "fail to open! " << std::endl;
//                 return;
//         }
//         while(true) {
//                 outputVideo.write(img);
//                 waitKey(0.2);

//                 if (char(cv::waitKey(1) == 'q'))
//                 std::cout << "qqqqq";
//                 break;
//         }


// }

void ImageResolveCallback(const sensor_msgs::msg::Image::ConstSharedPtr &msg) {
        //开始时间
        static double fps = 0.0;
	static int frameCount = 0;
	static auto lastTime = system_clock::now();
	static auto curTime = system_clock::now();
        
#ifdef TEST_MODE        
        img = cv::imread("../test_image/test.jpg");
#else
        img = cv_bridge::toCvShare(msg, "bgr8")->image;
#endif  
        std::vector<cv::Mat> BGR;
        cv::split(img, BGR);
        cv::Mat green_channel = BGR[1];
        cv::threshold(green_channel, grey, 160, 255, THRESH_BINARY);
        
        vector<vector<Point>> contours;
        vector<Vec4i> hierarcy;
        findContours(grey, contours, hierarcy, RETR_EXTERNAL, CHAIN_APPROX_NONE);
        

        Mat contour_img;
        img.copyTo(contour_img);
        cv::drawContours(contour_img, contours, -1, cv::Scalar(0, 255, 0), 2, 8);  

        // cout << "num = " << contours.size() << endl;
        // Mat element_open = getStructuringElement(MORPH_RECT, Size(3, 3));
        // Mat element_boom = getStructuringElement(MORPH_ELLIPSE, Size(3, 3));

        // morphologyEx(grey, grey, MORPH_OPEN, element_boom);
        Point2f center;
        float radius;
        double area;
        string circle_cenx = "-1";
        string circle_ceny = "-1";
        string dx;
        string dy;
        string circle_r = "-1";
        string all;
        float img_area = 1440*1080;
        Rect rect;
        float mini = 10;
        int mini_flag = -1;

        //检测标志位
        int text_cnt = 0;
        //面积比数组
        vector<float> area_vec;
        area_vec.clear();

        //lambda表达式删除面积过大或过小的轮廓
        contours.erase(std::remove_if(contours.begin(), contours.end(), is_contours), contours.end());

        // std::cout << "start" << std::endl;
        // for (int i=0;i<contours.size(); i++) {
        //         //  std::cout << cv::contourArea(contours[i]) << std::endl;
        // }

        if (contours.size() == 0) 
                std::cout << "no contours" << std::endl;
                
        else{
                for (int i=0;i<contours.size(); i++) {

                        //圆形拟合和外界矩形拟合
                        minEnclosingCircle(Mat(contours[i]), center, radius);
                        rect = boundingRect(contours[i]);

                        //面积比例
                        area_vec.push_back(rect.area()/(radius*radius*3.14));

                        // all = "x: " + circle_cenx + " y: " + circle_ceny + " r: " + circle_r;
                        // cv::putText(img, all, cv::Point(10, 25+25*(0+1)), cv::FONT_HERSHEY_DUPLEX, 0.8, cv::Scalar(0, 255, 0));
        
                }
 
        //选择
        for(int i = 0; i < area_vec.size(); i++) {
                if (abs(area_vec[i] - 1.274) < mini) {
                        mini = abs(area_vec[i] - 1.274);
                        mini_flag = i;
                }
        }
        
        minEnclosingCircle(Mat(contours[mini_flag]), center, radius);
        //使用滑动窗口滤波
        // sw.add_point(center.x, center.y);
        // cv::Point2f temp_p = sw.get_element();
        // center.x = temp_p.x;
        // center.y = temp_p.y;

        rect = boundingRect(contours[mini_flag]);
        rect.x = rect.x - 7;
        rect.y = rect.y - 7;
        rect.width = rect.width + 14;
        rect.height = rect.height + 14;
        rectangle(img,rect, Scalar(255,50,150), 2, 8, 0);
        circle(img, center, radius, Scalar(255, 255, 255), 2, 8);
        // drawContour(img, contours,sto_string(center.y);

        dx = std::to_string(abs(center.x - 720));
        dy = std::to_string(abs(center.y - 540));
        circle_r = std::to_string(radius);
        circle_cenx = std::to_string(center.x);
        circle_ceny = std::to_string(center.y);
        }

        
        if (contours.size() != 0) {
                std::ostringstream ss;
                ss << std::fixed << std::setprecision(2) << area_vec[mini_flag];
                string cent = ss.str();
                cv::putText(img, "areaCent: "+cent, cv::Point(center.x+25, center.y+25), cv::FONT_HERSHEY_DUPLEX, 0.8, cv::Scalar(255, 255, 255));

        }


        all = "x: " + circle_cenx + " y: " + circle_ceny + " r: " + circle_r;
        cv::putText(img, all, cv::Point(10, 50), cv::FONT_HERSHEY_DUPLEX, 0.8, cv::Scalar(0, 255, 0));
        cv::line(img, start_point, end_point, color, thickness);
        cv::line(img, start_point2, end_point2, color, thickness); 




        
        imshow("bin", grey);
        imshow("conyours", contour_img);
        waitKey(1);


        Resolve resolve("resolving");

        resolve.Send(dx, dy);

        resolve.Sendf(center.x - 720, center.y - 540);

        curTime = system_clock::now();

        auto duration = duration_cast<microseconds>(curTime - lastTime);
        double duration_s = double(duration.count()) * microseconds::period::num / microseconds::period::den;
         
        if (duration_s > 0.1)//2秒之后开始统计FPS
	{
		fps = frameCount / duration_s;
		frameCount = 0;
		lastTime = curTime;
	}

	++frameCount;

        cv::putText(img, "FPS: " + to_string(fps), cv::Point(1300, 25), cv::FONT_HERSHEY_DUPLEX, 0.8, cv::Scalar(255, 255, 255));

        imshow("img", img);

}

int main(int argc, char * argv[]) {

        // std::thread t(video_capture);
        // t.join();
        rclcpp::init(argc, argv);
        rclcpp::NodeOptions options;
        rclcpp::Node::SharedPtr node = rclcpp::Node::make_shared("listener", options);

        image_transport::ImageTransport it(node);
        image_transport::Subscriber sub = it.subscribe("/camera/image",2, ImageResolveCallback);
        rclcpp::spin(node);
        return 0;
}
