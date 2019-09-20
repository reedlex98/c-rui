// 2 - Escreva um programa para receber 3 strings de ate 10 caracteres cada via
//     teclado e imprima-as no video no seguinte formato:
//     (utilize vetores multidimensionais)

//             10        20        30        40        50        60
//     123456789012345678901234567890123456789012345678901234567890
//         string1             string2             string3

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char resp;
    do
    {
        char strings[3][10];
        int i;

        for (i = 0; i < 3; i++)
        {
            printf("Digite a %do palavra: ", i+1);
            scanf("%s", &strings[i]);
            getchar();
        }

        system("clear");

        printf("        10        20        30        40        50        60\n");
        printf("123456789012345678901234567890123456789012345678901234567890\n");
        printf("    %-10s          %-10s          %-10s\n", strings[0], strings[1], strings[2]);
        
        printf("\n\nDeseja testar com outros valores? (s) - sim | (n) - nao: ");
        scanf("%c", &resp);
    } while (resp == 's');
    system("clear");
}