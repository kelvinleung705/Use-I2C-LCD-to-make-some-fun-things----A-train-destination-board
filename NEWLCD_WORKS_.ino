#include <LiquidCrystal_I2C.h>
#include <Wire.h> 
LiquidCrystal_I2C lcd(0x3F,16,2);  //設定LCD位置0x27,設定LCD大小為16*2

String train = "Tze-Chiang";
int number = 107;
int car = 6;
String classes ="Business";
String destination = "Kaohsiung";
String via1 = "Taipei";
String via2 = "Taichung";

void setup() {
  // put your setup code here, to run once:
  lcd.init(); //初始化LCD 
  lcd.backlight(); //開啟背光
  //lcd.print("Hello, World!"); //顯示Hello, World!
}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print(train);//顯示Hello, World!//
  lcd.setCursor(11,0);
  lcd.print(number);
  lcd.setCursor(1,1);
  lcd.print(car);
  lcd.setCursor(4,1);
  lcd.print(classes);
  delay(5000);
  
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print(number);
  lcd.setCursor(4,0);
  lcd.print("To");
  lcd.setCursor(7,0);
  lcd.print(destination);
  lcd.setCursor(0,1);
  lcd.print("Via");
  lcd.setCursor(4,1);
  lcd.print(via1);
  delay(3000);

  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print(number);
  lcd.setCursor(4,0);
  lcd.print("To ");
  lcd.setCursor(7,0);
  lcd.print(destination);
  lcd.setCursor(0,1);
  lcd.print("Via");
  lcd.setCursor(4,1);
  lcd.print(via2);
  delay(3000);

}
