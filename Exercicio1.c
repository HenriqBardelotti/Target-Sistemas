/*1) Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre será a soma dos 2 valores anteriores (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), escreva um programa na linguagem que desejar onde, informado um número, ele calcule a sequência de Fibonacci e retorne uma mensagem avisando se o número informado pertence ou não a sequência.*/

//versão mais otimizada do código
#include <stdio.h>

int main(){
    int numero;
    scanf("%d", &numero);

    if (numero == 0 || numero == 1) {
        printf("O numero %d pertence a sequecencia de Fibonacci\n", numero);
        return 0;
    }

    int anterior = 0;
    int atual = 1;
    int fibonacci = anterior + atual;

    while(fibonacci < numero){
        anterior = atual;
        atual = fibonacci;
        fibonacci = anterior + atual;
    }

    if(fibonacci == numero)
        printf("O numero %d pertence a sequecencia de Fibonacci\n", numero);
    else
        printf("O numero %d nao pertence a sequecencia de Fibonacci\n", numero);

    return 0;
}

//versão com recursividade porém menos otimizada
/*
#include <stdio.h>
int g_aux = 0;

int fibonacci(int n);

int main(){
    int numero;
    scanf("%d", &numero);
    for(int i = numero; i > -1; i--){
        int aux = fibonacci(i);
        printf("Numero = %d, fibo = %d\n", numero, aux);
        if (aux < numero)
            break;
        else if(numero == aux){
            printf("O numero %d pertence a sequecencia de Fibonacci\n", numero);
            return 0;
        }
    }
    printf("O numero %d nao pertence a sequecencia de Fibonacci\n", numero);
    return 0;
}

int fibonacci(int n){
    if(n == 0)
        return 0;
    else if(n == 1)
        return 1;
    return  fibonacci(n-1) + fibonacci(n-2);
}*/
