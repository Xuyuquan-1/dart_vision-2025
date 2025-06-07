#include <image_transport/loader_fwds.hpp>
#include <image_transport/subscriber.hpp>
#include <iostream>
#include <string>
#include <image_transport/image_transport.hpp>
#include <sensor_msgs/msg/image.hpp>
#include <std_msgs/msg/string.hpp>
#include "opencv2/opencv.hpp"
#include "rclcpp/rclcpp.hpp"
#include <cv_bridge/cv_bridge.h>

#include <memory>

using namespace std;
using namespace cv;


class Display : public rclcpp::Node {
    public:

    Display(std::string name): Node(name) {

   
        
    }



};

void ImageDisplayCallback(const sensor_msgs::msg::Image::ConstSharedPtr &msg) {
    cv::Mat img = cv_bridge::toCvShare(msg, "bgr8")->image;
    // cv::resize(img, img, cv::Size(), 0.25, 0.25);

    cv::Point start_point(720, 0);
    cv::Point end_point(720, 1080);

    cv::Point start_point2(700, 540);
    cv::Point end_point2(740, 540);

    cv::Scalar color(0, 255, 0);

    int thickness = 1;

    cv::line(img, start_point, end_point, color, thickness);
    cv::line(img, start_point2, end_point2, color, thickness); 

    cv::imshow("image", img);

    cv::waitKey(1);
}


int main(int argc, char * argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::NodeOptions options;
    rclcpp::Node::SharedPtr node = rclcpp::Node::make_shared("listener", options);

    image_transport::ImageTransport it(node);
    image_transport::Subscriber sub = it.subscribe("/camera/image",2, ImageDisplayCallback);
    rclcpp::spin(node);

    return 0;
}



