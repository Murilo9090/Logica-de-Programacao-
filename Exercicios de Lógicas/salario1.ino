// Faça um programa que receba o nome, cargo e salário de um funcionário. Calcule o
//salário acrescido de 10%. Ao final exiba o nome, o cargo e o novo salário desse funcionário.

//Variaveis
String nome = "";
String cargo = "";
float salario = 0;
void setup()
{
 Serial.begin(9600); 
}

void loop()
{
  Serial.println("|------------------------------|");
  Serial.println("|                              |");
  Serial.println("|        Lopal - EX07          |");
  Serial.println("|                              |");
  Serial.println("|------------------------------|");
  
 Serial.println();  
 Serial.println(); 
  //entrada
  Serial.println("Digite seu nome");
  while( ! Serial.available() ){}//Aguarda o usuário digitar (para loop)
  nome = Serial.readString(); // le o texto digitado pelo usuario
  nome.trim();
  
  Serial.println("Digite seu cargo");
  while( ! Serial.available() ){}//Aguarda o usuário digitar (para loop)
  cargo = Serial.readString(); // le o texto digitado pelo usuario
  nome.trim();
  
  Serial.println("Digite seu salario");
  while( ! Serial.available() ){}//Aguarda o usuário digitar (para loop)
  salario = Serial.parseFloat();
  //processamento
   salario = salario * 1.10;
  
  //saída
   Serial.println();//pula uma linha 
   Serial.println("nome: " + nome );
   Serial.println("Seu novo salario e: " + String(salario) );
}