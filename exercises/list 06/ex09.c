// 9 - Escreva um programa para determinar o dia da semana de uma determinada
//     data (dia, mes e ano).

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int d, m, y, k;

    while (1)
    {
        system("clear");

        printf("Entre com dia, mes e o ano qualquer, nessa mesma ordem: \n");
        scanf("%d %d %d", &d, &m, &y);
        getchar();

        system("clear");

        if (m == 1)
        {
            m = 13;
            y = y - 1;
        }
        if (m == 2)
        {
            m = 14;
            y = y - 1;
        }

        k = d + 2 * m + (3 * (m + 1)) / 5 + y + y / 4 - y / 100 + y / 400 + 2;

        if (m == 13)
        {
            m = 1;
            y = y + 1;
        }
        if (m == 14)
        {
            m = 2;
            y = y + 1;
        }

        printf("O dia da semana referente a data %2d/%2d/%4d eh ", d, m, y);
        switch (k % 7)
        {
        case 1:
            printf("Domingo\n");
            break;
        case 2:
            printf("Segunda-feira\n");
            break;
        case 3:
            printf("Terca-feira\n");
            break;
        case 4:
            printf("Quarta-feira\n");
            break;
        case 5:
            printf("Quinta-feira\n");
            break;
        case 6:
            printf("Sexta-feira\n");
            break;
        case 0:
            printf("Sabado\n");
            break;
        }
        return;
    }
}