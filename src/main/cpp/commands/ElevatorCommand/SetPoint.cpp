/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/ElevatorCommand/SetPoint.h"

ElevatorSetPoint::ElevatorSetPoint(register double point)
    : frc::Command("ElevatorSetPoint") {
    Requires(&Robot::m_elevator);
    m_point = point;
}

void ElevatorSetPoint::Initialize() {
    Robot::m_elevator.SetSetpoint(m_point);
    Robot::m_elevator.Enable();
}

void ElevatorSetPoint::Execute() {
}

bool ElevatorSetPoint::IsFinished() {
    return Robot::m_elevator.OnTarget();
}

void ElevatorSetPoint::End() {
}

void ElevatorSetPoint::Interrupted() {
}
