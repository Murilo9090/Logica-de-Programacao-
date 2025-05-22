void setup() {
    Serial.begin(9600); 
}

void loop() {
    int vetor[10]; 
    int contador = 0;
    int numero;

    Serial.println("Digite 10 numeros pares no Monitor Serial:");

    while (contador < 10) {
        while (!Serial.available()) {} 
        numero = Serial.parseInt(); 

        if (numero % 2 == 0) {
            vetor[contador] = numero;
            Serial.print("Numero armazenado: ");
            Serial.println(numero);
            contador++;
        } else {
            Serial.println("Numero invalido! Digite um numero par.");
        }
    }

    // Exibir os valores armazenados usando FOR
    Serial.println("Os numeros armazenados sao:");
    for (int i = 0; i < 10; i++) {
        Serial.println(vetor[i]);
    }

    while (true); // Para evitar repetição infinita no Arduino
}
