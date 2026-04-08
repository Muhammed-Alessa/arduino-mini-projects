**Description**: In this project, an external LED is connected to the development board. The LED blinks in the form of an SOS signal (ON ON ON OFF OFF OFF ON  ON ON, or in Morse terms: …---…) with a small delay between each output.

---

```cpp
/*----------------------------------------------------------------------
// LED FLASHING SOS
// ================
//
// This program blinks the LED connected to port 5 of the board
//
// Author: Muhammed Alessa
// File : SOS
// Date : 4, 2026
----------------------------------------------------------------------*/
#include <Arduino.h>
#define ON HIGH // Define ON
#define OFF LOW // Define OFF
#define LED  5 // LED at port 2

void setup()
{
 pinMode(LED, OUTPUT); // Configure LED as output
}

void loop()
{

 for(int i=0; i < 3; i++) // Send S

 {
 digitalWrite(LED, ON);

 delay(200);

 digitalWrite(LED, OFF);

 delay(200);

 }

 delay(500);

 for(int i=0; i < 3; i++) // Send O

 {

 digitalWrite(LED, ON);

 delay(600);

 digitalWrite(LED, OFF);

 delay(600);

 }

 delay(500);

 for(int i=0; i < 3; i++) // Send S

 {

 digitalWrite(LED, ON);

 delay(200);

 digitalWrite(LED, OFF);

 delay(200);

 }

 delay(2000);

}

```