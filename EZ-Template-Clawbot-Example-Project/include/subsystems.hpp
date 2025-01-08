#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"

extern Drive chassis;

// Your motors, sensors, etc. should go here.  Below are examples

inline pros::Motor Arm(-8);
inline pros::Motor Claw(9);
// inline pros::Motor intake(1);
// inline pros::adi::DigitalIn limit_switch('A');