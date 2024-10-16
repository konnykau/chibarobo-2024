#pragma once
#include "robomas_plugins/msg/robomas_frame.hpp"
#include "robomas_plugins/msg/robomas_target.hpp"
#include "undercarriage.hpp"





class launcher{
    private:

    const float LAUNCHER_TARGET = 100.0;
    motor_mode MODE = motor_mode::disable;

    public:

    void make_mode(motor_mode motor_state){
        this->MODE = motor_state;
    }

    std::unique_ptr<robomas_plugins::msg::RobomasTarget> make_launcher_Frame(float TARGET){
        robomas_plugins::msg::RobomasTarget TARGET_FRAME;
        TARGET_FRAME.target = TARGET;
        return std::make_unique<robomas_plugins::msg::RobomasTarget>(TARGET_FRAME);
    }
    std::unique_ptr<robomas_plugins::msg::RobomasTarget> stop_launcher_Frame(){
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

class collecter{
    private :
    const float TARGET = 20.0;
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

};

