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

  // Divide the slider into 8 sections for all the moods
  if (moodValue < 128) {
    lcd.print(">> HAPPY :)     ");
  } 
  else if (moodValue >= 128 && moodValue < 256) {
    lcd.print(">> TIRED / REST ");
  } 
  else if (moodValue >= 256 && moodValue < 384) {
    lcd.print(">> I'M OK       ");
  }
  else if (moodValue >= 384 && moodValue < 512) {
    lcd.print(">> HUNGRY       ");
  } 
  else if (moodValue >= 512 && moodValue < 640) {
    lcd.print(">> NOT HUNGRY   ");
  } 
  else if (moodValue >= 640 && moodValue < 768) {
    lcd.print(">> WANT TO GO OUT");
  }
  else if (moodValue >= 768 && moodValue < 896) {
    lcd.print(">> PAIN / HURT  ");
  } 
  else {
    lcd.print(">> NEED HELP!   ");
  }

  delay(400); // Refresh speed
}
