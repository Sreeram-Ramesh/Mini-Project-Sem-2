/* Comment this out to disable prints and save space */
#define BLYNK_PRINT Serial

/* Fill in information from Blynk Device Info here */
#define BLYNK_TEMPLATE_ID ""
#define BLYNK_TEMPLATE_NAME ""
#define BLYNK_AUTH_TOKEN ""


#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

//Inputs
const int float_switch_1 = D0;
const int float_switch_2 = D1;
const int float_switch_3 = D2;
const int float_switch_4 = A0;

//Outputs
const int led1 = D4;
const int relay = D5;
const int led2 = D6;
const int led3 = D7;
const int led4 = D8;

//Switch variables
int float_switch_1_val = 0;
int float_switch_2_val = 0;
int float_switch_3_val = 0;
int float_switch_4_val = 0;
int gauge_val = 0;
int motor_pump_val = 75;
int initiate = 0;

BlynkTimer timer;


// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "";
char pass[] = "";

BLYNK_CONNECTED(){
  Blynk.syncVirtual(V1, V2);
}

BLYNK_WRITE(V1){
  motor_pump_val = param.asInt();
}

BLYNK_WRITE(V2){
  initiate = param.asInt();
}

void setup()
{
  pinMode(float_switch_1, INPUT);
  pinMode(float_switch_2, INPUT);
  pinMode(float_switch_3, INPUT);
  pinMode(float_switch_4, INPUT);

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(relay, OUTPUT);

  Serial.begin(115200);
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
  timer.setInterval(1000L, myTimer);
}

void myTimer(){ 
  Blynk.virtualWrite(V0, gauge_val);
}

void loop()
{
  Serial.println(motor_pump_val);
  Serial.println(initiate);
  Serial.println();
  delay(1000);

  TellLevel();

  if (initiate == 0){
    if(gauge_val < 75){
      digitalWrite(relay, HIGH);
    }
    else{
      digitalWrite(relay, LOW);
    }
  }
  else{
    if(gauge_val < motor_pump_val){
      digitalWrite(relay, HIGH);
    }
    else{
      digitalWrite(relay, LOW);
    }
  }

  Blynk.run();
  timer.run();
}

void TellLevel(){

  float_switch_1_val = digitalRead(float_switch_1);
  float_switch_2_val = digitalRead(float_switch_2);
  float_switch_3_val = digitalRead(float_switch_3);
  float_switch_4_val = analogRead(float_switch_4);

  if(float_switch_1_val == LOW && float_switch_2_val == LOW && float_switch_3_val == LOW && float_switch_4_val <= 100){

    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
    gauge_val = 100;

  }
  else if(float_switch_1_val == HIGH && float_switch_2_val == LOW && float_switch_3_val == LOW && float_switch_4_val <= 100){

    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
    gauge_val = 75;

  }
  else if(float_switch_1_val == HIGH && float_switch_2_val == HIGH && float_switch_3_val == LOW && float_switch_4_val <= 100){

    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
    gauge_val = 50;

  }
  else if(float_switch_1_val == HIGH && float_switch_2_val == HIGH && float_switch_3_val == HIGH && float_switch_4_val <= 100){
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, HIGH);
    gauge_val = 25;
  }
  else{
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    gauge_val = 0;
  }
}


