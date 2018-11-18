vex::brain Brain;
vex::controller MainUser = vex::controller();
vex::controller SecondUser = vex::controller(vex::controllerType::partner);

vex::motor Claw = vex::motor(vex::PORT10,vex::gearSetting::ratio18_1,false);


vex::motor RightLift = vex::motor(vex::PORT6,vex::gearSetting::ratio18_1,false);
vex::motor LeftLift = vex::motor(vex::PORT5,vex::gearSetting::ratio18_1,true);

