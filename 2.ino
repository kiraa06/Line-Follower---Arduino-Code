int LSP = 2;  
int RSP = 3;

int LMP = 4;
int LMN = 5;
int RMP = 10;
int RMN = 9;

void setup() {
  pinMode(LSP, INPUT);
  pinMode(RSP, INPUT);

  pinMode(LMP, OUTPUT);
  pinMode(LMN, OUTPUT);
  pinMode(RMP, OUTPUT);
  pinMode(RMN, OUTPUT);
}

void loop() {
  int LSD = digitalRead(LSP);
  int RSD = digitalRead(RSP);

  if (LSD == 0 && RSD == 0)
  {
    //move forward
    digitalWrite(LMP, LOW);
    digitalWrite(LMN, HIGH);
    digitalWrite(RMP, HIGH);
    digitalWrite(RMN, LOW);
  }

  else if (LSD ==1 && RSD == 0)
  {
    //left movement
    digitalWrite(LMP, HIGH);
    digitalWrite(LMN, LOW);
    digitalWrite(RMP, HIGH);
    digitalWrite(RMN, LOW);
  }

  else if (LSD == 0 && RSD == 1)
  {
    //right movement
    digitalWrite(LMP, LOW);
    digitalWrite(LMN, HIGH);
    digitalWrite(RMP, LOW);
    digitalWrite(RMN, HIGH);
  }

  else if (LSD == 1 && RSD == 1)
  {
    //stop
    digitalWrite(LMP, LOW);
    digitalWrite(LMN, LOW);
    digitalWrite(RMP, LOW);
    digitalWrite(RMN, LOW);
  }
}
