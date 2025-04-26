// Declaração dos pinos de cada LED

int led_e0 = 16;  // Posição: Esquerda Base || Porta ESP: D0 || Posição Pino: Ao lado do Pino GND (IMPORTANTE!!!!!)
int led_e1 = 5;   // Posição: Esquerda Baixo || Porta ESP: D1 || Posição Pino: Ao lado do D0
int led_e2 = 4;   // Posição: Esquerda Meio || Porta ESP: D2 || Posição Pino: Ao lado do D1
int led_e3 = 0;   // Posição: Esquerda Cima || Porta ESP: D3 || Posição Pino: Ao lado do D2
int led_e4 = 2;   // Posição: Esquerda Topo || Porta ESP: D4 || Posição Pino: Ao lado do D3

int led_c2 = 14;  // Posição: Centro Topo || Porta ESP: D5 || Posição Pino: De frente pro D4
int led_c1 = 15;  // Posição: Centro Meio || Porta ESP: D8 || Posição Pino: Ao lado do D7
int led_c0 = 1;   // Posição: Centro Base || Porta ESP: TX || Posição Pino: Ao lado da RX

int led_d3 = 12;  // Posição: Direita Cima || Porta ESP: D6 || Posição Pino: De frente pro D5 (outro lado)
int led_d2 = 13;  // Posição: Direita Meio || Porta ESP: D7 || Posição Pino: Ao lado do D6
int led_d1 = 3;   // Posição: Direita Baixo || Porta ESP: RX || Posição Pino: Ao lado do D8


void setup() {
  // Configurar todos os pinos como saída
  pinMode(led_e0, OUTPUT);
  pinMode(led_e1, OUTPUT);
  pinMode(led_e2, OUTPUT);
  pinMode(led_e3, OUTPUT);
  pinMode(led_e4, OUTPUT);

  pinMode(led_d1, OUTPUT);
  pinMode(led_d2, OUTPUT);
  pinMode(led_d3, OUTPUT);

  pinMode(led_c0, OUTPUT);
  pinMode(led_c1, OUTPUT);
  pinMode(led_c2, OUTPUT);
}

void loop() {
  mostrar0(); delay(500);
  mostrar1(); delay(500);
  mostrar2(); delay(500);
  mostrar3(); delay(500);
  mostrar4(); delay(500);
  mostrar5(); delay(500);
  mostrar6(); delay(500);
  mostrar7(); delay(500);
  mostrar8(); delay(500);
  mostrar9(); delay(500);
}

void apagarTudo() {
  digitalWrite(led_e0, LOW);
  digitalWrite(led_e1, LOW);
  digitalWrite(led_e2, LOW);
  digitalWrite(led_e3, LOW);
  digitalWrite(led_e4, LOW);

  digitalWrite(led_d3, LOW);
  digitalWrite(led_d2, LOW);
  digitalWrite(led_d1, LOW);

  digitalWrite(led_c0, LOW);
  digitalWrite(led_c1, LOW);
  digitalWrite(led_c2, LOW);
}

void testarLeds() {
  int tempo = 1000;

  digitalWrite(led_e0, HIGH); delay(tempo); digitalWrite(led_e0, LOW);
  digitalWrite(led_e1, HIGH); delay(tempo); digitalWrite(led_e1, LOW);
  digitalWrite(led_e2, HIGH); delay(tempo); digitalWrite(led_e2, LOW);
  digitalWrite(led_e3, HIGH); delay(tempo); digitalWrite(led_e3, LOW);
  digitalWrite(led_e4, HIGH); delay(tempo); digitalWrite(led_e4, LOW);

  digitalWrite(led_d1, HIGH); delay(tempo); digitalWrite(led_d1, LOW);
  digitalWrite(led_d2, HIGH); delay(tempo); digitalWrite(led_d2, LOW);
  digitalWrite(led_d3, HIGH); delay(tempo); digitalWrite(led_d3, LOW);

  digitalWrite(led_c0, HIGH); delay(tempo); digitalWrite(led_c0, LOW);
  digitalWrite(led_c1, HIGH); delay(tempo); digitalWrite(led_c1, LOW);
  digitalWrite(led_c2, HIGH); delay(tempo); digitalWrite(led_c2, LOW);
}

void mostrar0() {
  apagarTudo();
  // Número 0
  // * * *    (e4 c2 3.3V)
  // *   *    (e3    d3)
  // *   *    (e2    d2)
  // *   *    (e1    d1)
  // * * *    (e0 c0 3.3V)

  digitalWrite(led_e0, HIGH);
  digitalWrite(led_e1, HIGH);
  digitalWrite(led_e2, HIGH);
  digitalWrite(led_e3, HIGH);
  digitalWrite(led_e4, HIGH);

  digitalWrite(led_d3, HIGH);
  digitalWrite(led_d2, HIGH);
  digitalWrite(led_d1, HIGH);

  digitalWrite(led_c0, HIGH);
  digitalWrite(led_c2, HIGH);
}

void mostrar1() {
  apagarTudo();
  // Número 1
  //     *     (3.3V)
  //     *     (d3)
  //     *     (d2)
  //     *     (d1)
  //     *     (3.3V)

  digitalWrite(led_d3, HIGH);
  digitalWrite(led_d2, HIGH);
  digitalWrite(led_d1, HIGH);
}

