int val;
int a1 = 3, a2 = 5, b1 = 8, b2 = 10;

void setup() {
  Serial.begin(9600);
  pinMode(a1, OUTPUT);
  pinMode(a2, OUTPUT);
  pinMode(b1, OUTPUT);
  pinMode(b2, OUTPUT);
}

void loop() {
  if(Serial.available())
  {
    val = Serial.read();
    if(val == '0'){
      remove0();
    }
    if(val == '1'){
      straight();
    }
    if(val == '2'){
      backword();
    }
    if(val == '3'){
      remove1();
    }
    if(val == '4'){
      left();
    }
    if(val == '5'){
      right();
    }
  }
}

void straight(){
  digitalWrite(a1, HIGH);
  digitalWrite(a2, LOW);
}

void backword(){
  digitalWrite(a1, LOW);
  digitalWrite(a2, HIGH);
}

void remove0(){
  digitalWrite(a1, LOW);
  digitalWrite(a2, LOW);
}

void right(){
  digitalWrite(b1, LOW);
  digitalWrite(b2, HIGH);
}

void left(){
  digitalWrite(b1, HIGH);
  digitalWrite(b2, LOW);
}

void remove1(){
  digitalWrite(b1, LOW);
  digitalWrite(b2, LOW);
}

