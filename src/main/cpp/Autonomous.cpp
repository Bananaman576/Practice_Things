#include "Autonomous.h"

void Autonomous::AutonomousInit() {
m_state = 0;
m_timer.Reset();
}

void Autonomous::AutonomousPeriodic() {
    switch (m_state) {
    case 0:
        printf("what am i doing with my life\n");
        m_state = 1;
        break;
    case 1:
        printf("this isnt a printer stupid\n");
        m_motor.Set(m_driveMode,1);
        if(m_timer.HasPeriodPassed(5)){
            printf("the missile knows where it is at all times\n");
            m_state = 2;
        }
        break;
    case 2:
        m_motor.Set(m_driveMode,0);
        break;

    }
}

Autonomous::Autonomous(TalonSRX m_motor) {

}