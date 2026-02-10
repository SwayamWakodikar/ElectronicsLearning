// #define LED_PIN 2
// void setup(){
//   Serial.begin(115200);
//   pinMode(LED_PIN ,OUTPUT);

// }
// void loop(){
//   digitalWrite(LED_PIN, HIGH);
//   delay(200);

//   digitalWrite(LED_PIN, LOW);
//   delay(200);
// }

//Now using milis instad of delay 
#define LED_PIN 2
unsigned long lastTime=0;
bool ledState=false;
void setup(){
  Serial.begin(115200);
  pinMode(LED_PIN,OUTPUT);
}
void loop(){
  unsigned long now=millis();
  if(now-lastTime>=1000){
    lastTime=now;
    ledState=!ledState;
    digitalWrite(LED_PIN,ledState);
    if(ledState){
    Serial.println("Light On");
    
  }
  else{
    Serial.println("Light OFF");
  }
  }
  

}