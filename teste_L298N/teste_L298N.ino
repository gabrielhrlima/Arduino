#include <ControlMotor.h> // Use the library. 
// Set the pins to be used on the Arduino board. 
ControlMotor control(2,3,7,4,5,6); // Right motor 1, right motor 2, left motor 1, left motor 2, right PWM, left PWM 

int speed = 150; //Declare a variable to store the motor speed. The initial speed is 150. 

void setup() 
{ 
} 
 
void loop() 
{//One motor rotates clockwise, the other motor rotates counterclockwise. 
//So the car moves forward. The speed gradually increases. 
 while(speed < 254){ 
 speed++; 
 control.Motor(speed,1); 
 delay (200);} 
//One motor rotates counterclockwise and the other motor rotates clockwise. 
//So the car goes backwards. 
  control.Motor(-180,1); 
  delay(3000); 
//Two motors rotate clockwise. 
//So the car turns left. 
  control.Motor(200,100); 
  delay(3000); 
//Two motors rotate counterclockwise. 
//So the car turns to the right. 
  control.Motor(200,-100); 
  delay(3000); 
//Both motors stop. 
  control.Motor(0,1); 
  delay(3000); 
  
  speed = 150;//Reset the variable. 
}