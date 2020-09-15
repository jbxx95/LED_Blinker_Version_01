/*

   Funktion: LED blinken mit Ausgabe an den seriellen Monitor
   Programmierer: Jannik Birk
   Letzte Änderung: 11.09.2020
   Version: 0.0.1
   Hardware: grüne LED an Pin 3 / 220 Ohm Widerstand
*/



void setup()
{

  pinMode(3, OUTPUT); //LED grün
  Serial.begin(9600); //zur Kontrolle

}

void loop()
{

  digitalWrite(3, HIGH); //Pin 3 HIGH
  Serial.println("LED an "); //serieller Monitor LED an
  delay(1000);
  digitalWrite(3, LOW); //Pin 3 LOW
  Serial.println("LED aus"); //serieller Monitor LED aus
  delay(1000);

}
