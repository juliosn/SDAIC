// Declaração dos pinos de cada LED

int led_e0 = 16;  // Posição: Esquerda Topo || Porta ESP: D0
int led_e1 = 5;   // Posição: Esquerda Cima || Porta ESP: D1
int led_e2 = 4;   // Posição: Esquerda Meio || Porta ESP: D2
int led_e3 = 0;   // Posição: Esquerda Baixo || Porta ESP: D3
int led_e4 = 2;   // Posição: Esquerda Base || Porta ESP: D4

int led_d0 = 14;  // Posição: Direita Topo || Porta ESP: D5
int led_d1 = 12;  // Posição: Direita Cima || Porta ESP: D6
int led_d2 = 13;  // Posição: Direita Meio || Porta ESP: D7
int led_d3 = 15;  // Posição: Direita Baixo || Porta ESP: D8
int led_d4 = 3;   // Posição: Direita Base || Porta ESP: RX

int led_c0 = 1;   // Posição: Centro Topo || Porta ESP: TX
int led_c1 = 9;   // Posição: Centro Meio || Porta ESP: SD2
int led_c2 = 10;  // Posição: Centro Base || Porta ESP: SD3

void setup() {
  // Configurar todos os pinos como saída
  pinMode(led_e0, OUTPUT);
  pinMode(led_e1, OUTPUT);
  pinMode(led_e2, OUTPUT);
  pinMode(led_e3, OUTPUT);
  pinMode(led_e4, OUTPUT);

  pinMode(led_d0, OUTPUT);
  pinMode(led_d1, OUTPUT);
  pinMode(led_d2, OUTPUT);
  pinMode(led_d3, OUTPUT);
  pinMode(led_d4, OUTPUT);

  pinMode(led_c0, OUTPUT);
  pinMode(led_c1, OUTPUT);
  pinMode(led_c2, OUTPUT);

  // Teste inicial
  testarLeds();
}

void loop() {
  mostrar0(); delay(1000);
  mostrar1(); delay(1000);
  mostrar2(); delay(1000);
  mostrar3(); delay(1000);
  mostrar4(); delay(1000);
  mostrar5(); delay(1000);
  mostrar6(); delay(1000);
  mostrar7(); delay(1000);
  mostrar8(); delay(1000);
  mostrar9(); delay(1000);
}

// ------------------------
// Apaga todos os LEDs
void apagarTudo() {
  digitalWrite(led_e0, LOW);
  digitalWrite(led_e1, LOW);
  digitalWrite(led_e2, LOW);
  digitalWrite(led_e3, LOW);
  digitalWrite(led_e4, LOW);

  digitalWrite(led_d0, LOW);
  digitalWrite(led_d1, LOW);
  digitalWrite(led_d2, LOW);
  digitalWrite(led_d3, LOW);
  digitalWrite(led_d4, LOW);

  digitalWrite(led_c0, LOW);
  digitalWrite(led_c1, LOW);
  digitalWrite(led_c2, LOW);
}

// ------------------------
// Teste de todos os LEDs
void testarLeds() {
  int tempo = 2000;

  digitalWrite(led_e0, HIGH); delay(tempo); digitalWrite(led_e0, LOW);
  digitalWrite(led_e1, HIGH); delay(tempo); digitalWrite(led_e1, LOW);
  digitalWrite(led_e2, HIGH); delay(tempo); digitalWrite(led_e2, LOW);
  digitalWrite(led_e3, HIGH); delay(tempo); digitalWrite(led_e3, LOW);
  digitalWrite(led_e4, HIGH); delay(tempo); digitalWrite(led_e4, LOW);

  digitalWrite(led_d0, HIGH); delay(tempo); digitalWrite(led_d0, LOW);
  digitalWrite(led_d1, HIGH); delay(tempo); digitalWrite(led_d1, LOW);
  digitalWrite(led_d2, HIGH); delay(tempo); digitalWrite(led_d2, LOW);
  digitalWrite(led_d3, HIGH); delay(tempo); digitalWrite(led_d3, LOW);
  digitalWrite(led_d4, HIGH); delay(tempo); digitalWrite(led_d4, LOW);

  digitalWrite(led_c0, HIGH); delay(tempo); digitalWrite(led_c0, LOW);
  digitalWrite(led_c1, HIGH); delay(tempo); digitalWrite(led_c1, LOW);
  digitalWrite(led_c2, HIGH); delay(tempo); digitalWrite(led_c2, LOW);
}


