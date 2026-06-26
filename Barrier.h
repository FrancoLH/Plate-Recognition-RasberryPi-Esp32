#include <Arduino.h>
const int motor1_pin1 = 27;
const int motor1_pin2 = 26;
const int enb = 25;
const int sensor_up = 32;
const int sensor_down = 33;
String comando = "";
bool lastSensorDown = LOW;

void setup()
{
  pinMode(motor1_pin1, OUTPUT);
  pinMode(motor1_pin2, OUTPUT);
  pinMode(enb, OUTPUT);
  pinMode(sensor_up, INPUT);
  pinMode(sensor_down, INPUT);
  Serial.begin(115200);
}
void subir()
  {
    digitalWrite(motor1_pin1, HIGH);
    digitalWrite(motor1_pin2, LOW);
    digitalWrite(enb, HIGH);
  }
  void bajar()
  {
    digitalWrite(motor1_pin1, LOW);
    digitalWrite(motor1_pin2, HIGH);
    digitalWrite(enb, HIGH);
  }
  void stop()
  {
    digitalWrite(motor1_pin1, LOW);
    digitalWrite(motor1_pin2, LOW);
    digitalWrite(enb, LOW);
  }
void loop() {
  if(Serial.available())
  {
    comando = Serial.readStringUntil('\n');
    comando.trim();
  }

  if(comando == "levantar barrera")
  {
      subir();
  }
  bool currentSensorDown = digitalRead(sensor_down);

  if(lastSensorDown == HIGH && currentSensorDown == LOW)
  {
    bajar();
  }

  if(digitalRead(sensor_up) == HIGH)
  {
    stop();
  }

}
