# 🔢 Contador de 0 a 9 com LEDs usando ESP8266

Este projeto consiste em um contador numérico de 0 a 9 utilizando **13 LEDs dispostos no formato de um número 8**, controlados por um microcontrolador **ESP8266**. Cada número é representado visualmente através do acendimento de LEDs posicionados nas laterais e centro, imitando um display digital segmentado.

---

## 🛠️ Componentes Utilizados

- 1x Placa **ESP8266 NodeMCU**
- 13x LEDs
- 13x Resistores (220Ω recomendados)
- 1x Placa Fenolite ou Protoboard
- Fios de conexão (Jumpers Macho-Fêmea)
- Fonte 5V ou alimentação USB

---

## 💡 Esquema de LED

Os LEDs estão dispostos em um padrão de "8", com:

- **5 LEDs na lateral esquerda** (`led_e0` a `led_e4`)
- **5 LEDs na lateral direita** (`led_d0` a `led_d4`)
- **3 LEDs centrais** (`led_c0`, `led_c1`, `led_c2`)

```plaintext
Visual (Número 8 genérico):

   e0  c0  d0
   e1      d1
   e2  c1  d2
   e3      d3
   e4  c2  d4
```

---

## 🔌 Mapeamento dos LEDs para as portas do ESP8266

| LED       | Posição Física       | Porta ESP8266 |
|-----------|----------------------|---------------|
| `led_e0`  | Esquerda Topo        | D0 (GPIO16)   |
| `led_e1`  | Esquerda Cima        | D1 (GPIO5)    |
| `led_e2`  | Esquerda Meio        | D2 (GPIO4)    |
| `led_e3`  | Esquerda Baixo       | D3 (GPIO0)    |
| `led_e4`  | Esquerda Base        | D4 (GPIO2)    |
| `led_d0`  | Direita Topo         | D5 (GPIO14)   |
| `led_d1`  | Direita Cima         | D6 (GPIO12)   |
| `led_d2`  | Direita Meio         | D7 (GPIO13)   |
| `led_d3`  | Direita Baixo        | D8 (GPIO15)   |
| `led_d4`  | Direita Base         | RX (GPIO3)    |
| `led_c0`  | Centro Topo          | TX (GPIO1)    |
| `led_c1`  | Centro Meio          | SD2 (GPIO9)   |
| `led_c2`  | Centro Base          | SD3 (GPIO10)  |

---

## 🚀 Funcionamento

1. **Inicialização**:
   - Todos os LEDs são testados sequencialmente para verificação (teste visual).

2. **Loop Principal**:
   - Os números de 0 a 9 são mostrados em sequência, com delay de 1 segundo entre eles.

3. **Cada número** é representado com uma função específica (`mostrar0()`, `mostrar1()`...) para fins didáticos e organização clara do código.

---

## 🧠 Objetivos Educacionais

- Prática com GPIOs do ESP8266
- Controle individual de LEDs
- Representação visual de dígitos numéricos
- Organização de código por modularidade e clareza
- Aprendizado sobre eletrônica básica com foco em display digital manual

---

## 🧪 Exemplos Visuais no Código

Cada função de número possui um **desenho ASCII comentado** que facilita a visualização de quais LEDs serão acesos. Exemplo para o número 0:

```cpp
void mostrar0() {
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
```

---

## 📦 Futuras Melhorias

- Adicionar botão para pausar ou resetar contagem
- Inserir contador reverso (9 até 0)
- Integrar com display LCD ou controle via WiFi
- Refatorar o projeto para uso de arrays ou tabelas de segmentação
- Criar modo "reconhecimento de dígito" com base no estado dos LEDs

---

## 📸 Imagens do Projeto

![Imagem do WhatsApp de 2025-03-29 à(s) 14 07 07_c0ff6b2a](https://github.com/user-attachments/assets/1e446c50-c00e-4ecd-9171-1ddfa7ca637c)
![as](https://github.com/user-attachments/assets/49a47272-847d-423a-9995-122b5f19f1d9)

<sub>*Estrutura da Placa.*</sub>
