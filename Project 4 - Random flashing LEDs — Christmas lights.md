# Description:
 In this project, 8 LEDs are connected to the development board as in the 
previous project. The lights flash randomly as if they are Christmas lights (more LEDs can 
easily be added to the project if desired).

---

# Code
```cpp
//----------------------------------------------------------------------
// RANDOM FLASHING 8 LEDs
// ======================
//
// In this program 8 LEDs are connected and they flash randomly as if
// they are Christmas lights
//
// Author: Muhammed Alessa
// File : LEDrandom
// Date : 4, 2026
//----------------------------------------------------------------------
#define ON HIGH // Define ON
#define OFF LOW // Define OFF
int LED[] = {9, 8, 7, 6, 5, 4, 3, 2}; // LEDs at ports 2 to 9
void setup() 
{
 for(int i = 0; i < 8; i++)
 {
 pinMode(LED[i], OUTPUT); // Configure LEDs as outputs
 }
}
//
// Group the port pins together. L is the number of bits (8 here),and No
// is the data to be displayed
//
void Display(int No, int L)
{
 int i, m, j;
 
 m = L - 1;
 for(i = 0; i < L; i++)
 {
 j = 1;
 for(int k = 0; k < m; k++)j = j * 2;
 if((No & j) != 0)
 digitalWrite(LED[i], ON);
 else
 digitalWrite(LED[i], OFF);
 m--;
 }
}
void loop() 
{
 int rnd = random(1, 256); // GEenarte random number
 Display(rnd, 8); // Display the number
 delay(100); // 500 ms delay
}

```
