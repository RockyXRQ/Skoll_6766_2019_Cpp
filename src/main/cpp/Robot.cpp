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
Catcher Robot::m_catcher;
Chassis Robot::m_chassis;
Elevator Robot::m_elevator;
Intake Robot::m_intake;

MainCommandGruop Robot::m_mainCommandGroup;

void Robot::RobotInit() {
    frc::SmartDashboard::PutData(&m_chassis);
    frc::SmartDashboard::PutData(&m_catcher);
    frc::SmartDashboard::PutData(&m_elevator);
    frc::SmartDashboard::PutData(&m_intake);

    frc::CameraServer::GetInstance()->StartAutomaticCapture(0);
    frc::CameraServer::GetInstance()->StartAutomaticCapture(1);
}

void Robot::AutonomousInit() {
    m_mainCommandGroup.Start();
}

void Robot::AutonomousPeriodic() {
    frc::Scheduler::GetInstance()->Run();
}

void Robot::TeleopInit() {
    frc::Scheduler::GetInstance()->RemoveAll();
    m_mainCommandGroup.Start();
}

void Robot::TeleopPeriodic() {
    frc::Scheduler::GetInstance()->Run();
}

#ifndef RUNNING_FRC_TESTS
int main() {
    return frc::StartRobot<Robot>();
}
#endif
