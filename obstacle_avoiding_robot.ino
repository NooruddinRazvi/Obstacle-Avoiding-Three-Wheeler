// -------- PIN CONFIG (CHANGE HERE ONLY) --------
#define IN1 2
#define IN2 3
#define IN3 4
#define IN4 5

#define IR_LEFT 6
#define IR_RIGHT 7

// ----------------------------------------------

void setup() {
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  pinMode(IR_LEFT, INPUT);
  pinMode(IR_RIGHT, INPUT);
}

// -------- MOTOR FUNCTIONS --------
void forward() {
  digitalWrite(IN1, HIGH); digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH); digitalWrite(IN4, LOW);
}

void backward() {
  digitalWrite(IN1, LOW); digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW); digitalWrite(IN4, HIGH);
}

void left() {
  digitalWrite(IN1, LOW); digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH); digitalWrite(IN4, LOW);
}

void right() {
  digitalWrite(IN1, HIGH); digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW); digitalWrite(IN4, HIGH);
}

void stopMotors() {
  digitalWrite(IN1, LOW); digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW); digitalWrite(IN4, LOW);
}

// -------- MAIN LOGIC --------
void loop() {
  int leftSensor = digitalRead(IR_LEFT);
  int rightSensor = digitalRead(IR_RIGHT);

  // Assuming LOW = obstacle (common for IR modules)
  if (leftSensor == HIGH && rightSensor == HIGH) {
    forward();
  }
  else if (leftSensor == LOW && rightSensor == HIGH) {
    right();
  }
  else if (leftSensor == HIGH && rightSensor == LOW) {
    left();
  }
  else {
    backward();
    delay(300);
    right();
    delay(300);
  }
}
