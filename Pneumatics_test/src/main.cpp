/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       C:\Users\Jeremy School                                    */
/*    Created:      Tue Sep 12 2023                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// DigitalOutA          digital_out   A               
// Controller1          controller                    
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"

using namespace vex;

int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();

  while(1){
    if(Controller1.ButtonB.pressing()){
      DigitalOutA.set(false);
    }else if(Controller1.ButtonA.pressing()){
      DigitalOutA.set(true);
    }
  }

  // while(1){
  //   DigitalOutA.set(true);
  //   wait(2000,msec);
  //   DigitalOutA.set(false);
  //   wait(2,sec);
  // }
}
