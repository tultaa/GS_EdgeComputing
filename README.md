# Global Solution Edge Computing

#### Equipe NuCoding
- Integrantes: Arthur Fellipe(553320), Eduardo Pires(556527), Leonardo Munhoz(556824)
#### LINK DO TINKERCAD: https://www.tinkercad.com/things/la6N4U7Dc8I-gs1edge
# Projeto Ocean 20 - Global Solution - Documentação

Este projeto utiliza um Arduino Uno R3 e componentes diversos para criar um circuito simulador relacionado à Economia Azul, que promove o crescimento econômico baseado na preservação dos ecossistemas marinhos e na sustentabilidade ambiental.

## Descrição do Projeto

Este projeto tem como objetivo criar um sistema de monitoramento da qualidade da água dos oceanos utilizando um Arduino Uno R3 e componentes diversos. O monitoramento ambiental dos oceanos é crucial para a preservação dos ecossistemas marinhos e para a sustentabilidade das atividades humanas que dependem dos recursos marinhos.

O circuito desenvolvido é capaz de monitorar dois aspectos fundamentais da qualidade da água: o pH e a temperatura. O pH da água dos oceanos é um indicador importante da acidez ou alcalinidade da água, o que afeta diretamente a vida marinha e os processos químicos que ocorrem nos ecossistemas aquáticos. A temperatura da água também desempenha um papel essencial na regulação dos ecossistemas marinhos, influenciando a distribuição e comportamento das espécies e afetando processos biológicos e físico-químicos.

Além do monitoramento dos parâmetros ambientais, o circuito também é capaz de emitir alertas visuais e sonoros em caso de condições críticas, como variações extremas de pH ou temperatura. Esses alertas são essenciais para a tomada de medidas rápidas e eficazes para mitigar possíveis impactos negativos sobre os ecossistemas marinhos.

Com este projeto, espera-se contribuir para a conscientização sobre a importância da preservação dos oceanos e fornecer uma ferramenta acessível e eficaz para o monitoramento ambiental desses ecossistemas vitais.

## Componentes Utilizados

- Arduino Uno R3
- Sensor de pH (simulado com potenciômetro)
- Sensor de Temperatura TMP36
- Display LCD 16x2
- LEDs (vermelho e verde)
- Buzzer
- Resistores
- Protoboard
- Jumpers

## Configuração do Ambiente de Desenvolvimento

1. Instale o Arduino IDE em seu computador.
2. Conecte o Arduino Uno R3 ao computador via cabo USB.
3. Abra o arquivo do código-fonte do projeto (.ino) no Arduino IDE.
4. Compile e faça o upload do código para o Arduino Uno R3.

## Pinagem

### Pinagem do Arduino Uno R3:

- Sensor de pH (Potenciômetro): Conectado ao pino A0
- Sensor de Temperatura TMP36: Conectado ao pino A1
- Display LCD: Conectado aos pinos 12 (RS), 11 (EN), 5 (D4), 4 (D5), 3 (D6) e 2 (D7)
- LEDs: Conectados aos pinos 7 (verde) e 6 (vermelho)
- Buzzer: Conectado ao pino 8

## Como Usar

1. Monte o circuito conforme a pinagem especificada.
2. Conecte o Arduino ao computador e abra o Arduino IDE.
3. Carregue o código fornecido no Arduino.
4. Observe as leituras no display LCD e no Serial Monitor.

## Funcionalidades

- **Monitoramento de pH:** Leitura do pH da água e exibição no display LCD.
- **Monitoramento de Temperatura:** Leitura da temperatura da água e exibição no display LCD.
- **Alertas Visual e Sonoro:** LEDs indicadores e buzzer alertam sobre condições críticas de pH e temperatura.
- **Exibição de Dados:** Dados captados exibidos no display LCD e no Serial Monitor do Arduino IDE.

## Visão do Circuito Pronto
### O Código utilizado esta na pasta codigo_gs
![Screenshot_25](https://github.com/tultaa/GS_EdgeComputing/assets/78042666/424cb541-1204-4f72-8e2d-2cb0019df198)

## Resultados Esperados e Impacto

### Resultados Esperados

- Monitoramento contínuo e preciso do pH e da temperatura da água.
- Alertas visuais e sonoros em caso de condições críticas.
- Coleta de dados em tempo real para análise posterior.

### Impacto Positivo

- Contribuição significativa para a conservação dos ecossistemas marinhos.
- Facilitação da tomada de decisões rápidas para mitigar problemas ambientais.
- Sensibilização sobre a importância do monitoramento ambiental dos oceanos.
