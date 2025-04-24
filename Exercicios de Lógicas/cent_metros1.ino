// Faça um programa que receba a medida em centímetros e exiba esse número em polegadas. 
//OBS: Uma polegada equivale a 2.54 centímetros.

//Variaveis
float centimetros =0;
float polegadas =0;
void setup()
{
 Serial.begin(9600);//Inicia a Serial
}

void loop()
{
   //Cabeçalho
  Serial.println("|------------------------------|");
  Serial.println("|                              |");
  Serial.println("|        Lopal - EX05          |");
  Serial.println("|                              |");
  Serial.println("|------------------------------|");
  
 Serial.println();  
 Serial.println(); 
 //entrada
  Serial.println("Digite a medida em centimetros");
  while( ! Serial.available() ){}//Aguarda o usuário digitar (para loop)
  centimetros = Serial.parseFloat();// le o texto digitad o pelo usuario
 //processamento
  polegadas = polegadas = centimetros * 0.39370;
 //saída
  Serial.println();//pula uma linha 
  Serial.println("Sua medida em (cm) em polegadas: " + String(polegadas) );
}