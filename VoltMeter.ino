/*
 Name:		VoltMeter.ino
 Created:	9/29/2019 3:52:58 PM
 Author:	jseitz
*/

// the setup function runs once when you press reset or power the board

float input_voltage = 0.0f;		//Initalize global value

void setup() {
	Serial.begin(9600);			//  start Serial Monitor @ a transfer rate 9600 bits per second
}

// the loop function runs over and over again until power down or reset
void loop() {
	//Conversion formula for voltage

	int analog_value = analogRead(A0); //int between 0 and 1023 based on 5Volts, 5Volts/1023= 4.9 mV
	input_voltage = (analog_value * 5.0) / 1024.0; //Converts into Volts

	Serial.print("Volts= ");		//Echos Volts to the serial monitor display
	Serial.println(input_voltage);	//Prints the value of input_voltage then carriage return
	delay(1000);					//Delay in ms, halts all processes for one second
}
