/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <frc/Joystick.h>
#include <frc/buttons/JoystickButton.h>

class OI {
   public:
    OI();

    frc::Joystick& GetJoystickA();
    frc::Joystick& GetJoystickB();

    int GetLevel(int);

   private:
    frc::Joystick m_joystickA{0};
    frc::Joystick m_joystickB{1};

    frc::JoystickButton m_eleUp{&m_joystickA, 1};
    frc::JoystickButton m_eleDown{&m_joystickA, 2};
    frc::JoystickButton m_eleSetPointUp{&m_joystickA, 3};
    frc::JoystickButton m_eleSetPointDown{&m_joystickA, 4};

    frc::JoystickButton m_intakeOpen{&m_joystickB, 1};
    frc::JoystickButton m_intakeClose{&m_joystickB, 2};
    frc::JoystickButton m_intakeUp{&m_joystickB, 3};
    frc::JoystickButton m_intakeDown{&m_joystickB, 4};

    frc::JoystickButton m_catherOpen{&m_joystickB, 5};
    frc::JoystickButton m_catherClose{&m_joystickB, 6};
    frc::JoystickButton m_comprosserOpen{&m_joystickB, 7};
};
