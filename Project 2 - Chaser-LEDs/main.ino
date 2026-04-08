//----------------------------------------------------------------------
// CHASING 8 LEDs
// ==============
//
// In this program 8 LEDs are connected and they chase each other
//
// Author: Muhammed Alessa
// File : LEDchase
// Date : april, 2026
//----------------------------------------------------------------------
#define ON HIGH // Define ON
#define OFF LOW // Define OFF
int LED[] = {2, 3, 4, 5, 6, 7, 8, 9}; // LEDs at ports 2 to 9
void setup() 
{
 for(int i = 0; i < 8; i++)
 {
 pinMode(LED[i], OUTPUT); // Configure LEDs as outputs
 digitalWrite(LED[i], OFF); // LED OFF at beginning
}
}
void loop() 
{
 for(int i = 0; i < 8; i++)
 {
 digitalWrite(LED[i], ON); // LED[i[ ON
 delay(500); // 500 ms delay
 digitalWrite(LED[i], OFF); // LED[i] OFF
 }
}
