#include <sensor_msgs/msg/joy.hpp>
#include <functional>
#include <memory>
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "upper/upper.hpp"
#include "robomas_plugins/msg/robomas_frame.hpp"
#include "robomas_plugins/msg/robomas_target.hpp"

using std::placeholders::_1;

class Upper_NODE : public rclcpp::Node{
public:
  Upper_NODE()
  : Node("Upper"),LAUNCHER(launcher())
  {
    subscription_ = this->create_subscription<sensor_msgs::msg::Joy>(
      "joy", 10, std::bind(&Upper_NODE::topic_callback, this, _1));
    robomas_pub_setting_ = this->create_publisher<robomas_plugins::msg::RobomasFrame>("robomas_frame", 10);
    robomas_launcher_1 = this->create_publisher<robomas_plugins::msg::RobomasTarget>("robomas_target4", 10);
    robomas_launcher_2 = this->create_publisher<robomas_plugins::msg::RobomasTarget>("robomas_target5", 10);
    robomas_collecter = this->create_publisher<robomas_plugins::msg::RobomasTarget>("robomas_target6", 10);
  }
  

private:
  void topic_callback(const sensor_msgs::msg::Joy & msg)
  {  
    if(msg.buttons[7]){//startボタン
      LAUNCHER.make_mode(motor_mode::velocity);
      robomas_pub_setting_->publish(std::move(this->LAUNCHER.make_setting_frame(4)));
      robomas_pub_setting_->publish(std::move(this->LAUNCHER.make_setting_frame(5)));
      robomas_pub_setting_->publish(std::move(this->LAUNCHER.make_setting_frame(6)));
    }//mode velにする
    if(msg.buttons[6]){//backボタン
      LAUNCHER.make_mode(motor_mode::disable);
      robomas_pub_setting_->publish(std::move(this->LAUNCHER.make_setting_frame(4)));
      robomas_pub_setting_->publish(std::move(this->LAUNCHER.make_setting_frame(5)));
      robomas_pub_setting_->publish(std::move(this->LAUNCHER.make_setting_frame(6)));
    }//mode disにする

    if(msg.buttons[1]){//todo
        robomas_launcher_1->publish(std::move(this->LAUNCHER.make_launcher_Frame()));
        robomas_launcher_2->publish(std::move(this->LAUNCHER.make_launcher_Frame()));
    }
    else{
        robomas_launcher_1->publish(std::move(this->LAUNCHER.stop_launcher_Frame()));
        robomas_launcher_2->publish(std::move(this->LAUNCHER.stop_launcher_Frame()));        
    }
    if(msg.buttons[1]){//todo
        robomas_collecter->publish(std::move(this->LAUNCHER.make_collecter_Frame()));
    }
    else{
        robomas_collecter->publish(std::move(this->LAUNCHER.stop_collecter_Frame()));
    }


 
  

  //////////////////////////////////////////////////////////////////////

}
  rclcpp::Subscription<sensor_msgs::msg::Joy>::SharedPtr subscription_;
  rclcpp::Publisher<robomas_plugins::msg::RobomasFrame>::SharedPtr robomas_pub_setting_;
  rclcpp::Publisher<robomas_plugins::msg::RobomasTarget>::SharedPtr robomas_launcher_1;
  rclcpp::Publisher<robomas_plugins::msg::RobomasTarget>::SharedPtr robomas_launcher_2;
  rclcpp::Publisher<robomas_plugins::msg::RobomasTarget>::SharedPtr robomas_collecter;
  launcher LAUNCHER;    
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<Upper_NODE>());
  rclcpp::shutdown();
  return 0;
}