void mostrar2() {
  apagarTudo();
  // Número 2
  // * * *    (e4 c2 3.3V)
  //     *    (        d3)
  // * * *    (e2 c1   d2)
  // *        (e1        )
  // * * *    (e0 c0 3.3V)

  digitalWrite(led_e0, HIGH);
  digitalWrite(led_e1, HIGH);
  digitalWrite(led_e2, HIGH);
  digitalWrite(led_e4, HIGH);

  digitalWrite(led_d3, HIGH);
  digitalWrite(led_d2, HIGH);

  digitalWrite(led_c0, HIGH);
  digitalWrite(led_c1, HIGH);
  digitalWrite(led_c2, HIGH);
}

void mostrar3() {
  apagarTudo();
  // Número 3
  // * * *    (e4 c2 3.3V)
  //     *    (        d3)
  // * * *    (e2 c1   d2)
  //     *    (        d1)
  // * * *    (e0 c0 3.3V)

  digitalWrite(led_e0, HIGH);
  digitalWrite(led_e2, HIGH);
  digitalWrite(led_e4, HIGH);

  digitalWrite(led_d3, HIGH);
  digitalWrite(led_d2, HIGH);
  digitalWrite(led_d1, HIGH);

  digitalWrite(led_c0, HIGH);
  digitalWrite(led_c1, HIGH);
  digitalWrite(led_c2, HIGH);
}

void mostrar4() {
  apagarTudo();
  // Número 4
  // *   *    (e4    3.3V)
  // *   *    (e3      d3)
  // * * *    (e2  c1  d2)
  //     *    (        d1)
  //     *    (      3.3V)

  digitalWrite(led_e2, HIGH);
  digitalWrite(led_e3, HIGH);
  digitalWrite(led_e4, HIGH);

  digitalWrite(led_d3, HIGH);
  digitalWrite(led_d2, HIGH);
  digitalWrite(led_d1, HIGH);

  digitalWrite(led_c1, HIGH);
}

void mostrar5() {
  apagarTudo();
  // Número 5
  // * * *    (e4 c2 3.3V)
  // *        (e3        )
  // * * *    (e2 c1   d2)
  //     *    (        d1)
  // * * *    (e0 c0 3.3V)

  digitalWrite(led_e0, HIGH);
  digitalWrite(led_e2, HIGH);
  digitalWrite(led_e3, HIGH);
  digitalWrite(led_e4, HIGH);

  digitalWrite(led_d2, HIGH);
  digitalWrite(led_d1, HIGH);

  digitalWrite(led_c0, HIGH);
  digitalWrite(led_c1, HIGH);
  digitalWrite(led_c2, HIGH);
}

void mostrar6() {
  apagarTudo();
  // Número 6
  // * * *    (e4 c2 3.3V)
  // *        (e3        )
  // * * *    (e2 c1   d2)
  // *   *    (e1      d1)
  // * * *    (e0 c0 3.3V)

  digitalWrite(led_e0, HIGH);
  digitalWrite(led_e1, HIGH);
  digitalWrite(led_e2, HIGH);
  digitalWrite(led_e3, HIGH);
  digitalWrite(led_e4, HIGH);

  digitalWrite(led_d2, HIGH);
  digitalWrite(led_d1, HIGH);

  digitalWrite(led_c0, HIGH);
  digitalWrite(led_c1, HIGH);
  digitalWrite(led_c2, HIGH);
}

void mostrar7() {
  apagarTudo();
  // Número 7
  // * * *    (e4 c2 3.3V)
  //     *    (        d3)
  //     *    (        d2)
  //     *    (        d1)
  //     *    (      3.3V)

  digitalWrite(led_e4, HIGH);
  digitalWrite(led_c2, HIGH);
  digitalWrite(led_d3, HIGH);
  digitalWrite(led_d2, HIGH);
  digitalWrite(led_d1, HIGH);
}

void mostrar8() {
  apagarTudo();
  // Número 8
  // * * *    (e4 c2 3.3V)
  // *   *    (e3      d3)
  // * * *    (e2 c1   d2)
  // *   *    (e1      d1)
  // * * *    (e0 c0 3.3V)

  digitalWrite(led_e0, HIGH);
  digitalWrite(led_e1, HIGH);
  digitalWrite(led_e2, HIGH);
  digitalWrite(led_e3, HIGH);
  digitalWrite(led_e4, HIGH);

  digitalWrite(led_d3, HIGH);
  digitalWrite(led_d2, HIGH);
  digitalWrite(led_d1, HIGH);

  digitalWrite(led_c0, HIGH);
  digitalWrite(led_c1, HIGH);
  digitalWrite(led_c2, HIGH);
}

void mostrar9() {
  apagarTudo();
  // Número 9
  // * * *    (e4 c2 3.3V)
  // *   *    (e3      d3)
  // * * *    (e2 c1   d2)
  //     *    (        d1)
  // * * *    (e0 c0 3.3V)

  digitalWrite(led_e0, HIGH);
  digitalWrite(led_e2, HIGH);
  digitalWrite(led_e3, HIGH);
  digitalWrite(led_e4, HIGH);

  digitalWrite(led_d3, HIGH);
  digitalWrite(led_d2, HIGH);
  digitalWrite(led_d1, HIGH);

  digitalWrite(led_c0, HIGH);
  digitalWrite(led_c1, HIGH);
  digitalWrite(led_c2, HIGH);
}