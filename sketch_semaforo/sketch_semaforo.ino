 
int tempo1;
int tempo2;
int tempo3;



void setup() {
  // put your setup code here, to run once:

  tempo1 = 4000;
  tempo2 = 2000;
  tempo3 = 400;
  
  pinMode(13, OUTPUT); // verde
  pinMode(12, OUTPUT); // giallo
  pinMode(11, OUTPUT); // rosso
  pinMode(2, OUTPUT); // rosso1
  pinMode(3, OUTPUT); // giallo1
  pinMode(4,OUTPUT); // verde1
  
  

}

void loop() {
  // put your main code here, to run repeatedly:
  
  digitalWrite(11, HIGH);
  digitalWrite(4, HIGH);
  numlampeggi(4, tempo3);
  digitalWrite(3, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(4,LOW);
  delay(tempo2);
  digitalWrite(12,LOW);
  digitalWrite(11, LOW);
  digitalWrite(13, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  numlampeggi(13, tempo3);
 
  
  digitalWrite(12, HIGH);
  digitalWrite(3, HIGH);
  delay(tempo2);
  digitalWrite(13, LOW);
  digitalWrite(2, LOW);
  digitalWrite(12, LOW);
  digitalWrite(3, LOW);
  
}

void numlampeggi( int b, int c)
{
  for( int a = 0; a <= 3; a++)
  {
    digitalWrite(b, HIGH);
    delay(tempo3);
    digitalWrite(b, LOW);
    delay(tempo3);
  }
}

                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                
