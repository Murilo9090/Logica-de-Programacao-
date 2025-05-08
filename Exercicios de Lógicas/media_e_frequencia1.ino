/* 
Calcule a média entre duas notas.
Verifique se o aluno foi aprovado:
Aprovado se média é MAIR OU IGUAL A 6 e SE A frequênciaÉ MAIOR OU IGUAL 75%.
Caso contrário, exiba se foi reprovado por nota, por frequência ou por ambos.
Se a média for exatamente 10, exiba: "Parabéns! Nota máxima!
*/

//Variaveis
float n1,n2,media;
float frequencia;
  
void setup()
{
 Serial.begin(9600);
}

void loop()
{
  //Entrada
  Serial.println("digite a primeira nota = ");
   while( ! Serial.available() ) {}
   n1 = Serial.parseFloat();
  
  Serial.println("digite a segunda nota = "); 
   while( ! Serial.available() ) {}
   n2 = Serial.parseFloat();
  
  Serial.println("digite sua frequencia = ");
   while( ! Serial.available() ) {}
   frequencia = Serial.parseFloat();
  //Processamento
  media =(n1 + n2) / 2;
  Serial.println("media: " + String(media));
  frequencia =( frequencia / 270) * 100;
  Serial.println("frequencia: " + String(frequencia));
  
  if( media >= 10 ) {
    Serial.println("Parabens! Nota maxima!");
  }
    if (media >= 6 && frequencia >= 75) {
        Serial.println("Aprovado!");
      
        
    }
}