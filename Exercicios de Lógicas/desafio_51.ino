// C++ code
//
void setup()
{
 Serial.begin(9600);
}

void loop()
{
  for(int contador = 60; contador <= 80; contador +=2){
  Serial.println("Contador par: " + String(contador));
    delay(1000);
  }
  for(int contador =81; contador <= 101; contador +=2){
  Serial.println("Contador impar: " + String(contador));
    delay(1000); 
  }
  
}