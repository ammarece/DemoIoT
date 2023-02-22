
#define BLYNK_TEMPLATE_ID "TMPLrEFHdt3T"
#define BLYNK_TEMPLATE_NAME "Demo IoT"
#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "jvDujNa-4P4WTLXqA6t8s9z4GnfRSMs9";
char ssid[] = "iMaK";
char pass[] = "gate@2024";

int ledPin = D0;

void setup()
{
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);

  pinMode(ledPin, OUTPUT);
}

void loop()
{
  Blynk.run();
}

BLYNK_WRITE(V1)
{
  int ledState = param.asInt();

  digitalWrite(ledPin, ledState);
}
