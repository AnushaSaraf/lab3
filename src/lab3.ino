SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);

// Particle RGB LED Example

// Pins for the RGB LED
int redPin = D0;
int greenPin = D1;
int bluePin = D2;



/*
 * Project lab3
 * Description:
 * Author:
 * Date:
 */

// setup() runs once, when the device is first turned on.
void setup() {
  // Initialize RGB LED pins as OUTPUT
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
  // Display primary colors (Red, Green, Blue)
  displayColor(255, 0, 0);   // Red
  delay(2000);
  
  displayColor(0, 255, 0);   // Green
  delay(2000);
  
  displayColor(0, 0, 255);   // Blue
  delay(2000);

  // Display other colors
  displayColor(255, 255, 0);     // Yellow
  delay(2000);
  
  displayColor(255, 0, 255);     // Magenta
  delay(2000);
  
  displayColor(0, 255, 255);     // Cyan
  delay(2000);
  
  displayColor(255, 255, 255);   // White
  delay(2000);
}
// Function to set RGB LED color
void displayColor(int red, int green, int blue) {
  // Set the intensity of each color
  analogWrite(D0, 255);
  analogWrite(D1, 0);
  analogWrite(D2, 0);
}