// 8 - Escreva um program que l� um valor em reais e calcula qual o menor n�mero
//     poss�vel de notas de $100, $50, $10 e $1 em que o valor lido pode ser
//     decomposto. Imprimir o valor lido e a rela��o de notas necess�rias.

#include <stdio.h>

int main()
{
    int value;
    printf("Insira uma quantidade em dinheiro: ");
    scanf("%d", &value);
    printf("Valor: %d\n", value);
    printf("Notas | Quantidade\n");
    printf("$100  | %d\n", value / 100);
    printf("$50   | %d\n", value % 100 / 50);
    printf("$10   | %d\n", value % 100 % 50 / 10);
    printf("$1    | %d\n", value % 100 % 50 % 10);
}