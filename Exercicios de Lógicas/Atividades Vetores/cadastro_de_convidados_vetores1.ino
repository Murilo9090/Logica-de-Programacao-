// C++ code
//
int qtdCadastro = 4;
String convidados[4];//Cria um vetor tamanho 4
int idadeConvidados[qtdCadastro];//Camel Case
String emailConvidados[qtdCadastro];

//Funções
void desanhaCabecalho()
{
 Serial.println(" ***Festa do Silva*** ");
 Serial.println();
 Serial.println();
}
  
void setup()
{
  Serial.begin(9600);
}

void loop()
{
 desanhaCabecalho();
  //Cadastrar os dados
  for(int i = 0; i < qtdCadastro; i++)
  {
   //Solicitar o nome do usuário
    Serial.println("informe " +String(i + 1)+ "o nome para cadastro");
    while(!Serial.available());
    convidados[i] = Serial.readString();
    
    Serial.println("informe o idade de " + convidados[i]);
    while(!Serial.available());
    idadeConvidados[i] = Serial.parseInt(); 
      
    Serial.println("informe o email de " + convidados[i]);
    while(!Serial.available());
    emailConvidados[i] = Serial.readString();
    
    Serial.println();
    
  }//fim do for
  
   //Exibir a lista de convidados
  
  //obs: só vai na festa quem for maior de idade >= 18
  Serial.println("** Exibindo convidados eleitos pra a festa **");
  Serial.println();
  Serial.println();

  for(int i =0; i < qtdCadastro; i++)
  {
   if(idadeConvidados[i] >= 18)
   Serial.println("Nome: " + convidados[i]);
   Serial.println("idade: " + String(idadeConvidados[i]));
   Serial.println("Email: " + emailConvidados[i]);
   Serial.println("Permissao para a festa: " + String(idadeConvidados[i] >= 18 ? "OK" : "Menor de idade"));
   Serial.println("----------");
   Serial.println();
  }//fim do if
  
 
  
  
  
 delay(2000);
}