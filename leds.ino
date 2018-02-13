
int RGB1 =12;
int RGB2 =11;
int RGB3 =10; 
int RGB4 =9;
int RGB5 =8;
int RGB6 =7;
int RGB7 =6;
int RGB8 =5;
int RGB9 =4;
int RGB10 =3;
int key1 =A3;
int key2 =A2;
int key3 =A1;
int key4 =A0;
void setup()
{
  Serial.begin(9600);
  
  pinMode(RGB1, OUTPUT);
  pinMode(RGB2, OUTPUT);
  pinMode(RGB3, OUTPUT);
  pinMode(RGB4, OUTPUT);
  pinMode(RGB5, OUTPUT); 
  pinMode(RGB6, OUTPUT);
  pinMode(RGB7, OUTPUT);
  pinMode(RGB8, OUTPUT);
  pinMode(RGB9, OUTPUT);
  pinMode(RGB10, OUTPUT);
  
  pinMode(key1, INPUT_PULLUP);
  pinMode(key2, INPUT_PULLUP);
  pinMode(key3, INPUT_PULLUP);
  pinMode(key4, INPUT_PULLUP);
  
}
void loop()
{
  int key1Value = analogRead(key1);
  int key2Value = analogRead(key2);
  int key3Value = analogRead(key3);
  int key4Value = analogRead(key4);
  if (key1Value <= 100)  
  {
     delay(30);
     if (key1Value <= 100) 
     {
       digitalWrite(RGB5,HIGH);
       digitalWrite(RGB6, HIGH);
       delay(50);
       digitalWrite(RGB4, HIGH);
       digitalWrite(RGB7,HIGH);
       delay(50);
       digitalWrite(RGB3, HIGH);
       digitalWrite(RGB8, HIGH);
       delay(50);
       digitalWrite(RGB2,HIGH);
       digitalWrite(RGB9, HIGH);
       delay(50);
       digitalWrite(RGB1, HIGH);
       digitalWrite(RGB10, HIGH);
       delay(1000);
     }
     else
     {
        digitalWrite(RGB1, LOW);
        digitalWrite(RGB2, LOW);
        digitalWrite(RGB3, LOW);
        digitalWrite(RGB4, LOW); 
        digitalWrite(RGB5, LOW);
        digitalWrite(RGB6, LOW);
        digitalWrite(RGB7, LOW);
        digitalWrite(RGB8, LOW);
        digitalWrite(RGB9, LOW);
        digitalWrite(RGB10, LOW);
      }
  }  
 
  if (key2Value <= 100)  
  {
    digitalWrite(RGB1,HIGH);
    digitalWrite(RGB6, HIGH);
    delay(40);
    digitalWrite(RGB2, HIGH);
    digitalWrite(RGB7,HIGH);
    delay(40);
    digitalWrite(RGB3, HIGH);
    digitalWrite(RGB8, HIGH);
    delay(40);
    digitalWrite(RGB4,HIGH);
    digitalWrite(RGB9, HIGH);
    delay(40);
    digitalWrite(RGB5, HIGH);
    digitalWrite(RGB10, HIGH);
    delay(1000);
  }  
  else
  {
    digitalWrite(RGB1, LOW);
    digitalWrite(RGB2, LOW);
    digitalWrite(RGB3, LOW);
    digitalWrite(RGB4, LOW); 
    digitalWrite(RGB5, LOW);
    digitalWrite(RGB6, LOW);
    digitalWrite(RGB7, LOW); 
    digitalWrite(RGB8, LOW);
    digitalWrite(RGB9, LOW);
    digitalWrite(RGB10, LOW);
  }
  if (key3Value <= 100)  
  {
    digitalWrite(RGB1,HIGH);
    delay(90);
    digitalWrite(RGB1, LOW); 
    digitalWrite(RGB2, HIGH);
    delay(90);
    digitalWrite(RGB2, LOW);
    digitalWrite(RGB3, HIGH);
    delay(90);
    digitalWrite(RGB3, LOW);
    digitalWrite(RGB4, HIGH);
    delay(90);
    digitalWrite(RGB4, LOW); 
    digitalWrite(RGB5,HIGH);
    delay(90);
    digitalWrite(RGB5, LOW);
    digitalWrite(RGB6,HIGH);
    delay(90);
    digitalWrite(RGB6, LOW);
    digitalWrite(RGB7,HIGH);
    delay(90);
    digitalWrite(RGB7, LOW);
    digitalWrite(RGB8,HIGH);
    delay(90);
    digitalWrite(RGB8, LOW);
    digitalWrite(RGB9,HIGH);
    delay(90);
    digitalWrite(RGB9, LOW);
    digitalWrite(RGB10,HIGH);
    delay(1000);
  }  
  else
  {
    digitalWrite(RGB1, LOW); 
    digitalWrite(RGB2, LOW);
    digitalWrite(RGB3, LOW);
    digitalWrite(RGB4, LOW);
    digitalWrite(RGB5, LOW);
    digitalWrite(RGB6, LOW);
    digitalWrite(RGB7, LOW);
    digitalWrite(RGB8, LOW);
    digitalWrite(RGB9, LOW);
    digitalWrite(RGB10, LOW);
  }
  if (key4Value <= 100)  
  {
    digitalWrite(RGB1,HIGH);
    delay(50);
    digitalWrite(RGB1, LOW);
    digitalWrite(RGB2, HIGH);
    delay(50);
    digitalWrite(RGB2, LOW);
    digitalWrite(RGB3, HIGH);
    delay(50);
    digitalWrite(RGB3, LOW); 
    digitalWrite(RGB4,HIGH);
    delay(50);
    digitalWrite(RGB4, LOW); 
    digitalWrite(RGB5, HIGH);
    delay(50);
    digitalWrite(RGB5, LOW); 
    digitalWrite(RGB6, HIGH);
    delay(50);
    digitalWrite(RGB6, LOW); 
    digitalWrite(RGB7,HIGH);
    delay(50);
    digitalWrite(RGB7, LOW);
    digitalWrite(RGB8, HIGH);
    delay(50);
    digitalWrite(RGB8, LOW);
    digitalWrite(RGB9, HIGH);
    delay(50);
    digitalWrite(RGB9, LOW);
    digitalWrite(RGB10,HIGH);
    delay(50);
    digitalWrite(RGB10, LOW);
    digitalWrite(RGB9, HIGH);
    delay(50);
    digitalWrite(RGB9, LOW); 
    digitalWrite(RGB8, HIGH);
    delay(50);
    digitalWrite(RGB8, LOW); 
    digitalWrite(RGB7,HIGH);
    delay(50);
    digitalWrite(RGB7, LOW); 
    digitalWrite(RGB6, HIGH);
    delay(50);
    digitalWrite(RGB6, LOW); 
    digitalWrite(RGB5, HIGH);
    delay(50);
    digitalWrite(RGB5, LOW);
    digitalWrite(RGB4,HIGH);
    delay(50);
    digitalWrite(RGB4, LOW); 
    digitalWrite(RGB3, HIGH);
    delay(50);
    digitalWrite(RGB3, LOW);
    digitalWrite(RGB2, HIGH);
    delay(50);
    digitalWrite(RGB2, LOW); 
    digitalWrite(RGB1, HIGH);
    delay(50);
    digitalWrite(RGB1, LOW); 
    delay(1000);
  }  
  else
  {
    digitalWrite(RGB1, LOW);
    digitalWrite(RGB2, LOW);
    digitalWrite(RGB3, LOW);
    digitalWrite(RGB4, LOW); 
    digitalWrite(RGB5, LOW);
    digitalWrite(RGB6, LOW);
    digitalWrite(RGB7, LOW); 
    digitalWrite(RGB8, LOW);
    digitalWrite(RGB9, LOW);
    digitalWrite(RGB10, LOW);
  }
   
}
