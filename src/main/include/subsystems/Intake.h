/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <frc/commands/Subsystem.h>
#include <frc/Spark.h>

class Intake : public frc::Subsystem {
   private:
    frc::Spark m_motorL{6};
    frc::Spark m_motorR{7};

    frc::Spark m_motorMid{10};

   public:
    Intake();
    void Log();
    void InitDefaultCommand() override;
    void Spin(register double);
    void Nodd(register double);
};
