#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <Arduino.h>
#include <sensors.hpp>
#include <Ticker.h>
#include <Encoder.h>

#define button_1 14
#define button_2 10
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 32
#define LED 7
#define buzzer 9
// verificar os pinos do motor
#define motor_1 D0
#define motor_2 D6
#define motor_3 D5
#define motor_4 D8
//--------------------
#define ENCODER_CLK 11
#define ENCODER_DT 12
#define ENCODER_SW 13

#define OLED_RESET -1 // Não usado no ESP8266

Sensors sensor;

int encoderPosCount = 0;
int pinALast;
int aVal;
int timer_1 = 0;            // Valor do timer configurado
const int intervalo = 1000; // Intervalo em milissegundos
Ticker timer;
boolean bCW;
boolean config_time = false;
boolean config_intensity = false;
uint8_t sensorStatus = 0;
// Variáveis de Timers - > adaptar para o shaker
// hw_timer_t timer_1 = NULL;

//-------------------------------------

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

//-------------------------------------------------
// adpatar função do código do diego
// passar o tempo selecionado pelo usuário por parametros
// verficar a funcionalidade da função
bool ativaTimer(int tempo)
{
    // Inicia o timer e define a função de interrupção
    timer.attach_ms(intervalo, timer_isr);

    // Configura o valor do timer_1
    timer_1 = tempo;

    // Mostra informações no display
    // display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
    display.display();                   // Limpar o buffer
    delay(500);                          // Pausar por 0,5 segundos
    display.clearDisplay();              // Limpar o buffer
    display.setTextSize(1);              // Tamanho do texto
    display.setTextColor(SSD1306_WHITE); // Cor do texto
    display.setCursor(0, 0);             // Posição do cursor
    display.println(timer_1);
    display.display(); // Atualizar a tela

    // Verifica se o tempo corresponde ao valor configurado
    if (tempo == timer_1)
        return true;
    else
        return false;
}
//-------------------------------

void avita_externos()
{
    digitalWrite(LED, HIGH);
    analogWrite(buzzer, 255 * 0.5);
    delay(100);
    digitalWrite(LED, LOW);
    analogWrite(buzzer, 0);
}

int button_state(int estado)
{
    if (digitalRead(button_2) == 1)
    {
        estado++;
        if (digitalRead(button_2) == 1)
        {
            estado++;
        }
    }
    return estado;
}
void inicia_motores(double intensidade)
{
    digitalWrite(motor_1, HIGH);       // Ligar o transistor
    analogWrite(motor_1, intensidade); // Definir a velocidade usando PWM
    digitalWrite(motor_2, HIGH);       // Ligar o transistor
    analogWrite(motor_2, intensidade); // Definir a velocidade usando PWM
    digitalWrite(motor_3, HIGH);       // Ligar o transistor
    analogWrite(motor_3, intensidade); // Definir a velocidade usando PWM
    digitalWrite(motor_4, HIGH);       // Ligar o transistor
    analogWrite(motor_4, intensidade); // Definir a velocidade usando PWM
}

void desliga_motores()
{
    digitalWrite(motor_1, LOW); // Ligar o transistor
    analogWrite(motor_1, 0);    // Definir a velocidade usando PWM
    digitalWrite(motor_2, LOW); // Ligar o transistor
    analogWrite(motor_2, 0);    // Definir a velocidade usando PWM
    digitalWrite(motor_3, LOW); // Ligar o transistor
    analogWrite(motor_3, 0);    // Definir a velocidade usando PWM
    digitalWrite(motor_4, LOW); // Ligar o transistor
    analogWrite(motor_4, 0);    // Definir a velocidade usando PWM
}
// verifcar a necessidade da função abaixo
void LEITURA(void)
{
    if (sensor.status() == STAT_FALHA)
    {
        return;
    }
    if (!estado.viesCali)
    {
        // Calibra na primeira execução
        sensor.calibrar_vies();
        estado.viesCali = 1;
    }

    // Atualiza com novos dados
    sensor.limpar_buffer();
    sensorStatus = sensor.lerTodosSensores();

    return;
}
//-----------------------

