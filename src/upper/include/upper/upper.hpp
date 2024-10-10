#include "robomas_plugins/msg/robomas_frame.hpp"
#include "robomas_plugins/msg/robomas_target.hpp"

namespace constant{
    // constexpr uint8_t motor = 0;
    constexpr bool c620 = false;
    //mode
    constexpr uint8_t temp = 50;
    constexpr float velkp = 0.15;
    constexpr float velki = 9;
    constexpr float poskp = 0.5;
    constexpr float tyoku_vel_target = 0;
    constexpr float tyoku_pos_target = 0;
    constexpr float stable_pos_limit_vel = 0;
}

enum class motor_mode{disable,velocity};

class launcher{
    private:

    const float LAUNCHER_TARGET = 100.0;
    const float COLLECT_TARGET = 100.0;
    motor_mode MODE;

    public:
    launcher(){
        MODE = motor_mode::disable;
    }
    void make_mode(motor_mode motor_state){
        this->MODE = motor_state;
    }

    std::unique_ptr<robomas_plugins::msg::RobomasTarget> make_launcher_Frame(){
        robomas_plugins::msg::RobomasTarget TARGET_FRAME;
        TARGET_FRAME.target = this->LAUNCHER_TARGET;
        return std::make_unique<robomas_plugins::msg::RobomasTarget>(TARGET_FRAME);
    }
    std::unique_ptr<robomas_plugins::msg::RobomasTarget> stop_launcher_Frame(){
        robomas_plugins::msg::RobomasTarget TARGET_FRAME;
        TARGET_FRAME.target = 0;
        return std::make_unique<robomas_plugins::msg::RobomasTarget>(TARGET_FRAME);
    }
    std::unique_ptr<robomas_plugins::msg::RobomasTarget> make_collecter_Frame(){
        robomas_plugins::msg::RobomasTarget TARGET_FRAME;
        TARGET_FRAME.target = this->COLLECT_TARGET;
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