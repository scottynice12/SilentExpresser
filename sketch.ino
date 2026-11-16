#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Initialize the LCD screen (Address 0x27, 16 columns, 2 rows)
LiquidCrystal_I2C lcd(0x27, 16, 2);

const int moodPin = A0; // Slider connected to A0

void setup() {
  lcd.init();                      
  lcd.backlight();                 
  
  lcd.setCursor(0, 0);
  lcd.print("Mood Communicator");
  lcd.setCursor(0, 1);
  lcd.print("System Ready...");
  delay(2000);
  lcd.clear();
}

void loop() {
  int moodValue = analogRead(moodPin); // Reads from 0 to 1023

  lcd.setCursor(0, 0);
  lcd.print("I am feeling:   "); // Header text
  
  lcd.setCursor(0, 1);

  // Divide the slider into 4 easy mood sections
  if (moodValue < 250) {
    lcd.print(">> HAPPY :)     ");
  } 
  else if (moodValue >= 250 && moodValue < 500) {
    lcd.print(">> TIRED / REST ");
  } 
  else if (moodValue >= 500 && moodValue < 750) {
    lcd.print(">> PAIN / HURT  ");
  } 
  else {
    lcd.print(">> NEED HELP!   ");
  }

  delay(400); // Refresh speed
}
