
int LED1 = 2;
int LED2 = 4;
int LED3 = 7;
int LED4 = 8;
int LED5 = 12;
int LED6 = 13;

int IR1 = A1;
int IR2 = A2;
int IR3 = A3;
int IR4 = A4;
int IR5 = A5;

int ldr = A0;

void setup() {
  // put your setup code here, to run once:
pinMode (LED1, OUTPUT);
pinMode (LED2, OUTPUT);
pinMode (LED3, OUTPUT);
pinMode (IR1, INPUT);
pinMode (IR2, INPUT);
pinMode (IR3, INPUT);
pinMode (ldr,INPUT);
Serial.begin(9600);
}

void loop() {

  int ldrStatus = analogRead (ldr);
  Serial.println(ldrStatus);
    if (ldrStatus <=300)
  {
  int status1 = analogRead(IR1);
  
  if(status1<500)
  {
  digitalWrite(LED1, HIGH);
  
   analogWrite(LED1,255);
   digitalWrite(LED2, HIGH);
  
   analogWrite(LED2,255);
   //delay(100);
  }
  else
  {
   digitalWrite(LED1, HIGH);
    
    analogWrite(LED1,127); 
    digitalWrite(LED2, HIGH);
    
    analogWrite(LED2,127); 
   // delay(50);
  }
  int status2 = analogRead(IR2);
  if(status2<500)
  {
  digitalWrite(LED2, HIGH);
  
   analogWrite(LED2,255);
   digitalWrite(LED3, HIGH);
  
   analogWrite(LED3,255);
   //delay(100);
  }
  else
  {
   digitalWrite(LED2, HIGH);
    
    analogWrite(LED2,127);
    digitalWrite(LED3, HIGH);
    
    analogWrite(LED3,127);  
   // delay(50);
  }

  int status3 = analogRead(IR3);
  if(status3<500)
  {
  digitalWrite(LED3, HIGH);
  
   analogWrite(LED3,255);
   digitalWrite(LED4, HIGH);
  
   analogWrite(LED4,255);
   //delay(100);
  }
  else
  {
   digitalWrite(LED3, HIGH);
    
    analogWrite(LED3,127); 
    digitalWrite(LED4, HIGH);
    
    analogWrite(LED4,127); 
   // delay(50);
  }
  int status4 = analogRead(IR4);
  if(status4<500)
  {
  digitalWrite(LED4, HIGH);
  
   analogWrite(LED4,255);
   digitalWrite(LED5, HIGH);
  
   analogWrite(LED5,255);
   //delay(100);
  }
  else
  {
   digitalWrite(LED4, HIGH);
    
    analogWrite(LED4,127); 
    digitalWrite(LED5, HIGH);
    
    analogWrite(LED5,127); 
   // delay(50);
  }
  int status5 = analogRead(IR5);
  if(status5<500)
  {
  digitalWrite(LED5, HIGH);
  
   analogWrite(LED5,255);
   digitalWrite(LED6, HIGH);
  
   analogWrite(LED6,255);
   //delay(100);
  }
  else
  {
   digitalWrite(LED5, HIGH);
    
    analogWrite(LED5,127); 
    digitalWrite(LED6, HIGH);
    
    analogWrite(LED6,127); 
   // delay(50);
  }
 }
  else 
       {
         digitalWrite(LED1, LOW);
         digitalWrite(LED2, LOW);
         digitalWrite(LED3, LOW);
         digitalWrite(LED4, LOW);
         digitalWrite(LED5, LOW);
         digitalWrite(LED6, LOW);
         
      }
  
}
