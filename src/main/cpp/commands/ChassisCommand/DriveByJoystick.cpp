/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/ChassisCommand/DriveByJoystick.h"

DriveByJoystick::DriveByJoystick() : frc::Command("DriveByJoystick") {
    Requires(&Robot::m_chassis);
}

void DriveByJoystick::Initialize() {
}

void DriveByJoystick::Execute() {
    auto& joystick = Robot::m_oi.GetJoystickA();
    Robot::m_chassis.Drive(-joystick.GetY(), -joystick.GetRawAxis(4));
}

bool DriveByJoystick::IsFinished() {
    return false;
}

void DriveByJoystick::End() {
    Robot::m_chassis.Drive(0, 0);
}

void DriveByJoystick::Interrupted() {
    End();
}
