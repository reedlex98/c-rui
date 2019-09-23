// 6 - Escreva um programa que receba um numero N. Escreva uma fun��o que
//     retorne a soma dos algarismos de N!.
//     Ex: se N = 4, N! = 24. Logo, a soma de seus algarismos �e 2 + 4 = 6.

#include <stdio.h>
#include <stdlib.h>

int somaFat(long fat)
{
    if (fat < 10)
    {
        return fat;
    }
    else if (fat < 100)
    {
        return fat / 10 + fat % 10;
    }
    else if (fat < 1000)
    {
        return fat / 100 + fat % 100 / 10 + fat % 100 % 10;
    }
    else if (fat < 10000)
    {
        return fat / 1000 + fat % 1000 / 100 + fat % 1000 % 100 / 10 + fat % 1000 % 100 % 10;
    }
    else if (fat < 100000)
    {
        return fat / 10000 + fat % 10000 / 1000 + fat % 10000 % 1000 / 100 + fat % 10000 % 1000 % 100 / 10 + fat % 10000 % 1000 % 100 % 10;
    }
    else if (fat < 1000000)
    {
        return fat / 100000 + fat % 100000 / 10000 + fat % 100000 % 10000 / 1000 + fat % 100000 % 10000 % 1000 / 100 + fat % 100000 % 10000 % 1000 % 100 / 10 + fat % 100000 % 10000 % 1000 % 100 % 10;
    }
    else
    {
        return fat / 1000000 + fat % 1000000 / 100000 + fat % 1000000 % 100000 / 10000 + fat % 1000000 % 100000 % 10000 / 1000 + fat % 1000000 % 100000 % 10000 % 1000 / 100 + fat % 1000000 % 100000 % 10000 % 1000 % 100 / 10 + fat % 1000000 % 100000 % 10000 % 1000 % 100 % 10;
    }
}

int fatorial(int numero)
{
    if (numero <= 1)
    {
        return 1;
    }
    else
    {
        return numero * fatorial(numero - 1);
    }
}

int main()
{
    int n;
    char resp;
    do
    {
        do
        {
            system("clear");
            printf("Digite um valor para N: ");
            scanf("%d", &n);
            getchar();
        } while (n > 10);
        
        // printf("fat de %d eh: %d\n", n, fatorial(n));
        printf("A soma dos algarismos de %d! e: %d", n, somaFat(fatorial(n)));

        printf("\n\nDeseja testar com outros valores? (s) - sim | (n) - nao: ");
        scanf("%c", &resp);
    } while (resp == 's');
    system("clear");
}