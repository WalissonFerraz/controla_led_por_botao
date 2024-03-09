#define btn 3
#define led 4
int btnClicado = 0;
int btnLiberado = 0;

void setup() {
  pinMode(btn, INPUT);
  pinMode(led, OUTPUT);
}

void trocaLed() {
  if (digitalRead(led) == HIGH) {
    digitalWrite(led, LOW);
  } else {
    digitalWrite(led, HIGH);
  }
}

void keyUp() {
  if (btnClicado == 1 and btnLiberado == 1) {
    btnClicado = 0;
    btnLiberado = 0;
    trocaLed();
  }
}

void loop() {
  if (digitalRead(btn) == HIGH) {
    btnClicado = 1;
    btnLiberado = 0;
  } else {
    btnLiberado = 1;
  }
  keyUp();
}
