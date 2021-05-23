int pin1=2;
int pin2=3;
int obstaclePin=4;
int inputVal = 0;
char* p="";
char* c="";
void setup() {
  // put your setup code here, to run once: 
  pinMode(pin1,INPUT);
  pinMode(pin2,INPUT);
  pinMode(obstaclePin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(pin1)== HIGH)
  {
//    Serial.write("5\n");
    p="5\n";
//    delay(200);
  }
  else if(digitalRead(pin2)== HIGH)
  {
//    Serial.write("8\n");
    p="8\n";
//    delay(200);
  }
  else if (digitalRead(obstaclePin)== HIGH)
  {
//    Serial.write("2\n");
    p="2\n";
//    delay(200);
  }
  else if (digitalRead(obstaclePin)== LOW)
  {
//    Serial.write("4\n");
    p="1\n";
//    delay(200);
  }
  if(p!=c){
    c=p;
    Serial.print(p);
  }
  
  delay(200);
  }
