// Day 06 - Smart Gas Leakage Detector Demo

const int greenLED = 2;
const int redLED = 3;
const int buzzer = 4;

void setup() {
  pinMode(greenLED, OUTPUT);
  pinMode(redLED, OUTPUT);
  pinMode(buzzer, OUTPUT);

  Serial.begin(9600);

  Serial.println("SMART GAS LEAKAGE DETECTOR");
  Serial.println("=========================");
}

void loop() {

  // SAFE CONDITION
  digitalWrite(greenLED, HIGH);
  digitalWrite(redLED, LOW);
  digitalWrite(buzzer, LOW);

  Serial.println("SAFE CONDITION");
  Serial.println("NO GAS LEAKAGE DETECTED");
  Serial.println("AREA IS SAFE");
  Serial.println("-----------------------");

  delay(3000);

  // GAS LEAK DETECTED
  digitalWrite(greenLED, LOW);
  digitalWrite(redLED, HIGH);
  digitalWrite(buzzer, HIGH);

  Serial.println("WARNING!");
  Serial.println("GAS LEAK DETECTED");
  Serial.println("AREA IS NOT SAFE");
  Serial.println("-----------------------");

  delay(3000);
}