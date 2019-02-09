
int lampeggi = 0;
int tempolampeggi = 0;
int tempoverde = 0;
int tempogiallo = 0;


void setup() {
  // put your setup code here, to run once:

  
  pinMode(13, OUTPUT); // verde
  pinMode(12, OUTPUT); // giallo
  pinMode(11, OUTPUT); // rosso
  pinMode(2, OUTPUT); // rosso1
  pinMode(3, OUTPUT); // giallo1
  pinMode(4,OUTPUT); // verde1
Lampeggi();
TempoLampeggi();
TempoVerde();
TempoGiallo();
  

}

void loop() {
  // put your main code here, to run repeatedly:
  
  digitalWrite(11, HIGH);
  digitalWrite(4, HIGH);

  numlampeggi(4, tempolampeggi,lampeggi );
  digitalWrite(12, HIGH);
  digitalWrite(3, HIGH);
  delay(tempogiallo);
  digitalWrite(12,LOW);
  digitalWrite(11, LOW);
  digitalWrite(13, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  numlampeggi(13, tempolampeggi, lampeggi);
  digitalWrite(12, HIGH);
  digitalWrite(3, HIGH);
  delay(tempogiallo);
  digitalWrite(13, LOW);
  digitalWrite(2, LOW);
  digitalWrite(12, LOW);
  digitalWrite(3,LOW);
  
  
}

void numlampeggi( int b, int c, int x)
{
  for( int a = 0; a < x; a++)
  {
    digitalWrite(b, HIGH);
    delay(tempolampeggi);
    digitalWrite(b, LOW);
    delay(tempolampeggi);
  }
}

void Lampeggi()
{
  Serial.begin(9600),
  Serial.print( "Quanti lampeggi verdi vuoi?");
  while(Serial.available() == 0) {};
  lampeggi = Serial.readString().toInt();
}
 void TempoLampeggi()
{
  Serial.begin(9600),
  Serial.print( "Quanto durano i lampeggi del verde?");
  while(Serial.available() == 0) {};
  tempolampeggi = Serial.readString().toInt();
} 
void TempoVerde()
{
  Serial.begin(9600),
  Serial.print( "Quanto tempo dura il verde?");
  while(Serial.available() == 0) {};
  tempoverde = Serial.readString().toInt();
} 
void TempoGiallo()
{
  Serial.begin(9600),
  Serial.print( "Quanto tempo dura il giallo?");
  while(Serial.available() == 0) {};
  tempogiallo = Serial.readString().toInt();

}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             
