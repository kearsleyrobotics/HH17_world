// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.



#include "HHACDriveDistFastTurnLeft1DriveDistSlow.h"
//#include "Commands/HHACDriveWaitInput.h"
#include "HHACDriveWaitInput.h"
#include "HHACDriveDistFast.h"
#include "HHACTurnLeft1.h"
#include "HHACDriveDistSlow.h"


// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

HHACDriveDistFastTurnLeft1DriveDistSlow::HHACDriveDistFastTurnLeft1DriveDistSlow() {
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR
              // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=COMMAND_DECLARATIONS
        //        AddSequential(new HHACDriveWaitInput());
        //AddSequential(new HHACDriveDistFast(97.5));
        //double hHDist = SmartDashboard::GetNumber("DS-Auto-Dist-From-Wall",0.0);
        //AddSequential(new HHACDriveDistFast(hHDist));
        //AddSequential(new HHACDriveDistFast(SmartDashboard::GetNumber("DS-Auto-Dist-From-Wall",0.0)));
        //AddSequential(new HHACTurnLeft1());
        //AddSequential(new HHACDriveDistSlow(17));
        //AddSequential(new HHACDriveDistSlow(SmartDashboard::GetNumber("DS-Auto-Dist-To-Lift",0.0)));
        //hHDist = SmartDashboard::GetNumber("DS-Auto-Dist-To-Lift",0.0);
        //AddSequential(new HHACDriveDistSlow(hHDist));

              // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=COMMAND_DECLARATIONS
        AddSequential(new HHACDriveWaitInput());
        AddSequential(new HHACDriveDistFast(93.1));
        //double hHDistDS = SmartDashboard::GetNumber("DS-Auto-Dist-From-Wall",93.0);
        //frc::SmartDashboard::PutNumber("roboRIO-Dist-From-Wall",hHDistDS);
        //AddSequential(new HHACDriveDistFast(hHDistDS));
        //AddSequential(new HHACDriveDistFast(SmartDashboard::GetNumber("DS-Auto-Dist-From-Wall",0.0)));
        AddSequential(new HHACTurnLeft1());
        AddSequential(new HHACDriveDistSlow(18));
        //AddSequential(new HHACDriveDistSlow(SmartDashboard::GetNumber("DS-Auto-Dist-To-Lift",0.0)));
        //hHDistDS = SmartDashboard::GetNumber("DS-Auto-Dist-To-Lift",17.0);
        //frc::SmartDashboard::PutNumber("roboRio-Dist-To-Lift",hHDistDS);
        //AddSequential(new HHACDriveDistSlow(hHDistDS));


 }
