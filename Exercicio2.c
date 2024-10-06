/*Escreva um programa que verifique, em uma string, a existência da letra ‘a’, seja maiúscula ou minúscula, além de informar a quantidade de vezes em que ela ocorre.

IMPORTANTE: Essa string pode ser informada através de qualquer entrada de sua preferência ou pode ser previamente definida no código;*/

#include <stdio.h>
#include <string.h>

int main(){
    char frase[1000];
    char aux[] = "Aa";

    printf("Informe uma frase: ");
    scanf("%[^\n]", frase);

    int contador = 0;
    for(int i = 0; i < strlen(frase); i++){
        if(frase[i] == 'a' || frase[i] == 'A')
            contador++;
    }
    printf("O total de ocorrencias da letra 'a' minusculas e maiusculas sao de: %d vezes", contador);
    return 0;
}
