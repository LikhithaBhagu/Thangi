#define BLYNK_PRINT Serial
#include<ESP8266WiFi.h>
#include<BlynkSimpleEsp8266.h>

#define BLYNK_AUTH_TOKEN"oi0m_yuWew8LeizB7ee8G85ghOUxbUFD"

char auth[]=BLYNK_AUTH_TOKEN;
char ssid[]="Galaxy";
char pass[]="Likhitha87";

BLYNK_WRITE(V0){
  digitalWrite(D0,param.asInt());
}

void setup(){
  pinMode(D0,OUTPUT);
  Blynk.begin(auth,ssid,pass,"blynk.cloud",80);
}

void loop(){
  Blynk.run();
}