// ------------------------
// Funções para cada número

void mostrar0() {
    apagarTudo();
    // Número 0
    
    // * * *    (e0 c0 d0)
    // *   *    (e1    d1)
    // *   *    (e2    d2)
    // *   *    (e3    d3)
    // * * *    (e4 c2 d4)
  
    digitalWrite(led_e0, HIGH);
    digitalWrite(led_e1, HIGH);
    digitalWrite(led_e2, HIGH);
    digitalWrite(led_e3, HIGH);
    digitalWrite(led_e4, HIGH);
  
    digitalWrite(led_d0, HIGH);
    digitalWrite(led_d1, HIGH);
    digitalWrite(led_d2, HIGH);
    digitalWrite(led_d3, HIGH);
    digitalWrite(led_d4, HIGH);
  
    digitalWrite(led_c0, HIGH);
    digitalWrite(led_c2, HIGH);
  }
  
  void mostrar1() {
    apagarTudo();
    // Número 1
    
    //     *     (d0)
    //     *     (d1)
    //     *     (d2)
    //     *     (d3)
    //     *     (d4)
  
    digitalWrite(led_d0, HIGH);
    digitalWrite(led_d1, HIGH);
    digitalWrite(led_d2, HIGH);
    digitalWrite(led_d3, HIGH);
    digitalWrite(led_d4, HIGH);
  }
  
  void mostrar2() {
    apagarTudo();
    // Número 2

    // * * *    (e0 c0 d0)
    //     *    (      d1)
    // * * *    (e2 c1 d2)
    // *        (e3      )
    // * * *    (e4 c2 d4)
  
    digitalWrite(led_e0, HIGH);
    digitalWrite(led_c0, HIGH);
    digitalWrite(led_d0, HIGH);
    digitalWrite(led_d1, HIGH);
    digitalWrite(led_d2, HIGH);
    digitalWrite(led_c1, HIGH);
    digitalWrite(led_e2, HIGH);
    digitalWrite(led_e3, HIGH);
    digitalWrite(led_e4, HIGH);
    digitalWrite(led_c2, HIGH);
    digitalWrite(led_d4, HIGH);
  }
  
  void mostrar3() {
    apagarTudo();
    // Número 3

    // * * *    (e0 c0 d0)
    //     *    (      d1)
    // * * *    (e2 c1 d2)
    //     *    (      d3)
    // * * *    (e4 d2 d4)
  
    digitalWrite(led_e0, HIGH);
    digitalWrite(led_c0, HIGH);
    digitalWrite(led_d0, HIGH);
    digitalWrite(led_d1, HIGH);
    digitalWrite(led_d2, HIGH);
    digitalWrite(led_c1, HIGH);
    digitalWrite(led_e2, HIGH);
    digitalWrite(led_d3, HIGH);
    digitalWrite(led_d4, HIGH);
    digitalWrite(led_c2, HIGH);
    digitalWrite(led_e4, HIGH);
  }
  
  void mostrar4() {
    apagarTudo();
    // Número 4
    // *   *    (e0    d0)
    // *   *    (e1    d1)
    // * * *    (e2 c1 d2)
    //     *    (      d3)
    //     *    (      d4)
  
    digitalWrite(led_e0, HIGH);
    digitalWrite(led_e1, HIGH);
    digitalWrite(led_e2, HIGH);
    digitalWrite(led_d0, HIGH);
    digitalWrite(led_d1, HIGH);
    digitalWrite(led_d2, HIGH);
    digitalWrite(led_d3, HIGH);
    digitalWrite(led_d4, HIGH);
    digitalWrite(led_c1, HIGH);
  }
  
  void mostrar5() {
    apagarTudo();
    // Número 5
    // * * *    (e0 c0 d0)
    // *        (e1      )
    // * * *    (e2 c1 d2)
    //     *    (      d3)
    // * * *    (e4 c2 d4)
  
    digitalWrite(led_d0, HIGH);
    digitalWrite(led_c0, HIGH);
    digitalWrite(led_e0, HIGH);
    digitalWrite(led_e1, HIGH);
    digitalWrite(led_e2, HIGH);
    digitalWrite(led_c1, HIGH);
    digitalWrite(led_d2, HIGH);
    digitalWrite(led_d3, HIGH);
    digitalWrite(led_d4, HIGH);
    digitalWrite(led_c2, HIGH);
    digitalWrite(led_e4, HIGH);
  }
  
  void mostrar6() {
    apagarTudo();
    // Número 6
    // * * *    (e0 c0 d0)
    // *        (e1      )
    // * * *    (e2 c1 d2)
    // *   *    (e3    d3)
    // * * *    (e4 c2 d4)
  
    digitalWrite(led_c0, HIGH);
    digitalWrite(led_c1, HIGH);
    digitalWrite(led_c2, HIGH);
    digitalWrite(led_e0, HIGH);
    digitalWrite(led_e1, HIGH);
    digitalWrite(led_e2, HIGH);
    digitalWrite(led_e3, HIGH);
    digitalWrite(led_e4, HIGH);
    digitalWrite(led_d0, HIGH);
    digitalWrite(led_d2, HIGH);
    digitalWrite(led_d3, HIGH);
    digitalWrite(led_d4, HIGH);

  }
  
  void mostrar7() {
    apagarTudo();
    // Número 7
    // * * *    (e0 c0 d0)
    //     *    (      d1)
    //     *    (      d2)
    //     *    (      d3)
    //     *    (      d4)
  
    digitalWrite(led_e0, HIGH);
    digitalWrite(led_c0, HIGH);
    digitalWrite(led_d0, HIGH);
    digitalWrite(led_d1, HIGH);
    digitalWrite(led_d2, HIGH);
    digitalWrite(led_d3, HIGH);
    digitalWrite(led_d4, HIGH);
  }
  
  void mostrar8() {
    apagarTudo();
    // Número 8
    // * * *    (e0 c0 d0)
    // *   *    (e1    d1)
    // * * *    (e2 c1 d2)
    // *   *    (e3    d3)
    // * * *    (e4 c2 d4)
  
    digitalWrite(led_c0, HIGH);
    digitalWrite(led_c1, HIGH);
    digitalWrite(led_c2, HIGH);
    digitalWrite(led_e0, HIGH);
    digitalWrite(led_e1, HIGH);
    digitalWrite(led_e2, HIGH);
    digitalWrite(led_e3, HIGH);
    digitalWrite(led_e4, HIGH);
    digitalWrite(led_d0, HIGH);
    digitalWrite(led_d1, HIGH);
    digitalWrite(led_d2, HIGH);
    digitalWrite(led_d3, HIGH);
    digitalWrite(led_d4, HIGH);
    
  }
  
  void mostrar9() {
    apagarTudo();
    // Número 9
    // * * *    (e0 c0 d0)
    // *   *    (e1    d1)
    // * * *    (e2 c1 d2)
    //     *    (      d3)
    // * * *    (e4 c2 d4)
  
    digitalWrite(led_c0, HIGH);
    digitalWrite(led_e0, HIGH);
    digitalWrite(led_d0, HIGH);
    digitalWrite(led_e1, HIGH);
    digitalWrite(led_d1, HIGH);
    digitalWrite(led_c1, HIGH);
    digitalWrite(led_d2, HIGH);
    digitalWrite(led_d3, HIGH);
    digitalWrite(led_c2, HIGH);
  }
  