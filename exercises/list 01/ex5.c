// 5 - Escreva um programa que determine o menor multiplo de um numero inteiro. Este 
//     multiplo deve ser maior que o limite minimo recebido. Recebe os 2 numeros via 
//     teclado.
//     Ex: menor multiplo de 13 maior que 100. Resultado: 104.
#include <stdio.h>
int main(){
    int number, limit;
    printf("Insira o numero e o valor limit: \n");
    scanf("%d %d", &number, &limit);
    printf("Menor multiplo de %d maior que %d. Resultado: %d\n", number, limit, number * (limit/number + 1));
 
}