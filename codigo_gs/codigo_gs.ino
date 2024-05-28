#include <LiquidCrystal.h>

// Inicializa a biblioteca com os números dos pinos da interface
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

// Definição dos pinos dos LEDs e do buzzer
#define LED_VERDE 7
#define LED_VERMELHO 6
#define BUZZER 8

void setup() {
  lcd.begin(16, 2);
  
  // Configura os pinos analógicos como entrada
  pinMode(A0, INPUT); // Sensor de pH
  pinMode(A1, INPUT); // Sensor de temperatura
  
  pinMode(LED_VERDE, OUTPUT);
  pinMode(LED_VERMELHO, OUTPUT);
  pinMode(BUZZER, OUTPUT);
  
  // Inicia a comunicação serial
  Serial.begin(9600);
  Serial.println("Inicio - valores do potenciometro e sensor");

  // Exibe a mensagem de inicialização
  inicializacao();
}

void inicializacao() {
  String linha1 = "Nu Coding";
  String linha2 = "Global Solution";

  lcd.clear();
  for (int i = 0; i <= 16 - linha1.length(); i++) {
    lcd.clear();
    lcd.setCursor(i, 0);
    lcd.print(linha1);
    delay(300);
  }

  for (int i = 0; i <= 16 - linha2.length(); i++) {
    lcd.clear();
    lcd.setCursor(i, 1);
    lcd.print(linha2);
    delay(300);
  }

  delay(2500); 
}

void loop() {
  // Leitura do sensor de pH
  int valorPH = analogRead(A0);
  float volt = valorPH * (5.0 / 1023.0);
  float pHValue = 2.63 * volt - 0.36;

  // Leitura do sensor de temperatura TMP36(celsius)
  int valorTemp = analogRead(A1);
  float mv = (valorTemp / 1023.0) * 5000; // Converte para milivolts
  float Temp = (mv - 500) / 10; // Convertendo para Celsius

  // Verificação e exibição do pH
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("pH = ");
  lcd.print(pHValue, 2); // Exibe pH com 2 casas decimais

  if (pHValue >= 7.5 && pHValue <= 8.5) {
    lcd.setCursor(0, 1);
    lcd.print("pH Estavel");
    Serial.print("pH = ");
    Serial.print(pHValue, 2);
    Serial.println(" (Estavel)");
    digitalWrite(LED_VERDE, HIGH);
    digitalWrite(LED_VERMELHO, LOW);
    digitalWrite(BUZZER, LOW);
  } else {
    lcd.setCursor(0, 1);
    lcd.print("pH Nao Estavel");
    Serial.print("pH = ");
    Serial.print(pHValue, 2);
    Serial.println(" (Nao Estavel)");
    digitalWrite(LED_VERDE, LOW);
    digitalWrite(LED_VERMELHO, HIGH);
    digitalWrite(BUZZER, HIGH);
  }

  delay(4000);

  // Verificação e exibição da temperatura
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Temp = ");
  lcd.print(Temp, 1); // Exibe temperatura com 1 casa decimal
  lcd.print(" C");

  if (Temp >= 10 && Temp <= 25) {
    lcd.setCursor(0, 1);
    lcd.print("Temp Estavel");
    Serial.print("Temp = ");
    Serial.print(Temp, 1);
    Serial.println(" C (Estavel)");
    digitalWrite(LED_VERDE, HIGH);
    digitalWrite(LED_VERMELHO, LOW);
    digitalWrite(BUZZER, LOW);
  } else {
    lcd.setCursor(0, 1);
    lcd.print("Temp Nao Estavel");
    Serial.print("Temp = ");
    Serial.print(Temp, 1);
    Serial.println(" C (Nao Estavel)");
    digitalWrite(LED_VERDE, LOW);
    digitalWrite(LED_VERMELHO, HIGH);
    digitalWrite(BUZZER, HIGH);
  }

  delay(4000);
}
