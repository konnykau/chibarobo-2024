#include <sensor_msgs/msg/joy.hpp>
#include <functional>
#include <memory>
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "R1_undercarriage/undercarriage.hpp"
#include "robomas_plugins/msg/robomas_frame.hpp"
#include "robomas_plugins/msg/robomas_target.hpp"
// #include "robomas_target__struct.hpp"

using std::placeholders::_1;


class Undercarriage_Node: public rclcpp::Node
{
public:
  Undercarriage_Node()
  : Node("R1_undercarriage"),NHK_2024_R1(undercarriage())
  {
    subscription_ = this->create_subscription<sensor_msgs::msg::Joy>(
      "joy", 10, std::bind(&Undercarriage_Node::topic_callback, this, _1));
    robomas_pub_setting_ = this->create_publisher<robomas_plugins::msg::RobomasFrame>("robomas_frame", 10);
    robomas_pub_right_front_ = this->create_publisher<robomas_plugins::msg::RobomasTarget>("robomas_target0", 10);
    robomas_pub_left_front_ = this->create_publisher<robomas_plugins::msg::RobomasTarget>("robomas_target2", 10);
    robomas_pub_left_back_ = this->create_publisher<robomas_plugins::msg::RobomasTarget>("robomas_target3", 10);
    robomas_pub_right_back_ = this->create_publisher<robomas_plugins::msg::RobomasTarget>("robomas_target1", 10);
  }
  

private:
  void topic_callback(const sensor_msgs::msg::Joy & msg)
  {  
    if(msg.buttons[7]){//startボタン
      NHK_2024_R1.make_mode(motor_mode::velocity);
      robomas_pub_setting_->publish(std::move(this->NHK_2024_R1.make_setting_frame(0)));
      robomas_pub_setting_->publish(std::move(this->NHK_2024_R1.make_setting_frame(1)));
      robomas_pub_setting_->publish(std::move(this->NHK_2024_R1.make_setting_frame(2)));
      robomas_pub_setting_->publish(std::move(this->NHK_2024_R1.make_setting_frame(3)));
    }//mode velにする
    if(msg.buttons[6]){//backボタン
      NHK_2024_R1.make_mode(motor_mode::disable);
      robomas_pub_setting_->publish(std::move(this->NHK_2024_R1.make_setting_frame(0)));
      robomas_pub_setting_->publish(std::move(this->NHK_2024_R1.make_setting_frame(1)));
      robomas_pub_setting_->publish(std::move(this->NHK_2024_R1.make_setting_frame(2)));
      robomas_pub_setting_->publish(std::move(this->NHK_2024_R1.make_setting_frame(3)));
    }//mode disにする
///////////////////////////////ここの上がstartボタン、backボタンによるmodeの調整
///////////////////////////////ここの下から平行移動、回転をするための個々のモーターのターゲットを決めるif文
    if(msg.axes[2] == -1){//ZL(left shouldderボタン)
        this->NHK_2024_R1.update(-msg.axes[0],msg.axes[1],turn_direction::left_turn);
    }//left turn
    else if(msg.axes[5] == -1){//ZR(right shouldderボタン)
        this->NHK_2024_R1.update(-msg.axes[0],msg.axes[1],turn_direction::right_turn);
    }//right turn
    else{
        this->NHK_2024_R1.update(-msg.axes[0],msg.axes[1],turn_direction::no_turn);
    }//平行移動//x軸はjoyの入力時点で反転していた
/////////////////////////////ここの下からは、上で決めたターゲットをシラスに向かって送ってあげる関数
  robomas_pub_right_front_->publish(std::move(this->NHK_2024_R1.make_robomas_Frame(motor_name::right_front_motor)));
  robomas_pub_right_back_->publish(std::move(this->NHK_2024_R1.make_robomas_Frame(motor_name::right_back_motor)));
  robomas_pub_left_front_->publish(std::move(this->NHK_2024_R1.make_robomas_Frame(motor_name::left_front_motor)));
  robomas_pub_left_back_->publish(std::move(this->NHK_2024_R1.make_robomas_Frame(motor_name::left_back_motor)));

  //////////////////////////////////////////////////////////////////////

}
  rclcpp::Subscription<sensor_msgs::msg::Joy>::SharedPtr subscription_;
  rclcpp::Publisher<robomas_plugins::msg::RobomasFrame>::SharedPtr robomas_pub_setting_;
  rclcpp::Publisher<robomas_plugins::msg::RobomasTarget>::SharedPtr robomas_pub_right_front_;
  rclcpp::Publisher<robomas_plugins::msg::RobomasTarget>::SharedPtr robomas_pub_left_front_;
  rclcpp::Publisher<robomas_plugins::msg::RobomasTarget>::SharedPtr robomas_pub_left_back_;
  rclcpp::Publisher<robomas_plugins::msg::RobomasTarget>::SharedPtr robomas_pub_right_back_;
  undercarriage NHK_2024_R1;
    
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<Undercarriage_Node>());
  rclcpp::shutdown();
  return 0;
}
