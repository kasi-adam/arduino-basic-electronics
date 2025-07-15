int potPin = A0;        // Potentiometer connected to A0
int ledPin = 9;         // LED connected to PWM pin 9
int potValue = 0;       // To store analog value
int ledBrightness = 0;  // To store PWM value (0-255)

void setup() {
  pinMode(ledPin, OUTPUT);  // Set pin 9 as output
}

void loop() {
  potValue = analogRead(potPin);                 // Read from potentiometer (0 to 1023)
  ledBrightness = map(potValue, 0, 1023, 0, 255); // Convert to 0–255 for PWM
  analogWrite(ledPin, ledBrightness);            // Set LED brightness
  delay(10); // Small delay for stability
}
