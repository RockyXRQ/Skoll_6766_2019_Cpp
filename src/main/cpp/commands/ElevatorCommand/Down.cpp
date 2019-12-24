/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/ElevatorCommand/Down.h"

ElevatorDown::ElevatorDown() : frc::Command("ElevaotrDown") {
    Requires(&Robot::m_elevator);
}

void ElevatorDown::Initialize() {
    Robot::m_elevator.Disable();
}

void ElevatorDown::Execute() {
    Robot::m_elevator.UsePIDOutput(-1);
}

bool ElevatorDown::IsFinished() {
    return false;
}

void ElevatorDown::End() {
    Robot::m_elevator.UsePIDOutput(0);
}

void ElevatorDown::Interrupted() {
    End();
}
