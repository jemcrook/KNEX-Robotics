#include <SCServo.h>
#include <BlenderServoAnimation.h>

#define BAUD_RATE 115200

SCSCL sc;

byte ID[]={1,2,3};//servo id of each servo
const int  NumSrvo=sizeof(ID)/sizeof(ID[0]); //store number of servos into NumSrvo

u16 Position[NumSrvo]; required position
u16 FPos[NumSrvo]; Ignore for this sketch
u16 Speed[NumSrvo]={1000,1000,1000}; speed of servo


// Animation object to control the animation
BlenderServoAnimation animation;

// Callback function which is called whenever a servo needs to be moved
void move(byte servoID, int position) {
  // Ignore the servoID (there is only one servo) and write the current position
  //myServo.writeMicroseconds(position);
  Position[servoID-1]=(uint16_t)position;

    sc.SyncWritePos(ID, 3, Position,0, Speed); //write position and speed to servos
}

void setup()
{
  // Initialize serial communication
  Serial.begin(BAUD_RATE);
  //Serial0 is connection to serial bus servos
  Serial0.begin(1000000, SERIAL_8N1);
  sc.pSerial = &Serial0;

  // Set the position callback
  animation.onPositionChange(move);
  // Trigger the animation live mode by passing the Serial instance
  animation.live(Serial);


}

void loop()
{
  // Update the animation state on each loop
  animation.run();
}
