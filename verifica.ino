int rosso = 13;
int giallo = 11;
int bianco = 7;
int verde = 5;
int numerorandom;
int quanticicli;
int appoggio;


void setup() {
  // put your setup code here, to run once:
  pinMode(rosso, OUTPUT);
  pinMode(giallo, OUTPUT);
  pinMode(bianco, OUTPUT);
  pinMode(verde, OUTPUT);
  Serial.begin(9600);
  randomSeed(analogRead(0));

}


void loop() {
  // put your main code here, to run repeatedly:
   Serial.println("Dimmi dopo quante volte il ciclo deve ricominciare");
  while(Serial.available () == 0){}
  quanticicli = Serial.readString().toInt();
  Serial.println(quanticicli);
  Serial.println("I led devono stare accesi:");
  while(Serial.available () == 0){}
  appoggio = Serial.readString().toInt();  
  numerorandom = random(500, 5000);
  Serial.println(numerorandom);
  for(int i = 0; i < quanticicli; i++){
  digitalWrite(rosso, HIGH);
  delay(numerorandom);
  digitalWrite(rosso, LOW);
  digitalWrite(giallo, HIGH);
  delay(numerorandom);
  digitalWrite(giallo, LOW);
  digitalWrite(bianco, HIGH);
  delay(numerorandom);
  digitalWrite(bianco, LOW);
  digitalWrite(verde, HIGH);
  delay(numerorandom);
  digitalWrite(verde, LOW);
  }
  setup();
  


}
