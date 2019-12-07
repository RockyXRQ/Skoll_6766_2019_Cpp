/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <frc/commands/Subsystem.h>
#include <frc/doubleSolenoid.h>
#include <frc/Compressor.h>

#include <frc/smartdashboard/SmartDashboard.h>

class Catcher : public frc::Subsystem {
   private:
    frc::DoubleSolenoid m_catcher{8, 9};
    frc::Compressor m_comprerror;

   public:
    Catcher();
    void Log();
    void InitDefaultCommand() override;
    void CatcherSetPositon(register frc::DoubleSolenoid::Value);
    void CompressorSetPostion(register bool);
};
