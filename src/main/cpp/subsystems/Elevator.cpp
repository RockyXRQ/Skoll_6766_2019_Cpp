/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "subsystems/Elevator.h"

Elevator::Elevator() : PIDSubsystem("Elevator", 1.0, 0.0, 0.0) {
    SetAbsoluteTolerance(0.005);
    AddChild("MotorA", m_motorA);
    AddChild("MotorB", m_motorB);
    AddChild("Encoder", &m_omron);
}

void Elevator::Log() {
    // frc::SmartDashboard::PutNumber("Encoder", m_omron.GetValue() / RATE);
}

double Elevator::ReturnPIDInput() {
    return m_omron.GetValue() / RATE;
}

void Elevator::UsePIDOutput(register double speed) {
    m_lifter.Set(speed);
}

void Elevator::InitDefaultCommand() {
}
