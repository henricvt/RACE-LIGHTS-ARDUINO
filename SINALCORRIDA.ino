#define V 12
#define R1 11
#define R2 10
#define BUZZER 9

void setup() {

  pinMode(V, OUTPUT);
  pinMode(R1,OUTPUT);
  pinMode(R2,OUTPUT);
  pinMode(BUZZER,OUTPUT);

}

void loop() {

  digitalWrite(R2, HIGH);
  digitalWrite(BUZZER, HIGH);

  delay(700);

  digitalWrite(BUZZER, LOW);

  delay(700);

  digitalWrite(R1, HIGH);
  digitalWrite(BUZZER, HIGH);

  delay(700);

  digitalWrite(BUZZER, LOW);

  delay(700);

  digitalWrite(V, HIGH);
  digitalWrite(BUZZER, HIGH);

  delay(2000);

  digitalWrite(V, LOW);
  digitalWrite(R2,LOW);
  digitalWrite(R1,LOW);
  digitalWrite(BUZZER, LOW);

  delay(2000);

}
