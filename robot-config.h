vex::brain Brain;
vex::controller MainUser = vex::controller();
vex::controller SecondUser = vex::controller(vex::controllerType::partner);
vex::motor RightLift = vex::motor(vex::PORT6,vex::gearSetting::ratio18_1,false);
vex::motor LeftLift = vex::motor(vex::PORT5,vex::gearSetting::ratio18_1,true);
vex::motor RightChassis = vex::motor(vex::PORT8,vex::gearSetting::ratio18_1,true);
vex::motor LeftChassis = vex::motor(vex::PORT3,vex::gearSetting::ratio18_1,true);

vex::gyro Gyroscope = vex::gyro(Brain.ThreeWirePort.B);
