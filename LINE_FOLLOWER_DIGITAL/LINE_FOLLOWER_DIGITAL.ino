int IR1=A1;      //Right sensor
int IR2=A2;    //left Sensor
// motor one
   
int MotorA1=4;   //Right motor
int MotorB1=5;  
int MotorA2=6;    //Left motor
int MotorB2=7;
void setup() 
{
  // put your setup code here, to run once:
  pinMode(IR1,INPUT);
  pinMode(IR2,INPUT);
  pinMode(MotorA1,OUTPUT);
  pinMode(MotorB1,OUTPUT);
  pinMode(MotorA2,OUTPUT);
  pinMode(MotorB2,OUTPUT);
  Serial.begin(9600);
}
void loop() 
{
    Serial.println(digitalRead(IR1));
    Serial.println(digitalRead(IR2));
   if(digitalRead(IR1)=HIGH && digitalRead(IR2)=HIGH) //IR will not glow on black line
  {

    digitalWrite(MotorA1,HIGH);
    digitalWrite(MotorB1,LOW);
    digitalWrite(MotorA2,HIGH);
    digitalWrite(MotorB2,LOW);
 
  }
  else if(digitalRead(IR1)=LOW && digitalRead(IR2)=HIGH)
  {
    digitalWrite(MotorA1,LOW);
    digitalWrite(MotorB1,LOW);
    digitalWrite(MotorA2,HIGH);
    digitalWrite(MotorB2,LOW);
  }
    else if(digitalRead(IR1)=HIGH && digitalRead(IR2)=LOW)
  {
    digitalWrite(MotorA1,HIGH);
    digitalWrite(MotorB1,LOW);
    digitalWrite(MotorA2,LOW);
    digitalWrite(MotorB2,LOW);
  }

    else
  {
    digitalWrite(MotorA1,LOW);
    digitalWrite(MotorB1,LOW);
    digitalWrite(MotorA2,LOW);
    digitalWrite(MotorB2,LOW);
  }
  }

 
