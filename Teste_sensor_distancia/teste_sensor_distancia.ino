#include <Ultrasonic.h> 

Ultrasonic sensor(9,8,30000); // (Trig pin, Echo pin, maximum distance unit is us) That is, 30000us = about 5 meters 

int distance = 0; //Declare a variable to store the distance. 

void setup() { 
  
Serial.begin(9600); //Initialize the serial port. 
  
} 

void loop() { 
  
  distance = sensor.Ranging(CM); // Measure the distance and store it in the distance variable. 
  Serial.print("Distance "); // Print "Distance" to the serial monitor. 
  Serial.print(distance); // Prints the value stored in the distance variable. 
  Serial.println("cm"); // Prints centimeters. 
  delay (2000); // Delay for 2 seconds and repeat again. 
  
}