#define BUTTON_PIN 2

#include <Pushbutton.h>
#include <SoftwareSerial.h>
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

int memory1=0;
int memory2=0;
int counter=0;

LiquidCrystal_I2C lcd(0x3F,20,4);  // set the LCD address to 0x27 for a 16 chars and 2 line display
Pushbutton button(BUTTON_PIN);
SoftwareSerial mySerial(11, 10); // RX, TX

void setup()
{
  lcd.init(); // initialize the lcd 
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("Total people:");
  mySerial.begin(9600);
}


void loop()
{
  if (button.getSingleDebouncedRelease())
    {
      if(counter==0)
      {
        lcd.setCursor(0,1);
        lcd.print("OK");
        lcd.setCursor(0,2);
        lcd.print("Injured people:");
        counter++;
      }
      else if(counter==1)
      {
        lcd.setCursor(0,3);
        lcd.print("SEND");
        String smemory1=String(memory1);
        String smemory2=String(memory2);
        if(memory1<100)
        {
          smemory1="0"+smemory1;
        }
        if(memory1<10)
        {
          smemory1="0"+smemory1;
        }
        if(memory2<100)
        {
          smemory2="0"+smemory2;
        }
        if(memory2<10)
        {
          smemory2="0"+smemory2;
        }
        mySerial.print(smemory1+smemory2);
      }
    }
  if(counter==0)
  {
    int value1=0;
  for(int i=0;i<16;i++)
  {
    value1+=(analogRead(A0));
    delay(10);
  }
  value1=value1>>6;
  if(value1!=memory1)
  {
  lcd.setCursor(13,0);
  lcd.print("        ");
  lcd.setCursor(13,0);
  lcd.print(value1);
  }
  else
  {
    //Nothing
  }
  memory1=value1;
  }
  else if(counter==1)
  {
    int value2=0;
  for(int i=0;i<16;i++)
  {
    value2+=(analogRead(A0));
    delay(10);
  }
  value2=value2>>6;
  if(value2!=memory2)
  {
  lcd.setCursor(15,2);
  lcd.print("     ");
  lcd.setCursor(15,2);
  lcd.print(value2);
  }
  else
  {
    //Nothing
  }
  memory2=value2;
  }
  
  
  
}
