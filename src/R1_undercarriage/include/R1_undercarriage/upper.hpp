#pragma once
#include "robomas_plugins/msg/robomas_frame.hpp"
#include "robomas_plugins/msg/robomas_target.hpp"
#include "robomas_plugins/msg/frame.hpp"
#include "can_utils.hpp"
#include "undercarriage.hpp"



enum class launcher_RL{
    Right,Left
};

class launcher{
    private:

    float Right_LAUNCHER_TARGET = 0;
    float Left_LAUNCHER_TARGET = 0;
    const float L_max_acceleration = 200;
    motor_mode MODE = motor_mode::disable;

    public:

    void make_mode(motor_mode motor_state){
        this->MODE = motor_state;
    }
    void acceralation_control(float power,double dt,launcher_RL RL){
        
        if(RL = launcher_RL::Left){
            float velocity_difference = power - this->Left_LAUNCHER_TARGET;
        float max_velocity_change = L_max_acceleration * dt;

        // 最大加速度の制限を超えないように次の速度を計算
        if (std::fabs(velocity_difference) < max_velocity_change) {
            
        } else {
            power = (velocity_difference > 0 ? 1 : -1) * max_velocity_change + this->Left_LAUNCHER_TARGET;
        }
            this->Left_LAUNCHER_TARGET = power;
        }
        if(RL = launcher_RL::Right){
                float velocity_difference = power - this->Left_LAUNCHER_TARGET;
        float max_velocity_change = L_max_acceleration * dt;

        // 最大加速度の制限を超えないように次の速度を計算
        if (std::fabs(velocity_difference) < max_velocity_change) {
            
        } else {
            power = (velocity_difference > 0 ? 1 : -1) * max_velocity_change + this->Right_LAUNCHER_TARGET;
        }
            this->Right_LAUNCHER_TARGET = power;
        }
        }        
    }
    void set_TARGET(float R_power,float L_power,double dt){
        acceralation_control(L_power,dt,launcher_RL::Left);
        acceralation_control(R_power,dt,launcher_RL::Right);
        
    }
    std::unique_ptr<robomas_plugins::msg::RobomasTarget> make_left_launcher_Frame(){
        robomas_plugins::msg::RobomasTarget TARGET_FRAME;
        TARGET_FRAME.target = Left_LAUNCHER_TARGET;
        return std::make_unique<robomas_plugins::msg::RobomasTarget>(TARGET_FRAME);
    }
    std::unique_ptr<robomas_plugins::msg::RobomasTarget> make_right_launcher_Frame(){
        robomas_plugins::msg::RobomasTarget TARGET_FRAME;
        TARGET_FRAME.target = Right_LAUNCHER_TARGET;
        return std::make_unique<robomas_plugins::msg::RobomasTarget>(TARGET_FRAME);
    }    
    // std::unique_ptr<robomas_plugins::msg::RobomasTarget> stop_launcher_Frame(){
    //     robomas_plugins::msg::RobomasTarget TARGET_FRAME;
    //     TARGET_FRAME.target = 0;
    //     return std::make_unique<robomas_plugins::msg::RobomasTarget>(TARGET_FRAME);
    // }
    
    std::unique_ptr<robomas_plugins::msg::RobomasFrame> make_setting_frame(uint8_t motor_number){
        robomas_plugins::msg::RobomasFrame undercarriage_frame;
        undercarriage_frame.motor = motor_number;
        undercarriage_frame.temp = constant::temp;
        undercarriage_frame.c620 = constant::c620;
        if(MODE == motor_mode::velocity){
         undercarriage_frame.mode = 1;
        }
        else if(MODE == motor_mode::disable){
            undercarriage_frame.mode = 0;
        }
        undercarriage_frame.velkp = constant::velkp;
        undercarriage_frame.velki = constant::velki;
        undercarriage_frame.poskp = constant::poskp;
        undercarriage_frame.tyoku_vel_target = constant::tyoku_vel_target;
        undercarriage_frame.tyoku_pos_target = constant::tyoku_pos_target;
        undercarriage_frame.stable_pos_limit_vel = constant::stable_pos_limit_vel;
        return make_unique<robomas_plugins::msg::RobomasFrame>(undercarriage_frame);
    }
};

class collecter{
    private :
    const float TARGET = -200.0;
    motor_mode MODE = motor_mode::disable;

    public :

    void make_mode(motor_mode motor_state){
        this->MODE = motor_state;
    }
    std::unique_ptr<robomas_plugins::msg::RobomasTarget> make_collecter_Frame(){
        robomas_plugins::msg::RobomasTarget TARGET_FRAME;
        TARGET_FRAME.target = this->TARGET;
        return std::make_unique<robomas_plugins::msg::RobomasTarget>(TARGET_FRAME);
    }
        std::unique_ptr<robomas_plugins::msg::RobomasTarget> stop_collecter_Frame(){
        robomas_plugins::msg::RobomasTarget TARGET_FRAME;
        TARGET_FRAME.target = 0;
        return std::make_unique<robomas_plugins::msg::RobomasTarget>(TARGET_FRAME);
    }
    std::unique_ptr<robomas_plugins::msg::RobomasFrame> make_setting_frame(uint8_t motor_number){
        robomas_plugins::msg::RobomasFrame undercarriage_frame;
        undercarriage_frame.motor = motor_number;
        undercarriage_frame.temp = constant::temp;
        undercarriage_frame.c620 = constant::c620;
        if(MODE == motor_mode::velocity){
         undercarriage_frame.mode = 1;
        }
        else if(MODE == motor_mode::disable){
            undercarriage_frame.mode = 0;
        }
        undercarriage_frame.velkp = constant::velkp;
        undercarriage_frame.velki = constant::velki;
        undercarriage_frame.poskp = constant::poskp;
        undercarriage_frame.tyoku_vel_target = constant::tyoku_vel_target;
        undercarriage_frame.tyoku_pos_target = constant::tyoku_pos_target;
        undercarriage_frame.stable_pos_limit_vel = constant::stable_pos_limit_vel;
        return make_unique<robomas_plugins::msg::RobomasFrame>(undercarriage_frame);
    }
};




class servo{
    private:
    const int CAN_ID = 0x300;


    public:
     std::unique_ptr<robomas_plugins::msg::Frame> generate_frame(uint32_t id, uint16_t data[]){
  auto frame = std::make_unique<robomas_plugins::msg::Frame>();
  frame->id = id;
  frame->is_rtr = false;
  frame->is_extended = false;
  frame->is_error = false;
  frame->dlc = 8;
  std::memcpy(frame->data.data(),data,8);
  return frame;
}
     std::unique_ptr<robomas_plugins::msg::Frame> mode_on()
    {
        uint16_t data = 0x1;
        return this->generate_frame(this->CAN_ID,&data);
    }
     std::unique_ptr<robomas_plugins::msg::Frame> mode_off()
    {
        uint16_t data = 0x0;
        return this->generate_frame(this->CAN_ID,&data);
    }
     std::unique_ptr<robomas_plugins::msg::Frame> send_servo_state(uint16_t number)
    {
        // uint64_t returner = 0;

        // returner = CCR;
        // for(int i = 0;i < number;i++){
        //     returner = returner * 65536;
        // }
        // for(int i = 3;i >= 0;i--){
        //     returner = 65536*returner;
        //     if(number == i){

        //     }
        //     returner = returner + CCRs[i];
        // }
        uint16_t data = number;
        return this->generate_frame(this->CAN_ID+1,&data);

        
    }
};

   
