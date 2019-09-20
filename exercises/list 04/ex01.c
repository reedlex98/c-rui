// 1 - Escreva um programa para receber 5 nomes, com at� 7 caracteres, via teclado
//     e imprima-os no video no seguinte formato:

//             10        20        30        40        50
//     12345678901234567890123456789012345678901234567890
//       nome1                                   nome5
//                 nome2               nome4
//                           nome3


#include <stdio.h>
#include <stdlib.h>

int main()
{
    char resp;
    do
    {
        char nomes[5][7]; 
        int i;
        system("clear");

        for (i = 0; i < 5; i++)
        {
            printf("Digite o %do nome: ", i+1);
            scanf("%s",&nomes[i]);
            getchar();
        }
        system("clear");
        printf("        10        20        30        40        50\n");
        printf("12345678901234567890123456789012345678901234567890\n");
        printf("  %-7s                                 %-7s\n", nomes[0], nomes[4]);
        printf("            %-7s             %-7s\n", nomes[1], nomes[3]);
        printf("                      %-7s\n", nomes[2]);
        printf("\n\nDeseja testar com outros valores? (s) - sim | (n) - nao: ");
        scanf("%c", &resp);
    } while (resp == 's');
    system("clear");
}