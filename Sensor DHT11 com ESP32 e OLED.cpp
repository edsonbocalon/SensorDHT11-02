#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <DHT.h>

#define DHTPIN 5        // Pino de dados do DHT11
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

void setup() {
    Serial.begin(115200);
    dht.begin();

    if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
        Serial.println(F("Falha ao inicializar o display OLED"));
        for(;;);
    }
    display.clearDisplay();
}

void loop() {
    float temperatura = dht.readTemperature();
    float umidade = dht.readHumidity();

    if (isnan(temperatura) || isnan(umidade)) {
        Serial.println(F("Falha na leitura do DHT11!"));
        return;
    }

    display.clearDisplay();
    display.setTextSize(1);
    display.setTextColor(WHITE);
    display.setCursor(0, 10);
    display.print("Temp: ");
    display.print(temperatura);
    display.print(" C");
    
    display.setCursor(0, 30);
    display.print("Umid: ");
    display.print(umidade);
    display.print(" %");

    display.display();
    delay(2000);
}
