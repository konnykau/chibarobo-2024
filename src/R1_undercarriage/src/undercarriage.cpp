#include <sensor_msgs/msg/joy.hpp>
#include <functional>
#include <memory>
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "R1_undercarriage/undercarriage.hpp"
#include "R1_undercarriage/upper.hpp"
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
    robomas_pub_right_front_ = this->create_publisher<robomas_plugins::msg::RobomasTarget>("robomas_target3", 10);
    robomas_pub_left_front_ = this->create_publisher<robomas_plugins::msg::RobomasTarget>("robomas_target0", 10);
    robomas_pub_left_back_ = this->create_publisher<robomas_plugins::msg::RobomasTarget>("robomas_target1", 10);
    robomas_pub_right_back_ = this->create_publisher<robomas_plugins::msg::RobomasTarget>("robomas_target2", 10);

    robomas_pub_setting_2_ = this->create_publisher<robomas_plugins::msg::RobomasFrame>("robomas_frame2", 10);
    robomas_launcher_1 = this->create_publisher<robomas_plugins::msg::RobomasTarget>("robomas_target2_0", 10);//to do
    robomas_launcher_2 = this->create_publisher<robomas_plugins::msg::RobomasTarget>("robomas_target2_1", 10);//to do
    robomas_collecter = this->create_publisher<robomas_plugins::msg::RobomasTarget>("robomas_target2_2", 10);//to do 
    last_update_time_ = this->now(); 
    can_sending = this->create_publisher<robomas_plugins::msg::Frame>("can_tx", 10);
  }
  

