// Faça um programa que receba a medida em polegadas e exiba esse número em centímetros.

//Variaveis
float centimetros = 0;
float polegadas = 0;
void setup()
{
 Serial.begin(9600);//Inicia a Serial
}

void loop()
{
   //Cabeçalho
  Serial.println("|------------------------------|");
  Serial.println("|                              |");
  Serial.println("|        Lopal - EX06          |");
  Serial.println("|                              |");
  Serial.println("|------------------------------|");
  
 Serial.println();  
 Serial.println(); 
 //entrada
  Serial.println("Digite a medida em polegadas");
  while( ! Serial.available() ){}//Aguarda o usuário digitar (para loop)
  polegadas = Serial.parseFloat();// le o texto digitad o pelo usuario
 //processamento
  centimetros = centimetros = polegadas * 2.54;
 //saída
  Serial.println();//pula uma linha 
  Serial.println("Sua medida de polegadas em centimetros: " + String(centimetros) );
  Serial.println();//pula uma linha
}