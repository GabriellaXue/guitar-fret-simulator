// Import the CapacitiveSensor Library.
#include <CapacitiveSensor.h>


 
#define speaker 11


// Set the Send Pin & Receive Pin.

// The First microcontroller chip board
// first string
CapacitiveSensor   cs_2_3_1 = CapacitiveSensor(2,3);        
CapacitiveSensor   cs_2_4_1 = CapacitiveSensor(2,4);         
CapacitiveSensor   cs_2_5_1 = CapacitiveSensor(2,5);     
CapacitiveSensor   cs_2_6_1 = CapacitiveSensor(2,6);   
  
// second string
CapacitiveSensor   cs_2_11_1 = CapacitiveSensor(2,11);     
CapacitiveSensor   cs_2_12_1 = CapacitiveSensor(2,12);      
CapacitiveSensor   cs_2_13_1 = CapacitiveSensor(2,13);
CapacitiveSensor   cs_2_14_1 = CapacitiveSensor(2,14);   

// third string
CapacitiveSensor   cs_2_15_1 = CapacitiveSensor(2,15);      
CapacitiveSensor   cs_2_16_1 = CapacitiveSensor(2,16);
CapacitiveSensor   cs_2_17_1 = CapacitiveSensor(2,17);      
CapacitiveSensor   cs_2_18_1 = CapacitiveSensor(2,18); 

// The second microcontroller chip board
// first string
CapacitiveSensor   cs_2_3_2 = CapacitiveSensor(2,3);        
CapacitiveSensor   cs_2_4_2 = CapacitiveSensor(2,4);         
CapacitiveSensor   cs_2_5_2 = CapacitiveSensor(2,5);     
CapacitiveSensor   cs_2_6_2 = CapacitiveSensor(2,6);   
  
// second string
CapacitiveSensor   cs_2_11_2 = CapacitiveSensor(2,11);     
CapacitiveSensor   cs_2_12_2 = CapacitiveSensor(2,12);      
CapacitiveSensor   cs_2_13_2 = CapacitiveSensor(2,13);
CapacitiveSensor   cs_2_14_2 = CapacitiveSensor(2,14);   

// third string
CapacitiveSensor   cs_2_15_2 = CapacitiveSensor(2,15);      
CapacitiveSensor   cs_2_16_2 = CapacitiveSensor(2,16);
CapacitiveSensor   cs_2_17_2 = CapacitiveSensor(2,17);      
CapacitiveSensor   cs_2_18_2 = CapacitiveSensor(2,18);
void setup()                    
{
  // turn off autocalibrate
  cs_2_3_1.set_CS_AutocaL_Millis(0xFFFFFFFF);
  cs_2_4_1.set_CS_AutocaL_Millis(0xFFFFFFFF);
  cs_2_5_1.set_CS_AutocaL_Millis(0xFFFFFFFF);
  cs_2_6_1.set_CS_AutocaL_Millis(0xFFFFFFFF);
  cs_2_11_1.set_CS_AutocaL_Millis(0xFFFFFFFF);
  cs_2_12_1.set_CS_AutocaL_Millis(0xFFFFFFFF);
  cs_2_13_1.set_CS_AutocaL_Millis(0xFFFFFFFF);
  cs_2_14_1.set_CS_AutocaL_Millis(0xFFFFFFFF);
  cs_2_15_1.set_CS_AutocaL_Millis(0xFFFFFFFF);
  cs_2_16_1.set_CS_AutocaL_Millis(0xFFFFFFFF);
  cs_2_17_1.set_CS_AutocaL_Millis(0xFFFFFFFF);
  cs_2_18_1.set_CS_AutocaL_Millis(0xFFFFFFFF);
  cs_2_3_2.set_CS_AutocaL_Millis(0xFFFFFFFF);
  cs_2_4_2.set_CS_AutocaL_Millis(0xFFFFFFFF);
  cs_2_5_2.set_CS_AutocaL_Millis(0xFFFFFFFF);
  cs_2_6_2.set_CS_AutocaL_Millis(0xFFFFFFFF);
  cs_2_11_2.set_CS_AutocaL_Millis(0xFFFFFFFF);
  cs_2_12_2.set_CS_AutocaL_Millis(0xFFFFFFFF);
  cs_2_13_2.set_CS_AutocaL_Millis(0xFFFFFFFF);
  cs_2_14_2.set_CS_AutocaL_Millis(0xFFFFFFFF);
  cs_2_15_2.set_CS_AutocaL_Millis(0xFFFFFFFF);
  cs_2_16_2.set_CS_AutocaL_Millis(0xFFFFFFFF);
  cs_2_17_2.set_CS_AutocaL_Millis(0xFFFFFFFF);
  cs_2_18_2.set_CS_AutocaL_Millis(0xFFFFFFFF);
  
  // Arduino start communicate with computer.
  Serial.begin(9600);
}

