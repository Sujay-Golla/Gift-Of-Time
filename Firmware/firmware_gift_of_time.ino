// THIS IS SAMPLE CODE FROM A TUTORIAL I WAS USING FOR THE CLOCK: https://www.instructables.com/Clockception-How-to-Build-a-Clock-Made-From-Clocks/
// There is obviously a lot more code for every unique feature that I didn't bother copy pasting from other tutorials but the links for the tutorials were posted in the Journal
// This is almost a placeholder file, and will be updated when I start physically building - Sujay
#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

Adafruit_PWMServoDriver board1 = Adafruit_PWMServoDriver(0x40);
Adafruit_PWMServoDriver board2 = Adafruit_PWMServoDriver(0x41);
Adafruit_PWMServoDriver board3 = Adafruit_PWMServoDriver(0x42);

#define SERVOMIN  544 // This is the 'minimum' pulse length count (out of 4096)
#define SERVOMAX  2400// This is the 'maximum' pulse length count (out of 4096)
//#define USMIN  600 // This is the rounded 'minimum' microsecond length based on the minimum pulse of 150
//#define USMAX  2400 // This is the rounded 'maximum' microsecond length based on the maximum pulse of 600
#define SERVO_FREQ 50 // Analog servos run at ~50 Hz updates

int number; // number command 

///////////////////////////////////////////////////////////////////////////////////

void setup() {  // put your setup code here, to run once:

Serial.begin(9600); // initialize Serial connection

board1.begin();  // Initialize servo ccontrol boards 
board2.begin();
board3.begin();
board1.setOscillatorFrequency(27000000);
board2.setOscillatorFrequency(27000000);
board3.setOscillatorFrequency(27000000);
board1.setPWMFreq(SERVO_FREQ);  // Analog servos run at ~50 Hz updates
board2.setPWMFreq(SERVO_FREQ); 
board3.setPWMFreq(SERVO_FREQ); 

Serial.println("Ready for command");

yield();
}

///////////////////////////////////////////////////////////////////////////////////

void loop() {  // put your main code here, to run repeatedly:

while(Serial.available()>1){ //see if a command has been sent
  number = Serial.parseInt(); //turn command into integer
  Serial.print(number);
  Serial.println(" sent");
  angleToPulse(number);
}
delay(100);
}

///////////////////////////////////////////////////////////////////////////////////

void angleToPulse(int ang){
   int pulse1 = map(ang,0, 180, SERVOMIN,SERVOMAX); // map angle of 0 to 180 to Servo min and Servo max 
   int pulse2 = int(float(pulse1) / 1000000 * SERVO_FREQ * 4096);
   Serial.print("Angle: ");Serial.print(ang);
   Serial.print(" pulse: ");Serial.println(pulse2);
   board3.setPWM(14, 0, pulse2);
   delay(100);
}

///////////////////////////////////////////////////////////////////////////////////
