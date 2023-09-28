// include the library for lcd
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

// set the LCD address to 0x27 for a 16 chars and 2 line display
LiquidCrystal_I2C lcd(0x27,20,4);  

#define switch1 A0
#define switch2 A1
#define switch3 A2
#define switch4 A3
#define switch5 A4

unsigned int f1; 
unsigned int f2; 
unsigned int f3; 
unsigned int f4; 
unsigned int f5;


void setup()
{
// Set Pinmode for inpput limit switch pins 
pinMode(A0, INPUT);
pinMode(A1, INPUT); 
pinMode(A2, INPUT); 
pinMode(A3, INPUT); 
pinMode(A4, INPUT);

//Set the baudrate for Arduino board and Serial Monitor 
Serial.begin(9600);

// initialize the lcd
lcd.init();    
lcd.clear(); 
lcd.backlight();

}

void loop()
{
// Setting the variables for the input values 
f1 = digitalRead(A0);
f2 = digitalRead(A1); 
f3 = digitalRead(A2); 
f4 = digitalRead(A3); 
f5 = digitalRead(A4);

// Print the values of the switches 
Serial.print(f1);
Serial.print(" "); 
Serial.print(f2);
Serial.print(" "); 
Serial.print(f3);
Serial.print(" "); 
Serial.print(f4);
Serial.print(" "); 
Serial.print(f5);
Serial.println(" ");

// Setting different conditions for the input set the the designated word
if ((f1 == 0) && (f2 == 0) && (f3 == 0) && (f4 == 0)&& (f5 == 1))
{
lcd.setCursor(0, 1); 
lcd.print("Hello"); 
delay(1000);
}

else if ((f1 == 0) && (f2 == 0) && (f3 == 1) && (f4 == 1)&& (f5== 1) )
{
lcd.setCursor(0, 1); 
lcd.print("No"); 
delay(1000);
}

else if ((f1 == 1) && (f2 == 1) && (f3 == 1) && (f4 == 1)&& (f5== 0) )
{
lcd.setCursor(0, 1); 
lcd.print("Goodbye"); 
delay(1000);
}

else if ((f1 == 0) && (f2 == 1) && (f3 == 1) && (f4 == 0)&& (f5== 0) )
{
lcd.setCursor(0, 1); 
lcd.print("I Love You"); 
delay(1000);
}
else if ((f1 == 0) && (f2 == 0) && (f3 == 0) && (f4 == 0)&& (f5 == 0))
{
lcd.setCursor(0, 1); 
lcd.print("AT REST"); 
delay(1000);
}

delay(500);
}
