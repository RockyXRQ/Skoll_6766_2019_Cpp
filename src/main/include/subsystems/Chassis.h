/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <frc/commands/Subsystem.h>
#include <frc/smartdashboard/SmartDashboard.h>
#include <frc/SpeedControllerGroup.h>
#include <frc/drive/DifferentialDrive.h>
#include <frc/Spark.h>

#include <frc/AnalogInput.h>

class Chassis : public frc::Subsystem {
   private:
    frc::Spark m_fl{0};
    frc::Spark m_fr{1};
    frc::Spark m_bl{2};
    frc::Spark m_br{3};

    frc::SpeedControllerGroup m_left{m_fl, m_bl};
    frc::SpeedControllerGroup m_right{m_fr, m_br};

    frc::DifferentialDrive m_robotDrive{m_left, m_right};

   public:
    Chassis();
    void InitDefaultCommand() override;
    void Log();
    void Drive(register double, register double);
};
