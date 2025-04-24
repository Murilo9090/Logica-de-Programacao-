// Faça um programa que receba o ano de nascimento de uma pessoa e
//o ano atual. Calcule e imprima:
//a. A idade dessa pessoa 
//b. Essa idade convertida em semana

//Variaveis
int anonascimento = 0;
int anoatual = 0;
int idade = 0;
int idadesemanas = 0;

void setup()
{
   Serial.begin(9600);
}

void loop()
  
  
{
  //cabeçalho
  Serial.println("|------------------------------|");
  Serial.println("|                              |");
  Serial.println("|        lopal                 |");
  Serial.println("|                              |");
  Serial.println("|------------------------------|");
  
 Serial.println();  
 Serial.println(); 
  
  //entrada
  Serial.println("Digite seu ano de nascimento");
   while( ! Serial.available() ){}//Aguarda o usuário digitar (para loop)
  anonascimento = Serial.parseInt();
   Serial.println("Digite o ano atual");
   while( ! Serial.available() ){}//Aguarda o usuário digitar (para loop)
  anoatual = Serial.parseInt();
  //processamento
  idade = anoatual - anonascimento;
  idadesemanas = idade * 12 * 4;
  
  //saída
  Serial.println( "sua idade: " + String(idade) );
  Serial.println( "sua idade em semanas: " + String(idadesemanas) );
}