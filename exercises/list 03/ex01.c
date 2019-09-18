
// 1 - Escreva um programa para receber via teclado em vetores 3 int, 3 long,
//     3 unsigned, 3 float e 3 double e imprima-os no video no seguinte formato:

//         10        20        30        40        50
// 12345678901234567890123456789012345678901234567890
//       int                 long                unsigned
//                 float               double
//       int                 long                unsigned
//                 float               double
//       int                 long                unsigned
//                 float               double
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char resp;
    do
    {
        system("clear");
        int i[3], cont;
        long l[3];
        unsigned u[3];
        float f[3];
        double d[3];

        for (cont = 0; cont < 3; cont++)
        {
            printf("Digite um numero inteiro: ");
            scanf("%d", &i[cont]);
            getchar();
        }
        system("clear");

        for (cont = 0; cont < 3; cont++)
        {
            printf("Digite um numero long: ");
            scanf("%ld", &l[cont]);
            getchar();
        }
        system("clear");

        for (cont = 0; cont < 3; cont++)
        {
            printf("Digite um numero unsigned: ");
            scanf("%u", &u[cont]);
            getchar();
        }
        system("clear");

        for (cont = 0; cont < 3; cont++)
        {
            printf("Digite um numero float: ");
            scanf("%f", &f[cont]);
            getchar();
        }
        system("clear");

        for (cont = 0; cont < 3; cont++)
        {
            printf("Digite um numero double: ");
            scanf("%g", &i[cont]);
            getchar();
        }
        system("clear");

        printf("        10        20        30        40        50\n");
        printf("12345678901234567890123456789012345678901234567890\n");
        for (cont = 0; cont < 3; cont++)
        {
            printf("  %-6d          %-11ld         %-5u\n", i[cont], l[cont], u[cont]);
            printf("            %-8g            %-9g\n", f[cont], d[cont]);
        }
        printf("Deseja testar com outros valores? (s) - sim | (n) - nao: ");
        scanf("%c", &resp);
    } while (resp == 's');
}