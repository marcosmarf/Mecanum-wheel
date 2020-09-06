void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);

  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);

  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);

  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  left();
  delay(400);
  stop();
  delay(400);
  right();
  delay(200);
  stop();
  delay(400);
  
  ror();
  delay(400);
  stop();
  delay(400);
  rol();
  delay(200);
  stop();
  delay(400);
  
  if (Serial.available() > 0) {
    char c = Serial.read();
    switch (c) {
      // TopRight Wheel
      case 'q':
        digitalWrite(2, 1);
        digitalWrite(3, 0);
        Serial.println("TopRight >");
        break;
      case 'a':
        digitalWrite(2, 0);
        digitalWrite(3, 1);
        Serial.println("TopRight <");
        break;
      case 'z':
        digitalWrite(2, 0);
        digitalWrite(3, 0);
        Serial.println("TopRight =");
        break;
      // TopLeft Wheel
      case 'w':
        digitalWrite(4, 0);
        digitalWrite(5, 1);
        Serial.println("TopLeft >");
        break;
      case 's':
        digitalWrite(4, 1);
        digitalWrite(5, 0);
        Serial.println("TopLeft <");
        break;
      case 'x':
        digitalWrite(4, 0);
        digitalWrite(5, 0);
        Serial.println("TopLeft =");
        break;
      // TopRight Wheel
      case 'e':
        digitalWrite(6, 1);
        digitalWrite(7, 0);
        Serial.println("RearLeft >");
        break;
      case 'd':
        digitalWrite(6, 0);
        digitalWrite(7, 1);
        Serial.println("RearLeft <");
        break;
      case 'c':
        digitalWrite(6, 0);
        digitalWrite(7, 0);
        Serial.println("RearLeft =");
        break;
      // TopRight Wheel
      case 'r':
        digitalWrite(8, 1);
        digitalWrite(9, 0);
        Serial.println("RearRight >");
        break;
      case 'f':
        digitalWrite(8, 0);
        digitalWrite(9, 1);
        Serial.println("RearRight <");
        break;
      case 'v':
        digitalWrite(8, 0);
        digitalWrite(9, 0);
        Serial.println("RearRight =");
        break;
      // Movements
      case 'i':
        fwd();
        break;
      case ' ':
        stop();
        break;
      case 'k':
        rear();
        break;
      case 'j':
        rol();
        break;
      case 'l':
        ror();
        break;
      
      case 'y':
        sli1();
        break;
      case 'u':
        sli2();
        break;
      case 'o':
        sli3();
        break;
      case 'p':
        sli4();
        break;
      case 'n':
        left();
        break;
      case 'm':
        right();
        break;
    }
  }
}

void fwd() {
  digitalWrite(2, 1);
  digitalWrite(3, 0);

  digitalWrite(4, 0);
  digitalWrite(5, 1);

  digitalWrite(6, 1);
  digitalWrite(7, 0);

  digitalWrite(8, 1);
  digitalWrite(9, 0);
}
void rear() {
  digitalWrite(2, 0);
  digitalWrite(3, 1);

  digitalWrite(4, 1);
  digitalWrite(5, 0);

  digitalWrite(6, 0);
  digitalWrite(7, 1);

  digitalWrite(8, 0);
  digitalWrite(9, 1);
}
void rol() {

  digitalWrite(2, 1);
  digitalWrite(3, 0);

  digitalWrite(4, 1);
  digitalWrite(5, 0);

  digitalWrite(6, 0);
  digitalWrite(7, 1);

  digitalWrite(8, 1);
  digitalWrite(9, 0);

}

void ror() {

  digitalWrite(2, 0);
  digitalWrite(3, 1);

  digitalWrite(4, 0);
  digitalWrite(5, 1);

  digitalWrite(6, 1);
  digitalWrite(7, 0);

  digitalWrite(8, 0);
  digitalWrite(9, 1);
}
void sli1() {

  digitalWrite(2, 0);
  digitalWrite(3, 1);

  digitalWrite(6, 0);
  digitalWrite(7, 1);
}
void sli2() {

  digitalWrite(4, 0);
  digitalWrite(5, 1);

  digitalWrite(8, 1);
  digitalWrite(9, 0);
}
void sli3() {

  digitalWrite(2, 1);
  digitalWrite(3, 0);

  digitalWrite(6, 1);
  digitalWrite(7, 0);
}
void sli4() {
  digitalWrite(4, 1);
  digitalWrite(5, 0);

  digitalWrite(8, 0);
  digitalWrite(9, 1);
}

void stop() {
  digitalWrite(2, 0);
  digitalWrite(3, 0);

  digitalWrite(6, 0);
  digitalWrite(7, 0);


  digitalWrite(4, 0);
  digitalWrite(5, 0);

  digitalWrite(8, 0);
  digitalWrite(9, 0);
}

void left() {
  digitalWrite(2, 1);
  digitalWrite(3, 0);

  digitalWrite(4, 1);
  digitalWrite(5, 0);

  digitalWrite(6, 1);
  digitalWrite(7, 0);


  digitalWrite(8, 0);
  digitalWrite(9, 1);
}

void right() {
  digitalWrite(2, 0);
  digitalWrite(3, 1);

  digitalWrite(4, 0);
  digitalWrite(5, 1);

  digitalWrite(6, 0);
  digitalWrite(7, 1);


  digitalWrite(8, 1);
  digitalWrite(9, 0);
}
