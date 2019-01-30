 
int tempo1;
int tempo2;



void setup() {
  // put your setup code here, to run once:

  tempo1 = 4000;
  tempo2 = 2000;
  
  pinMode(13, OUTPUT); // verde
  pinMode(12, OUTPUT); // giallo
  pinMode(11, OUTPUT); // rosso
  pinMode(2, OUTPUT); // rosso1
  pinMode(3, OUTPUT); // giallo1
  pinMode(4,OUTPUT); // verde1
  
  

}

void loop() {
  // put your main code here, to run repeatedly:
  
  digitalWrite(13, HIGH);
  digitalWrite(2, HIGH);
  delay(tempo1);
  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(2, HIGH);
  delay(tempo2);
  digitalWrite(3, HIGH);
  delay(tempo2);
  digitalWrite(12, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  
  
  digitalWrite(11, HIGH);
  digitalWrite(4, HIGH);
  delay(tempo1);
  digitalWrite(11, LOW);
  digitalWrite(4, LOW);
  
  
  digitalWrite(12, HIGH);
  digitalWrite(3, HIGH);
  delay(tempo2);
  digitalWrite(12, LOW);
  digitalWrite(3, LOW);
  
  
}

                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                
