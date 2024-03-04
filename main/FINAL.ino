#include <Arduino.h>

/*************************
*
  Sensor Array pins declaration 
*************************/

#define sensor1 A5
#define sensor2 A4
#define sensor3 A3
#define sensor4 A2
#define sensor5 A1
#define sensor6 A0
#define sensor7 13
#define sensor8 12
const int basespeed =100;
const int maxspeeda = 250;
const int maxspeedb = 250;
const int minspeed = -170;


/*************************
*
  PID control system variables 
*************************/
float Kp = 0.01; // proportional control term
float Ki = 0.000; // integral control term
float Kd = 0.002; // derivative control term
int P;
int I;
int D;

/*************************
*
  Global variables
*************************/
int lastError = 0;

/*************************
*
  Motor control pins declaration
*************************/
const int motorAPin1 = 10;
const int motorAPin2 = 8;
const int motorAEnable = 11; // Enable pin for motor A
const int motorBPin1 = 6;
const int motorBPin2 = 4;
const int motorBEnable = 3; // Enable pin for motor B

/*************************
*
  Function Name: setup
**************************
*
  Summary:
* This is the setup function for the Arduino board. It first sets up
* pins for the sensor array and the motor driver. Then the user needs to
* slide the sensors across the line for 10 seconds as they need to be 
* calibrated. 
* 
* Parameters:
*  none
* 
* Returns:
*  none
*************************/
void setup() {
  // Initialize serial communication

  
  // Set up IR sensor pins
  pinMode(sensor1, INPUT);
  pinMode(sensor2, INPUT);
  pinMode(sensor3, INPUT);
  pinMode(sensor4, INPUT);
  pinMode(sensor5, INPUT);
  pinMode(sensor6, INPUT);
  pinMode(sensor7, INPUT);
  pinMode(sensor8, INPUT);
  
  // Set up motor control pins
  pinMode(motorAPin1, OUTPUT);
  pinMode(motorAPin2, OUTPUT);
  pinMode(motorAEnable, OUTPUT);
  pinMode(motorBPin1, OUTPUT);
  pinMode(motorBPin2, OUTPUT);
  pinMode(motorBEnable, OUTPUT);

  digitalWrite(motorAPin1, LOW);
  digitalWrite(motorAPin2, LOW);
  digitalWrite(motorAEnable, LOW);
  digitalWrite(motorBPin1, LOW);
  digitalWrite(motorBPin2, LOW);
  digitalWrite(motorBEnable, LOW);
  Serial.begin(9600);
  // Wait for initialization
}

/*************************
*
  Function Name: loop
**************************
*
  Summary:
* This is the main function of this application. When the start button
* is pressed, the robot will toggle between following the track and stopping.
* When following the track, the function calls the PID control method. 
* 
* Parameters:
*  none
* 
* Returns:
*  none
*************************/
void loop() {
  int s1 = digitalRead(sensor1);
  int s2 = digitalRead(sensor2);
  int s3 = digitalRead(sensor3);
  int s4 = digitalRead(sensor4);
  int s5 = digitalRead(sensor5);
  int s6 = digitalRead(sensor6);
  int s7 = digitalRead(sensor7);
  int s8 = digitalRead(sensor8);
  Serial.print("Sensor Values: ");
  Serial.print(s1);
  Serial.print(s2);
  Serial.print(s3);
  Serial.print(s4);
  Serial.print(s5);
  Serial.print(s6);
  Serial.print(s7);
  Serial.print(s8);
  Serial.println("");

  
    PID_control();
    delay(50);
}


/*************************
*
  Function Name: stopMotors
**************************
*
  Summary:
* This function stops both motors.
* 
* Parameters:
*  none
* 
* Returns:
*  none
*************************/
void forward_brake(int posa, int posb) {
  if (posa >= 0) {
    digitalWrite(motorAPin1, LOW);
    digitalWrite(motorAPin2, HIGH);
    analogWrite(motorAEnable, posa);
  } else {
    digitalWrite(motorAPin1, HIGH);
    digitalWrite(motorAPin2, LOW);
    analogWrite(motorAEnable, -posa);
  }

  if (posb >= 0) {
    digitalWrite(motorBPin1, LOW);
    digitalWrite(motorBPin2, HIGH);
    analogWrite(motorBEnable, posb);
  } else {
    digitalWrite(motorBPin1, HIGH);
    digitalWrite(motorBPin2, LOW);
    analogWrite(motorBEnable, -posb);
  }
}


/*************************
*
  Function Name: PID_control
**************************
*
  Summary: 
* This is the function of the PID control system. The distinguishing
* feature of the PID controller is the ability to use the three control 
* terms of proportional, integral and derivative influence on the controller 
* output to apply accurate and optimal control. This correction is applied to
* the speed of the motors, which should be in range of the interval [0, max_speed],
* max_speed <= 255. 
* 
* Parameters:
* none
* 
* Returns:
*  none
*************************/
void PID_control() {
    int s1 = digitalRead(sensor1);
  int s2 = digitalRead(sensor2);
  int s3 = digitalRead(sensor3);
  int s4 = digitalRead(sensor4);
  int s5 = digitalRead(sensor5);
  int s6 = digitalRead(sensor6);
  int s7 = digitalRead(sensor7);
  int s8 = digitalRead(sensor8);
  // // Read sensor values and calculate erro
int sum = 0;
sum += s1 * 8000;
sum += s2 * 4000;
sum += s3 * 2000;
sum += s4 * 0; // middle
sum += s5 * 0; // middle
sum += s6 * -2000;
sum += s7 * -4000;
sum += s8 * -8000;
int pos= (sum);
Serial.println(pos);
int error = pos; // Adjust for the ideal location

Serial.println("error:");
Serial.print(error);
 Serial.println("");
  P = error;
  I = I + error;
  D = error - lastError;
  lastError = error;
  
  // Calculate motor speeds based on PID terms
   // Base speed value
  int motorspeed = P*Kp + I*Ki + D*Kd; //calculate the correctio
  int motorspeeda = basespeed + motorspeed;
  int motorspeedb = basespeed - motorspeed;
  
  if (motorspeeda > maxspeeda) {
    motorspeeda = maxspeeda;
  }
  if (motorspeedb > maxspeedb) {
    motorspeedb = maxspeedb;
  }
  if (motorspeeda < minspeed) {
    motorspeeda = minspeed;
  }
  if (motorspeedb < minspeed) {
    motorspeedb = minspeed;
  } 
  Serial.println(motorspeeda);
  Serial.println(motorspeedb);
  forward_brake(motorspeeda, motorspeedb);
  Serial.println("calc A speed :");
   Serial.print(motorspeeda);
    Serial.println("");
   Serial.println("calc B speed :");
   Serial.print(motorspeedb);
    Serial.println("");

}