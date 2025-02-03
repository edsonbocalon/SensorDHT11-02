# Sensor de umidade e temperatura DHT11 com Arduino ESP32 e Display OLED

### Módulo WiFi ESP8266 IOT USB 12F, um display OLED e um sensor DHT11 para monitoramento de temperatura e umidade via Wi-Fi.

## Componentes necessários:
* ESP8266 IOT USB 12F
* Sensor DHT11
* Display OLED (I2C, SSD1306)
* Jumpers para conexões

# Esquema de ligação:
* Componente    ---------  Pino ESP8266
* DHT11 VCC     ---------  3.3V
* DHT11 GND     --------   GND
* DHT11 DATA    --------   GPIO5(D1)
* OLED VCC      --------   3.3V
* OLED GND      --------   GND
* OLED SDA      --------   GPIO4 (D2)
* OLED SCL      --------   GPIO0 (D3)

  # Melhorias futuras:
  * Enviar os dados para um servidor web via WI-FI.
  * Criar um dashboard online para monitoramento remoto.
