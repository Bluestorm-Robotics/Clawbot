#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"

extern Drive chassis;

// Your motors, sensors, etc. should go here.  Below are examples
inline pros::Motor arm(-5); //negative value means motor is inversed.
inline pros::Motor claw(-6);
// inline pros::Motor intake(1);
// inline pros::adi::DigitalIn limit_switch('A');