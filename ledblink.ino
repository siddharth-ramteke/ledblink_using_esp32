int M1 =23;
int M2 =22;
int M3 =1;
int M4 =3;


void setup() {
  // put your setup code here, to run once:
  pinMode (M1, OUTPUT);
  pinMode (M2, OUTPUT);
  pinMode (M3, OUTPUT);
  pinMode (M4, OUTPUT);

  digitalWrite(M1, LOW);
  digitalWrite(M2, LOW);
  digitalWrite(M3, LOW);
  digitalWrite(M4, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(M1, HIGH);
  digitalWrite(M2, HIGH);
  digitalWrite(M3, HIGH);
  digitalWrite(M4, HIGH);
}
