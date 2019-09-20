// 4 - Leia uma string (3 caracteres) via teclado que pode assumir os valores seg,
//     ter, qua, qui, sex, sab, dom, e imprima as seguintes mensagens, respectivamente:
//     segunda-feira, terca-feira, quarta-feira, quinta-feira, sexta-feira, sabado e
//     domingo. Utilize o comando switch - case.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char resp;
    char dia[3];
    int numeroDia;
    do
    {
        printf("Digite os primeiros tres caracteres do dia da semana: ");
        scanf("%s", &dia);
        getchar();

        if (strcmp(dia, "seg") == 0)
            numeroDia = 1;
        if (strcmp(dia, "ter") == 0)
            numeroDia = 2;
        if (strcmp(dia, "qua") == 0)
            numeroDia = 3;
        if (strcmp(dia, "qui") == 0)
            numeroDia = 4;
        if (strcmp(dia, "sex") == 0)
            numeroDia = 5;
        if (strcmp(dia, "sab") == 0)
            numeroDia = 6;
        if (strcmp(dia, "dom") == 0)
            numeroDia = 0;

        switch (numeroDia)
        {
        case 0:
            printf("Domingo");
            break;
        case 1:
            printf("Segunda-Feira");
            break;
        case 2:
            printf("Terca-Feira");
            break;
        case 3:
            printf("Quarta-Feira");
            break;
        case 4:
            printf("Quinta-Feira");
            break;
        case 5:
            printf("Sexta-Feira");
            break;
        case 6:
            printf("Sabado");
            break;

        default:
            printf("Dia invalido");
            break;
        }
        printf("\nDeseja testar com outros valores? (s) - sim | (n) - nao: ");
        scanf("%c", &resp);
    } while (resp == 's');
    system("clear");
}