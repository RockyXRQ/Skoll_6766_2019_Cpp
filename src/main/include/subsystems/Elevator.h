/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <frc/commands/PIDSubsystem.h>
#include <frc/PWMTalonSRX.h>
#include <frc/SpeedControllerGroup.h>

#include <frc/AnalogInput.h>
#include <frc/smartdashboard/SmartDashboard.h>
#include <frc/livewindow/LiveWindow.h>

const int RATE = 1;

class Elevator : public frc::PIDSubsystem {
   private:
    frc::PWMTalonSRX m_motorA{4};
    frc::PWMTalonSRX m_motorB{5};
    frc::SpeedControllerGroup m_lifter{m_motorA, m_motorB};

    frc::AnalogInput m_omron{1};

   public:
    Elevator();
    void Log();
    double ReturnPIDInput() override;
    void UsePIDOutput(register double) override;
    void InitDefaultCommand() override;
};
