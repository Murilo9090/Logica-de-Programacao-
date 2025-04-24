//Faça um programa que receba um número e exiba o seu dobro.

//Variaveis
int numero = 0;

void setup()
  
{
   Serial.begin(9600);
}

void loop()
{
   //Cabeçalho
  Serial.println("|------------------------------|");
  Serial.println("|                              |");
  Serial.println("|        Lopal - EX03          |");
  Serial.println("|                              |");
  Serial.println("|------------------------------|");
  
 Serial.println();  
 Serial.println(); 
 //entrada
  Serial.println("Digite um numero");
  while( ! Serial.available() ){}//Aguarda o usuário digitar (para loop)
  numero = Serial.parseInt();
 //processamento
   numero = numero * 2;
 //saída
   Serial.println( "o dobro do numero e: " + String(numero) );

}