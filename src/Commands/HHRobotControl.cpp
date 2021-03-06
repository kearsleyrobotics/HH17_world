// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "HHRobotControl.h"
#include "../OI.h"

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

HHRobotControl::HHRobotControl(): Command() {
        // Use requires() here to declare subsystem dependencies
    // eg. requires(Robot::chassis.get());
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::hHBaseDrive.get());
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
}

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

// Called just before this Command runs the first time
void HHRobotControl::Initialize() {
    leftIn = 0.0;
    rightIn = 0.0;
}

// Called repeatedly when this Command is scheduled to run
void HHRobotControl::Execute() {
	//Robot::hHBaseDrive->hHTankDrive(getHHControler0,getHHControler1);
	//Joystick tank drive
	leftIn = Robot::oi->hHControler0->GetY();
	rightIn = Robot::oi->hHControler1->GetY();
	//Logitech F310 tank drive
	//leftIn = Robot::oi->hHControler0->GetRawAxis(1);
	//rightIn = Robot::oi->hHControler0->GetRawAxis(5);
	//When control button 6 pressed switch drive direction)
	//if(Robot::oi->hHC0Button6->Get()==1)
	//	{
	//	leftIn = Robot::oi->hHControler0->GetRawAxis(5);
	//	rightIn = Robot::oi->hHControler0->GetRawAxis(1);
	//	leftIn = leftIn * -1;
	//	rightIn = rightIn * -1;
	//	}
	//else
	//	{
	//	leftIn = Robot::oi->hHControler0->GetRawAxis(1);
	//	rightIn = Robot::oi->hHControler0->GetRawAxis(5);
	//	leftIn = leftIn * 1;
	//	rightIn = rightIn * 1;
	//	}
	Robot::hHBaseDrive->hHTankDrive(leftIn,rightIn);
	//Robot::hHBaseDrive->hHTankDrive((Robot::oi->hHControler0->GetY()),(Robot::oi->hHControler1->GetY()));
	//Robot::hHBaseDrive->hHTankDrive(( Robot::oi->getHHControler0), (Robot::oi->getHHControler1));
}

// Make this return true when this Command no longer needs to run execute()
bool HHRobotControl::IsFinished() {
    return false;
}

// Called once after isFinished returns true
void HHRobotControl::End() {
	Robot::hHBaseDrive->hHTankDrive(0.0,0.0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void HHRobotControl::Interrupted() {
	End();
}
