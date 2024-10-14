#pragma once
#include <math.h>
#include "R1_undercarriage/fry_lib/vector.hpp"
#include "R1_undercarriage/fry_lib/math.hpp"
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


constexpr float cos45 = 1/FRY::sqrt(2);

class motor{
    private:
    const FRY::vec2d direction;//モーターの向いている方向ベクトル
    float TARGET;//TARGET 

    public:
    motor(float x,float y)
    :direction(FRY::vec2d(x,y)),TARGET(0)
    {}//初期化
    void set_target(float power){
        this->TARGET = power;
    }//TARGETを代入
    float make_frame()
    {
        return this->TARGET;
    }
    // std::unique_ptr<can_plugins2::msg::Frame> mode_vel()
    // {
    //     return can_utils::generate_frame(this->CAN_ID,static_cast<uint8_t>(0x5));
    // }
    // std::unique_ptr<can_plugins2::msg::Frame> mode_dis()
    // {
    //     return can_utils::generate_frame(this->CAN_ID,static_cast<uint8_t>(0x0));
    // }
    FRY::vec2d get_vec2d(){
        return this->direction;
    }


};


enum class turn_direction{left_turn, no_turn, right_turn};//回転するかしないか
enum class motor_name{right_front_motor, left_front_motor, left_back_motor, right_back_motor};//モーターの名前
enum class motor_mode{disable,velocity};


class undercarriage{
    private:
    FRY::vec2d direction;//進みたい方向
    
    motor right_front_motor;
    motor left_front_motor;
    motor left_back_motor;
    motor right_back_motor;
    //四輪オムニ    
    motor_mode MODE;
    public:
    
    undercarriage()
    :right_front_motor(motor(-cos45,cos45)),left_front_motor(motor(-cos45,-cos45)),
    left_back_motor(motor(cos45,-cos45)),right_back_motor(motor(cos45,cos45))
    {
        MODE = motor_mode::disable;
    }//初期化
    void set_motor_power(turn_direction turn_dir);//4タイヤがうまく回るようにする
    void set_direction(float x,float y);//行きたい方向
    std::unique_ptr<robomas_plugins::msg::RobomasTarget> make_robomas_Frame(motor_name motor){
        robomas_plugins::msg::RobomasTarget TARGET_FRAME;
        switch (motor)
        {
            case motor_name::left_back_motor:
            TARGET_FRAME.target = this->left_back_motor.make_frame();
            break;

            case motor_name::right_back_motor:
            TARGET_FRAME.target = this->right_back_motor.make_frame();
            break;

            case motor_name::right_front_motor:
            TARGET_FRAME.target = this->right_front_motor.make_frame();
            break;

            case motor_name::left_front_motor:
            TARGET_FRAME.target = this->left_front_motor.make_frame();
            break;

            default :
            TARGET_FRAME.target = 0;

        }
    return std::make_unique<robomas_plugins::msg::RobomasTarget>(TARGET_FRAME);
    }
    void make_mode(motor_mode motor_state);//modeを設定
    void update(float x,float y,turn_direction turn_dir);//他の関数を全部融合させた
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

inline void undercarriage::set_direction(float x,float y){
    this->direction.x = x;
    this->direction.y = y;
}



inline void undercarriage::set_motor_power(turn_direction turn_dir){
    constexpr float MAX_OF_TARGET = 943.0;
    constexpr float TURN_TARGET = 50.0;
    //多分TARGETの最大値になるはず
    float RF_TARGET = 0;
    float LF_TARGET = 0;
    float LB_TARGET = 0;
    float RB_TARGET = 0;

    if(turn_dir == turn_direction::left_turn){
        // right_front_motor.set_target(TURN_TARGET);
        // left_front_motor.set_target(TURN_TARGET);
        // left_back_motor.set_target(TURN_TARGET);
        // right_back_motor.set_target(TURN_TARGET);
        RF_TARGET = TURN_TARGET;
        LF_TARGET = TURN_TARGET;
        LB_TARGET = TURN_TARGET;
        RB_TARGET = TURN_TARGET;
    }
    else if(turn_dir == turn_direction::right_turn){
        // right_front_motor.set_target(-TURN_TARGET);
        // left_front_motor.set_target(-TURN_TARGET);
        // left_back_motor.set_target(-TURN_TARGET);
        // right_back_motor.set_target(-TURN_TARGET);
        RF_TARGET = -TURN_TARGET;
        LF_TARGET = -TURN_TARGET;
        LB_TARGET = -TURN_TARGET;
        RB_TARGET = -TURN_TARGET;
    }
    RF_TARGET += direction*this->right_front_motor.get_vec2d()*MAX_OF_TARGET;
    LF_TARGET += direction*this->left_front_motor.get_vec2d()*MAX_OF_TARGET;
    LB_TARGET += direction*this->left_back_motor.get_vec2d()*MAX_OF_TARGET;
    RB_TARGET += direction*this->right_back_motor.get_vec2d()*MAX_OF_TARGET;


    right_front_motor.set_target(RF_TARGET);
    left_front_motor.set_target(LF_TARGET);
    left_back_motor.set_target(LB_TARGET);
    right_back_motor.set_target(RB_TARGET);
    


}

// inline std::unique_ptr<robomas_plugins::msg::RobomasTarget> undercarriage::make_CAN_Frame(motor_name motor){
//     switch (motor)
//     {
//         case motor_name::left_back_motor:
//         return this->left_back_motor.make_frame();

//         case motor_name::right_back_motor:
//         return this->right_back_motor.make_frame();

//         case motor_name::right_front_motor:
//         return this->right_front_motor.make_frame();

//         case motor_name::left_front_motor:
//         return this->left_front_motor.make_frame();

//         default:
//         return can_utils::shirasu_target(0x990,static_cast<float>(0));
//     }
// }
inline void undercarriage::make_mode(motor_mode motor_state){
    this->MODE = motor_state;
}

inline void undercarriage::update(float x,float y,turn_direction turn_dir)
{
    this->set_direction(x,y);
    this->set_motor_power(turn_dir);


}




