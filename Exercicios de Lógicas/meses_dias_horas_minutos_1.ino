//Faça um programa que receba a idade de uma pessoa em anos e
//imprima essa idade em:Meses,Dias,Horas,Minutos.

//Variaveis
int idade = 0;
long idadeMeses = 0;
long idadeDias = 0;
long idadeHoras = 0;
long idadeMinutos = 0;
void setup()
{
  Serial.begin(9600);
}

void loop()
{
   //Cabeçalho
  Serial.println("|------------------------------|");
  Serial.println("|                              |");
  Serial.println("|        Lopal - EX01          |");
  Serial.println("|                              |");
  Serial.println("|------------------------------|");
  
 Serial.println();  
 Serial.println(); 
  //entrada
  Serial.println("Digite a sua idade");//pergunta a idade do usuario
  while( ! Serial.available() ){}//Aguarda o usuário digitar (para loop)
  idade = Serial.parseInt();  
  
  //processamento
  idadeMeses = idade * 12;
  idadeDias = idade * 365;
  idadeHoras = idade * 24 * 365;
  idadeMinutos = idade * 365 * 24 * 60;
  //saída
  Serial.println( "sua idade em meses: " + String(idadeMeses) );
  Serial.println( "sua idade em Dias: " + String(idadeDias) );
  Serial.println( "sua idade em Horas: " + String(idadeHoras) );
  Serial.println( "sua idade em Minutos: " + String(idadeMinutos) );
}