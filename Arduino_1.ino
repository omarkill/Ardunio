
#define LEDV 2
#define LEDA 3
#define LEDVV 4
#define Time 1000
#define Time2 100


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(3,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(LEDV);
  piscaLed();
  
;}

void piscaLed(){
  Serial.println(LEDV);
  digitalWrite(LEDV,HIGH);
  digitalWrite(LEDA,LOW);
  delay(Time)
  
  ;digitalWrite(LEDV,LOW)
  ;digitalWrite(LEDA,HIGH)
  ;digitalWrite(4,LOW)
  ;delay(Time2)
  ;digitalWrite(4,HIGH)
  ;delay(Time2)
 
  
;}
