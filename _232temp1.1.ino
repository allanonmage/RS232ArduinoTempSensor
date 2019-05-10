

#include <dht.h>
#include <LiquidCrystal.h>
LiquidCrystal lcd(8, 13, 9, 4, 5, 6, 7);
dht DHT;

#define DHT11_PIN 2

void setup()
{
  lcd.clear();
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
  Serial.begin(115200);
  Serial.println("DHT TEST PROGRAM ");
  Serial.print("LIBRARY VERSION: ");
  Serial.println(DHT_LIB_VERSION);
  Serial.println();
  Serial.println("Type,\tstatus,\tHumidity (%),\tTemperature (C)");
  
  lcd.print("DHT TEST PROGRAM ");
  lcd.print("LIBRARY VERSION: ");
  lcd.print(DHT_LIB_VERSION);
  lcd.print("Type,\tstatus,\tHumidity (%),\tTemperature (C)");
  delay(2000);
  lcd.clear();
}

void loop()
{
  // READ DATA
  Serial.print("DHT11, \t");
  int chk = DHT.read11(DHT11_PIN);
  switch (chk)
  {
    case DHTLIB_OK:  
		//Serial.print("OK,\t"); 
    lcd.print("OK,\t");
		break;
    case DHTLIB_ERROR_CHECKSUM: 
		//Serial.print("Checksum error,\t");
    lcd.print("Checksum error,\t");
		break;
    case DHTLIB_ERROR_TIMEOUT: 
		//Serial.print("Time out error,\t");
    lcd.print("Time out error,\t");
		break;
    default: 
		//Serial.print("Unknown error,\t");
    lcd.print("Unknown error,\t");
		break;
  }
  // DISPLAY DATA
  Serial.print("T00 ");
  Serial.print(DHT.temperature, 1);
  Serial.print("C, H00 ");
  Serial.print(DHT.humidity, 1);
  Serial.println("%");

  Serial.print("T01 ");
  Serial.print("XX.x");
  Serial.print("C, H01 ");
  Serial.print("XX.x");
  Serial.println("%");

  // Debug stuff; use a jumper on pins 2 and 3 of the 232 port to see if its working
  //Serial.print("Read via 232: ");
  //erial.println(Serial.readStringUntil("\r\n"));

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("T00 ");
  lcd.print(DHT.temperature, 1);
  lcd.print("C");
  lcd.setCursor(0, 1);
  lcd.print("H00 ");
  lcd.print(DHT.humidity, 1);
  lcd.print("%");
  delay(1500);
  
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("T01 ");
  lcd.print("XX.x");
  lcd.print("C");
  lcd.setCursor(0, 1);
  lcd.print("H01 ");
  lcd.print("XX.x");
  lcd.print("%");
  delay(1500);
}
//
// END OF FILE
//