void setup()
{
    Serial.begin(9600);
    pinMode(button_1, INPUT);
    pinMode(button_2, INPUT);
    pinMode(ENCODER_CLK, INPUT);
    pinMode(ENCODER_DT, INPUT);
    pinMode(ENCODER_SW, INPUT);
    pinMode(motor_1, OUTPUT);
    pinMode(motor_2, OUTPUT);
    pinMode(motor_3, OUTPUT);
    pinMode(motor_4, OUTPUT);
    analogWriteFreq(1000); // Configura a frequência do PWM (1 kHz)
    pinALast = digitalRead(pinA);

    digitalWrite(button_1, LOW);
    digitalWrite(button_2, LOW);

    if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C))
    {
        Serial.println(F("Falha na inicialização do display"));
        for (;;)
        {
        }
    }

    display.display(); // Limpar o buffer
    delay(2000);       // Pausar por 2 segundos

    display.clearDisplay();               // Limpar o buffer
    display.setTextSize(1);               // Tamanho do texto
    display.setTextColor(SSD1306_WHITE);  // Cor do texto
    display.setCursor(0, 0);              // Posição do cursor
    display.println(F("Hello, Shaker!")); // Texto a ser exibido
    display.display();                    // Atualizar a tela
}

void loop()
{
    int estado = 0;
    int tempo;
    double intensidade;

    //  inicia o display
    display.display(); // Limpar o buffer
    delay(500);        // Pausar por 0,5 segundos

    display.clearDisplay();              // Limpar o buffer
    display.setTextSize(1);              // Tamanho do texto
    display.setTextColor(SSD1306_WHITE); // Cor do texto
    display.setCursor(0, 0);             // Posição do cursor
    display.println("-----Menu-----");
    display.println("1. Tempo");
    display.println("2. Intensidade");
    display.display(); // Atualizar a tela

    // se o botão dois for pressionado uma vez-> ler o tempo de execução
    if (button_state(estado) == 1)
    {
        while (digitalRead(ENCODER_SW) == 0)
        {
            aVal = digitalRead(ENCODER_CLK);
            if (aVal != pinALast)
            { // Isso significa que o botão está sendo girado
                // Se o botão está sendo girado, precisamos determinar a direção
                // Isso é feito lendo o pino B.
                if (digitalRead(pinB) != aVal)
                { // Significa que o pino A mudou primeiro - Estamos girando no sentido horário.
                    Clockwise.encoderPosCount++;
                    // printar no display oled

                    bCW = true;
                }
                else
                { // Caso contrário, o pino B mudou primeiro e estamos girando no sentido anti-horário.
                    bCW = false;
                    encoderPosCount--;
                    // printar no display oled
                }
            }
            pinALast = aVal;
        }
        // enconderPosCount será o tempo de execução
        Serial.print("Tempo em miliseg: ");
        tempo = encoderPosCount;
        encoderPosCount = 0;
        Serial.println(tempo);
        config_time = true;
    }

    else if (button_state(estado) == 2)
    {
        pinALast.clear();
        aVal.clear();
        while (digitalRead(ENCODER_SW) == 0)
        {
            aVal = digitalRead(ENCODER_CLK);
            if (aVal != pinALast)
            { // Isso significa que o botão está sendo girado
                // Se o botão está sendo girado, precisamos determinar a direção
                // Isso é feito lendo o pino B.
                if (digitalRead(ENCODER_DT) != aVal)
                { // Significa que o pino A mudou primeiro - Estamos girando no sentido horário.
                    Clockwise.encoderPosCount += 0.1;
                    // printar no display oled

                    bCW = true;
                }
                else
                { // Caso contrário, o pino B mudou primeiro e estamos girando no sentido anti-horário.
                    bCW = false;
                    encoderPosCount -= 0.1;
                }
            }
            pinALast = aVal;
        }
        // enconderPosCount será a intensidade de execução
        Serial.print("Intesidade em Volts: ");
        intensidade = (encoderPosCount * 255 / 12);
        encoderPosCount = 0;
        Serial.println(intensidade);
        config_intensity = true;
    }

    if ((config_intensity == true) && (config_time == true))
    {
        ativa_externos();

        // inicia motores -> definir frequencia -> enquanto o time == true
        if (ativaTimer(tempo) != true)
        {
            inicia_motores(intensidade);
            if (sensorStatus != 1)
            {
                sensorStatus = sensor.init();
            }

            // arrumar configuração do encoder

            // estudar a questão do timer

            // verificar toda a lógica -> corrigir o que não estiver de acordo

            // estudar a questão dos transistores
        }
        else
            desliga_motores();
        // faz nada
    }
}
