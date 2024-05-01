char Incoming_value = 0;

int in1 =  8;
int in2 =  7;
int in3 =  6;
int in4 =  5;
int ENA =  9;
int ENB =  10;   
int ABS = 200;     

void setup() 
{
  Serial.begin(9600);         
  pinMode(13, OUTPUT);       
}

void forward(){
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  analogWrite(ENA, ABS);
  analogWrite(ENB, ABS);
}
void left(){
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  analogWrite(ENA, ABS);
  analogWrite(ENB, ABS);
}
void right(){
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  analogWrite(ENA, ABS);
  analogWrite(ENB, ABS);
}
void stop(){
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  analogWrite(ENA, ABS);
  analogWrite(ENB, ABS);
}

void loop()
{
  if(Serial.available() > 0)  
  {
    Incoming_value = Serial.read();           
    if(Incoming_value == '1') {
      left();
      delay(1000);
      forward();
      delay(5000);
      right();
      delay(1000);
      forward();
      delay(5000);
      left();
      delay(1000);
      stop();
      delay(5000);
      left();
      delay(1000);
      forward();
      delay(5000);
      left();
      delay(1000);
      forward();
      delay(5000);
      left();
      delay(1000);
      stop();
    }   
    if(Incoming_value == '2') {
      left();
      delay(1000);
      forward();
      delay(5000);
      right();
      delay(1000);
      forward();
      delay(5000);
      right();
      delay(1000);
      stop();
      delay(5000);
      right();
      delay(1000);
      forward();
      delay(5000);
      left();
      delay(1000);
      forward();
      delay(5000);
      left();
      delay(1000);
      stop();
    }                     
     if(Incoming_value == '3') {
      left();
      delay(1000);
      forward();
      delay(1000);
      right();
      delay(1000);
      forward();
      delay(5000);
      left();
      delay(1000);
      stop();
      delay(5000);
      left();
      delay(1000);
      forward();
      delay(5000);
      left();
      delay(1000);
      forward();
      delay(1000);
      left();
      delay(1000);
      stop();
    }             
    if(Incoming_value == '4') {
      left();
      delay(1000);
      forward();
      delay(1000);
      right();
      delay(1000);
      forward();
      delay(5000);
      right();
      delay(1000);
      stop();
      delay(5000);
      right();
      delay(1000);
      forward();
      delay(5000);
      left();
      delay(1000);
      forward();
      delay(5000);
      left();
      delay(1000);
      stop();
    } 
    if(Incoming_value == '5') {
      left();
      delay(1000);
      forward();
      delay(5000);
      right();
      delay(1000);
      forward();
      delay(3500);
      left();
      delay(1000);
      stop();
      delay(5000);
      left();
      delay(1000);
      forward();
      delay(3500);
      left();
      delay(1000);
      forward();
      delay(5000);
      left();
      delay(1000);
      stop();
    }   
    if(Incoming_value == '6') {
      left();
      delay(1000);
      forward();
      delay(5000);
      right();
      delay(1000);
      forward();
      delay(3500);
      right();
      delay(1000);
      stop();
      delay(5000);
      right();
      delay(1000);
      forward();
      delay(3500);
      left();
      delay(1000);
      forward();
      delay(5000);
      left();
      delay(1000);
      stop();
    }                     
     if(Incoming_value == '7') {
      left();
      delay(1000);
      forward();
      delay(1000);
      right();
      delay(1000);
      forward();
      delay(5000);
      left();
      delay(1000);
      stop();
      delay(5000);
      left();
      delay(1000);
      forward();
      delay(5000);
      left();
      delay(1000);
      forward();
      delay(5000);
      left();
      delay(2000);
      stop();
    }             
    if(Incoming_value == '8') {
      left();
      delay(1000);
      forward();
      delay(1000);
      right();
      delay(1000);
      forward();
      delay(3500);
      right();
      delay(1000);
      stop();
      delay(5000);
      right();
      delay(1000);
      forward();
      delay(3500);
      left();
      delay(1000);
      forward();
      delay(1000);
      left();
      delay(1000);
      stop();
    }                         
  }                            
}