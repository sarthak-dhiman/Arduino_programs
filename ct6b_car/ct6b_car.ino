
const int CH_1_PIN = 10;
const int CH_2_PIN = 11;

// Motor driver pins
const int STBY_PIN = 9;
const int AIN1_PIN = 2;
const int AIN2_PIN = 4;
const int APWM_PIN = 5;
const int BIN1_PIN = 7;
const int BIN2_PIN = 8;
const int BPWM_PIN = 6;

const int deadzone = 20; 
void setup() {

  //unga bunga
  pinMode(STBY_PIN, OUTPUT);
  pinMode(AIN1_PIN, OUTPUT);
  pinMode(AIN2_PIN, OUTPUT);
  pinMode(APWM_PIN, OUTPUT);
  pinMode(BIN1_PIN, OUTPUT);
  pinMode(BIN2_PIN, OUTPUT);
  pinMode(BPWM_PIN, OUTPUT);

  
  digitalWrite(STBY_PIN, HIGH);
}

void loop() {

  // Read pulse width from receiver
  int y = pulseIn(CH_2_PIN, HIGH, 25000);
  delay(5);
  int x = pulseIn(CH_1_PIN, HIGH, 25000);

  // Convert to PWM value (-255 to 255)
  y = pulseToPWM(y);
  x = pulseToPWM(x);

  
  int left = y + x;
  int right = y - x;

  // Drive motor
  drive(left, right);

  delay(5);
}

void drive(int speed_a, int speed_b) {

  // Limit speed between -255 and 255
  speed_a = constrain(speed_a, -255, 255);
  speed_b = constrain(speed_b, -255, 255);

  // Set direction for motor A
  if ( speed_a == 0 ) {
    digitalWrite(AIN1_PIN, LOW);
    digitalWrite(AIN2_PIN, LOW);
  } else if ( speed_a > 0 ) {
    digitalWrite(AIN1_PIN, HIGH);
    digitalWrite(AIN2_PIN, LOW);
  } else {
    digitalWrite(AIN1_PIN, LOW);
    digitalWrite(AIN2_PIN, HIGH);
  }

  // Set direction for motor B
  if ( speed_b == 0 ) {
    digitalWrite(BIN1_PIN, LOW);
    digitalWrite(BIN2_PIN, LOW);
  } else if ( speed_b > 0 ) {
    digitalWrite(BIN1_PIN, HIGH);
    digitalWrite(BIN2_PIN, LOW);
  } else {
    digitalWrite(BIN1_PIN, LOW);
    digitalWrite(BIN2_PIN, HIGH);
  }

  // Set speed
  analogWrite(APWM_PIN, abs(speed_a));
  analogWrite(BPWM_PIN, abs(speed_b));
}

// Convert RC pulse value to motor PWM value
int pulseToPWM(int pulse) {
  
  // If we're receiving numbers, convert them to motor PWM
  if ( pulse > 1000 ) {
    pulse = map(pulse, 1000, 2000, -500, 500);
    pulse = constrain(pulse, -255, 255);
  } else {
    pulse = 0;
  }

  // Anything in deadzone should stop the motor
  if ( abs(pulse) <= deadzone ) {
    pulse = 0;
  }

  return pulse;
}
