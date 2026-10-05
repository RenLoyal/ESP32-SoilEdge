/*
 * ESP32-SoilEdge
 * 功能：读取电容式土壤湿度ADC + DHT22温湿度，串口输出
 * 状态：W1骨架，硬件未到，引脚预留
 */
#define SOIL_ADC_PIN 34   // ESP32 ADC1_CH6
#define DHT_PIN 4         // GPIO4
#define DHT_TYPE DHT22

void setup() {
  Serial.begin(115200);
  Serial.println("ESP32-SoilEdge init... waiting hardware");
}

void loop() {
  // TODO: 到货后读 analogRead(SOIL_ADC_PIN) + dht.readTempHum()
  delay(1000);
}
