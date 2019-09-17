// 1 - Escreva um programa que receba via teclado numeros inteiros positivos.
//     Quando o numero digitado for negativo o programa deve parar e calcula a
//     media dos valores digitados.

#include <stdio.h>

int main()
{
    int value;
    unsigned int  count = 0, isPositive = 1,total = 0;
    do
    {
        printf("Escreva um numero positivo: ");
        scanf("%d", &value);
        if (value >= 0){
            count = count + 1;
            total = total + value;
        }
        else
            isPositive = 0;
    } while (isPositive == 1);
    printf("Media: %d\n", count,total/count);
}