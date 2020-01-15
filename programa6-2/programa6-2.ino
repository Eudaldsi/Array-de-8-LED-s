const int led0 = 5;          // donar nom al pin 5 de l’Arduino
const int delayA =700;

//********** Setup ********************************************************hkj,********
void setup()
{
  pinMode(led0, OUTPUT);     // definir el pin 5 com una sortida
  
 for (int i=0; i<3; i++)
  {
  digitalWrite(led0, HIGH);    // posar a 5V el pin 5
  delay(delayA); 

  digitalWrite(led0, LOW);
  delay(delayA); 

  }
}


void loop()
{
  

}
