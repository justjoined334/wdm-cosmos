const int redLaserPin = 9;    // PWM pin for Red laser/LED
const int greenLaserPin = 10;  // PWM pin for Green laser/LED
const int blueLaserPin = 11;   // PWM pin for Blue laser/LED

// Adjust these values (0-255) to set intensity of each color
int redIntensity = 150;
int greenIntensity = 0;
int blueIntensity = 0;


void setup() {
  pinMode(redLaserPin, OUTPUT);
  pinMode(greenLaserPin, OUTPUT);
  pinMode(blueLaserPin, OUTPUT);
}

void loop() {
  redIntensity = 150;
  greenIntensity = 255;
  blueIntensity = 255;
  analogWrite(redLaserPin, redIntensity);
  analogWrite(greenLaserPin, greenIntensity);
  analogWrite(blueLaserPin, blueIntensity);
  delay(1000);
  redIntensity = 255;
  greenIntensity = 0;
  blueIntensity = 255;
  analogWrite(redLaserPin, redIntensity);
  analogWrite(greenLaserPin, greenIntensity);
  analogWrite(blueLaserPin, blueIntensity);
  delay(1000);
  redIntensity = 255;
  greenIntensity = 255;
  blueIntensity = 0;
  analogWrite(redLaserPin, redIntensity);
  analogWrite(greenLaserPin, greenIntensity);
  analogWrite(blueLaserPin, blueIntensity);
  delay(1000);
}

/*void loop() {
  // Pick random ON intensities (lower = brighter)
  int redIntensity = random(2) * 255;
  int greenIntensity = random(2) * 255;
  int blueIntensity = random(2) * 255;

  // Apply inverted brightness (lower = more intense)
  analogWrite(redLaserPin, redIntensity);
  analogWrite(greenLaserPin, greenIntensity);
  analogWrite(blueLaserPin, blueIntensity);

  // Flash rapidly
  delay(random(50, 150)); // speed of flashing
}*/