void loop()                    
{
  // Set a timer.
  long start = millis();
  
  // Set the sensitivity of the sensors.
  // 3000 is the number of samples to take in
  long total1 =  cs_2_3_1.capacitiveSensor(3000);
  long total2 =  cs_2_4_1.capacitiveSensor(3000);
  long total3 =  cs_2_5_1.capacitiveSensor(3000);
  long total4 =  cs_2_6_1.capacitiveSensor(3000);
  long total5 =  cs_2_11_1.capacitiveSensor(3000);
  long total6 =  cs_2_12_1.capacitiveSensor(3000);
  long total7 =  cs_2_13_1.capacitiveSensor(3000);
  long total8 =  cs_2_14_1.capacitiveSensor(3000);
  long total9 =  cs_2_15_1.capacitiveSensor(3000);
  long total10 =  cs_2_16_1.capacitiveSensor(3000);
  long total11 =  cs_2_17_1.capacitiveSensor(3000);
  long total12 =  cs_2_18_1.capacitiveSensor(3000);
  long total13 =  cs_2_3_2.capacitiveSensor(3000);
  long total14 =  cs_2_4_2.capacitiveSensor(3000);
  long total15 =  cs_2_5_2.capacitiveSensor(3000);
  long total16 =  cs_2_6_2.capacitiveSensor(3000);
  long total17 =  cs_2_11_2.capacitiveSensor(3000);
  long total18 =  cs_2_12_2.capacitiveSensor(3000);
  long total19 =  cs_2_13_2.capacitiveSensor(3000);
  long total20 =  cs_2_14_2.capacitiveSensor(3000);
  long total21 =  cs_2_15_2.capacitiveSensor(3000);
  long total22 =  cs_2_16_2.capacitiveSensor(3000);
  long total23 =  cs_2_17_2.capacitiveSensor(3000);
  long total24 =  cs_2_18_2.capacitiveSensor(3000);


  Serial.print(millis() - start);        // check on performance in milliseconds
  Serial.print("\t");                    // tab character for debug windown spacing

  Serial.print(total1);                  // print sensor output 1
  Serial.print("\t");                    // Leave some space before print the next output
  Serial.print(total2);                  // print sensor output 2
  Serial.print("\t");                    // Leave some space before print the next output
  Serial.print(total3);                  // print sensor output 3
  Serial.print("\t");                    // Leave some space before print the next output
  Serial.print(total4);                  // print sensor output 4
  Serial.print("\t");                    // Leave some space before print the next output
  Serial.print(total5);                  // print sensor output 5
  Serial.print("\t");                    // Leave some space before print the next output
  Serial.print(total6);                  // print sensor output 6
  Serial.print("\t");                    // leave some space before print the next output
  Serial.print(total7);                  // print sensor output 7
  Serial.print("\t");                    // Leave some space before print the next output
  Serial.print(total8);                  // print sensor output 8
  Serial.print("\t");                    // Leave some space before print the next output
  Serial.print(total9);                  // print sensor output 9
  Serial.print("\t");                    // Leave some space before print the next output
  Serial.print(total10);                 // print sensor output 10
  Serial.print("\t");                    // Leave some space before print the next output
  Serial.print(total11);                 // print sensor output 11
  Serial.print("\t");                    // Leave some space before print the next output
  Serial.print(total12);                 // print sensor output 12
  Serial.print("\t");                    // leave some space before print the next output
  Serial.print(total13);                 // print sensor output 13
  Serial.print("\t");                    // Leave some space before print the next output
  Serial.print(total14);                 // print sensor output 14
  Serial.print("\t");                    // Leave some space before print the next output
  Serial.print(total15);                 // print sensor output 15
  Serial.print("\t");                    // Leave some space before print the next output
  Serial.print(total16);                 // print sensor output 16
  Serial.print("\t");                    // Leave some space before print the next output
  Serial.print(total17);                 // print sensor output 17
  Serial.print("\t");                    // Leave some space before print the next output
  Serial.print(total18);                 // print sensor output 18
  Serial.print("\t");                    // leave some space before print the next output
  Serial.print(total19);                 // print sensor output 19
  Serial.print("\t");                    // Leave some space before print the next output
  Serial.print(total20);                 // print sensor output 20
  Serial.print("\t");                    // Leave some space before print the next output
  Serial.print(total21);                 // print sensor output 21
  Serial.print("\t");                    // Leave some space before print the next output
  Serial.print(total22);                 // print sensor output 22
  Serial.print("\t");                    // Leave some space before print the next output
  Serial.print(total23);                 // print sensor output 23
  Serial.print("\t");                    // Leave some space before print the next output
  Serial.println(total24);               // print sensor output 24
  // "println" - "ln" represent as "line", system will jump to next line after print the output.
  
  
  
  
  // When hand is touched the sensor, the speaker will produce a tone.
  // I set a threshold for it, so that the sensor won't be too sensitive.
  if (total1 > 500) tone(speaker,44);   // frequency
  if (total2 > 500) tone(speaker,46);   // https://www.arduino.cc/en/Tutorial/toneMelody
  if (total3 > 500) tone(speaker,49);
  if (total4 > 500) tone(speaker,52);
  if (total5 > 500) tone(speaker,55);
  if (total6 > 500) tone(speaker,58);
  if (total7 > 500) tone(speaker,62);
  if (total8 > 500) tone(speaker,69);
  if (total9 > 500) tone(speaker,78);
  if (total10 > 500) tone(speaker,82);
  if (total11 > 500) tone(speaker,87);
  if (total12 > 500) tone(speaker,93);
  if (total13 > 500) tone(speaker,104);
  if (total14 > 500) tone(speaker,110);
  if (total15 > 500) tone(speaker,117);
  if (total16 > 500) tone(speaker,123);
  if (total17 > 500) tone(speaker,131);
  if (total18 > 500) tone(speaker,139);
  if (total19 > 500) tone(speaker,147);
  if (total20 > 500) tone(speaker,156);
  if (total21 > 500) tone(speaker,175);
  if (total22 > 500) tone(speaker,185);
  if (total23 > 500) tone(speaker,196);
  if (total24 > 500) tone(speaker,208);
  
  // When hand didn't touch on it, no tone is produced.
  if (total1<=500  &  total2<=500  &  total3<=500 & total4<=500  &  total5<=500  &  total6<=500 &  total7<=500 &  total8<=500
      & total9<=500 & total10<=500 & total11<=500 & total12<=500 & total13<=500 & total14<=500 & total15<=500 & total16<=500
      & total17<=500 & total18<=500 & total19<=500 & total20<=500 & total21<=500 & total22<=500 & total23<=500 & total24<=500)
    noTone(speaker);

  delay(10);                             // arbitrary delay to limit data to serial port 
}
