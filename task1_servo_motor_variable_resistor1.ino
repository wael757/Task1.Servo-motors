
// C++ code
//*Servoes mototr rotate from 0 degree to 90 degrees
#include <Servo.h>
Servo s1,s2,s3,s4,s5;
int val,val2,val3,val4,val5;



void setup(){
  //*Attaches the Servoes to the pins.
  s1.attach(8);
  s2.attach(9);
  s3.attach(10);
  s4.attach(11);
  s5.attach(12);

 
}

void loop () {
 
// *Attaches variabke resistors to the analog pins(Analog In).  
  val = analogRead(A5);
  val2 = analogRead(A4);
  val3 = analogRead(A3);
  val4 = analogRead(A2);
  val5 = analogRead(A1);
  
  //Scale the varible resistors value with the servoes from 0 to 90 degrees
  val = map(val, 0, 1000, 0, 90);
  val2 = map(val2, 0, 1000, 0, 90);
  val3 = map(val3, 0, 1000, 0, 90);
  val4 = map(val4, 0, 1000, 0, 90);
  val5 = map(val5, 0, 1000, 0, 90);

  
  
  s1.write(val);
  s2.write(val2);
  s3.write(val3);
  s4.write(val4);
  s5.write(val5);


  delay(1000);

 

}
