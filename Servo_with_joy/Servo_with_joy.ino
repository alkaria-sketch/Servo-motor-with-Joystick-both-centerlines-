
#include <Servo.h>//including the servo library
int centerlinex = 0;//centerline x value for the analogPin 0(it will read the value by analogRead)
int centerliney = 1;//centerline y value for the analogPin 1
Servo servo1;//Defining our servo as servo1

int ServoValx;//value for the centerline x

int ServoValy;//value for the centerline y

void setup() {
  servo1.attach(8);//we are attaching the pin for servo to 8th pin
 
  

}

void loop() {
  //x centerline
ServoValx = analogRead(centerlinex);
ServoValx = map(ServoValx, 0, 1023, 0,180);
servo1.write(ServoValx);

//y centerline

ServoValy = analogRead(centerliney);
ServoValy = map(ServoValy, 0, 1023, 0,180);
servo1.write(ServoValy);

delay(15);
}
