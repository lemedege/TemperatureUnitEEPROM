
#include <Arduino.h>
#include <EEPROM.h>



String LocalEEPROM(int Length) { // Function to read data local EEPROM
  //Serial.println("Reading local EEPROM");
  
  int address = 0; //Start address to read from
  uint8_t localValue[Length]; // constructs byte array length of string

  for (int i = address; i <= Length + 1; i++) {
   
    localValue[i] =  EEPROM.read(i); 
  }
  
  String DataRead = String((char*)localValue); //Converting array to String. 
  
  //Serial.println(test);
  return DataRead;
}
