// 7 - Fa�a um programa para ler um numero inteiro, positivo de tres digitos, e gerar
//     outro n�mero formado pelos d�gitos invertidos do n�mero lido.
//     Ex:   N�meroLido = 123
//         N�meroGerado = 321
#include <stdio.h>
int main()
{
    int number;
    printf("Insert a integer number with 3 digits: ");
    scanf("%d", &number);
    printf("Generated number: %d%d%d\n", number % 100 % 10, number % 100 / 10, number / 100);
}