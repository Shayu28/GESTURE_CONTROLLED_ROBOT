int xPin=A0; 
int yPin=A1;

int w1=8;
int w2=9;
int w3=10;
int w4=11;

void setup()
{ 
  pinMode(xPin,INPUT); 
  pinMode(yPin,INPUT);
  pinMode(w1,OUTPUT); 
  pinMode(w2,OUTPUT); 
  pinMode(w3,OUTPUT); 
  pinMode(w4,OUTPUT); 
}

void loop() 
{ 
  int x=analogRead(xPin); 
  int y=analogRead(yPin);
  if ((x>294 && x<340) && (y>294 && y<340)) //stop 
  { 
    digitalWrite(w1,LOW);
    digitalWrite(w2,LOW);
    digitalWrite(w3,LOW);
    digitalWrite(w4,LOW); 
  }
  else 
  { 
    if ((x>340 && x<380) && (y>294 && y<340)) //forward direction 
    { 
      digitalWrite(w1,HIGH);
      digitalWrite(w2,LOW);
      digitalWrite(w3,HIGH);
      digitalWrite(w4,LOW);
    } 
    if ((x>345 && x<294) && (y>294 && y<340)) //backward direction 
    { 
      digitalWrite(w1,LOW);
      digitalWrite(w2,HIGH);
      digitalWrite(w3,LOW);
      digitalWrite(w4,HIGH);
    }
    if ((x>294 && x<340) && (y>340 && y<380)) //left direction 
    { 
      digitalWrite(w1,HIGH);
      digitalWrite(w2,LOW);
      digitalWrite(w3,LOW);
      digitalWrite(w4,LOW); 
    }
    if ((x>294 && x<340) && (y>340 && y<294)) //right direction 
    { 
      digitalWrite(w1,LOW);
      digitalWrite(w2,LOW);
      digitalWrite(w3,HIGH);
      digitalWrite(w4,LOW); 
    } 
  } 
}
