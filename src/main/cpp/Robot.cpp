/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "Robot.h"

#include <frc/commands/Scheduler.h>
#include <frc/smartdashboard/SmartDashboard.h>

OI Robot::m_oi;
Catcher Robot::catcher;
Chassis Robot::chassis;
Elevator Robot::elevator;
Intake Robot::intake;

void Robot::RobotInit() {
    frc::SmartDashboard::PutData(&chassis);
    frc::SmartDashboard::PutData(&catcher);
    frc::SmartDashboard::PutData(&elevator);
    frc::SmartDashboard::PutData(&intake);

    frc::CameraServer::GetInstance()->StartAutomaticCapture(0);
    frc::CameraServer::GetInstance()->StartAutomaticCapture(1);
}

void Robot::AutonomousInit() {
}

void Robot::AutonomousPeriodic() {
    frc::Scheduler::GetInstance()->Run();
}

void Robot::TeleopInit() {
}

void Robot::TeleopPeriodic() {
    frc::Scheduler::GetInstance()->Run();
}

#ifndef RUNNING_FRC_TESTS
int main() {
    return frc::StartRobot<Robot>();
}
#endif