private:
  void topic_callback(const sensor_msgs::msg::Joy & msg)
  {  
    if(msg.buttons[7]){//startボタン
      NHK_2024_R1.make_mode(motor_mode::velocity);
      LAUNCHER.make_mode(motor_mode::velocity);
      COLLECTER.make_mode(motor_mode::velocity);
      robomas_pub_setting_->publish(std::move(this->NHK_2024_R1.make_setting_frame(0)));
      robomas_pub_setting_->publish(std::move(this->NHK_2024_R1.make_setting_frame(1)));
      robomas_pub_setting_->publish(std::move(this->NHK_2024_R1.make_setting_frame(2)));
      robomas_pub_setting_->publish(std::move(this->NHK_2024_R1.make_setting_frame(3)));
      robomas_pub_setting_2_->publish(std::move(this->LAUNCHER.make_setting_frame(0)));//todo
      robomas_pub_setting_2_->publish(std::move(this->LAUNCHER.make_setting_frame(1)));//todo
      robomas_pub_setting_2_->publish(std::move(this->COLLECTER.make_setting_frame(2))); //to do
      can_sending ->publish(std::move(this->SERVO.mode_on()));
    }//mode velにする
    if(msg.buttons[6]){//backボタン
      NHK_2024_R1.make_mode(motor_mode::disable);
      LAUNCHER.make_mode(motor_mode::disable);
      COLLECTER.make_mode(motor_mode::disable);      
      robomas_pub_setting_->publish(std::move(this->NHK_2024_R1.make_setting_frame(0)));
      robomas_pub_setting_->publish(std::move(this->NHK_2024_R1.make_setting_frame(1)));
      robomas_pub_setting_->publish(std::move(this->NHK_2024_R1.make_setting_frame(2)));
      robomas_pub_setting_->publish(std::move(this->NHK_2024_R1.make_setting_frame(3)));
      robomas_pub_setting_2_->publish(std::move(this->LAUNCHER.make_setting_frame(0)));//todo
      robomas_pub_setting_2_->publish(std::move(this->LAUNCHER.make_setting_frame(1)));//todo
      robomas_pub_setting_2_->publish(std::move(this->COLLECTER.make_setting_frame(2))); //todo
      can_sending  ->publish(std::move(this->SERVO.mode_off()));
    }//mode disにする
///////////////////////////////ここの上がstartボタン、backボタンによるmodeの調整
///////////////////////////////ここの下から平行移動、回転をするための個々のモーターのターゲットを決めるif文

    auto current_time = this->now();
    double dt = (current_time - last_update_time_).seconds();  // 前回からの経過時間
    last_update_time_ = current_time;
    if(msg.axes[2] == -1){//ZL(left shouldderボタン)
        this->NHK_2024_R1.update(-msg.axes[0],msg.axes[1],turn_direction::left_turn,dt);
    }//left turn
    else if(msg.axes[5] == -1){//ZR(right shouldderボタン)
        this->NHK_2024_R1.update(-msg.axes[0],msg.axes[1],turn_direction::right_turn,dt);
    }//right turn
    else{
        this->NHK_2024_R1.update(-msg.axes[0],msg.axes[1],turn_direction::no_turn,dt);
    }//平行移動//x軸はjoyの入力時点で反転していた
/////////////////////////////ここの下からは、上で決めたターゲットをシラスに向かって送ってあげる関数


  robomas_pub_right_front_->publish(std::move(this->NHK_2024_R1.make_robomas_Frame(motor_name::right_front_motor)));
  robomas_pub_right_back_->publish(std::move(this->NHK_2024_R1.make_robomas_Frame(motor_name::right_back_motor)));
  robomas_pub_left_front_->publish(std::move(this->NHK_2024_R1.make_robomas_Frame(motor_name::left_front_motor)));
  robomas_pub_left_back_->publish(std::move(this->NHK_2024_R1.make_robomas_Frame(motor_name::left_back_motor)));

  //////////////////////////////////////////////////////////////////////

    if(msg.buttons[2]){//todo
        robomas_launcher_1->publish(std::move(this->LAUNCHER.make_launcher_Frame(800)));
        robomas_launcher_2->publish(std::move(this->LAUNCHER.make_launcher_Frame(-800)));
    }
    else{
        robomas_launcher_1->publish(std::move(this->LAUNCHER.stop_launcher_Frame()));
        robomas_launcher_2->publish(std::move(this->LAUNCHER.stop_launcher_Frame()));        
    }
    if(msg.buttons[4]){//todo
        robomas_collecter->publish(std::move(this->COLLECTER.make_collecter_Frame()));
    }
    else{
        robomas_collecter->publish(std::move(this->COLLECTER.stop_collecter_Frame()));
    }
    if(msg.buttons[3]){
      can_sending->publish(std::move(this->SERVO.send_servo_state(1)));
    }
    else{
      can_sending->publish(std::move(this->SERVO.send_servo_state(0)));
    }

}
  rclcpp::Subscription<sensor_msgs::msg::Joy>::SharedPtr subscription_;
  rclcpp::Publisher<robomas_plugins::msg::RobomasFrame>::SharedPtr robomas_pub_setting_;
  rclcpp::Publisher<robomas_plugins::msg::RobomasTarget>::SharedPtr robomas_pub_right_front_;
  rclcpp::Publisher<robomas_plugins::msg::RobomasTarget>::SharedPtr robomas_pub_left_front_;
  rclcpp::Publisher<robomas_plugins::msg::RobomasTarget>::SharedPtr robomas_pub_left_back_;
  rclcpp::Publisher<robomas_plugins::msg::RobomasTarget>::SharedPtr robomas_pub_right_back_;
  rclcpp::Publisher<robomas_plugins::msg::RobomasFrame>::SharedPtr robomas_pub_setting_2_;
  rclcpp::Publisher<robomas_plugins::msg::RobomasTarget>::SharedPtr robomas_launcher_1;
  rclcpp::Publisher<robomas_plugins::msg::RobomasTarget>::SharedPtr robomas_launcher_2;
  rclcpp::Publisher<robomas_plugins::msg::RobomasTarget>::SharedPtr robomas_collecter;
  rclcpp::Publisher<robomas_plugins::msg::Frame>::SharedPtr can_sending;
  undercarriage NHK_2024_R1;
  launcher LAUNCHER;
  collecter COLLECTER;
  rclcpp::Time last_update_time_;  // 前回の更新時刻
  servo SERVO;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<Undercarriage_Node>());
  rclcpp::shutdown();
  return 0;
}
