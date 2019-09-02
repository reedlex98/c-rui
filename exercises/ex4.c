// 4 - Escreva um programa que permute o conte�do de duas vari�veis sem utilizar uma
//     vari�vel auxiliar.

#include <stdio.h>

int main(){
    int a, b;

    printf("Digite um valor para a e b, respectivamente: \n");
    scanf("%d %d", &a, &b);
    printf("Antes da troca, a = %d e b = %d\n", a,b);

    a = a + b; // a = 3 + 4
    b = a - b; // b = 7 - 4
    a = a - b; // a = 7 - 3

    printf("Depois da troca, a = %d e b = %d\n", a,b);
}