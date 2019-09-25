#define ex1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef ex1

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

#endif

#ifdef ex2

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

#endif

#ifdef ex3

int main()
{
    char resp;
    do
    {
        char palavras[2][10];
        int i, j, qtDiff = 0;
        for (i = 0; i < 2; i++)
        {
            printf("Digite a %do palavra: ", i + 1);
            scanf("%s", &palavras[i]);
        }
        system("clear");

        if (strcmp(palavras[0], palavras[1]) == 0)
            printf("As palavras sao iguais\n");
        else
            printf("As palavras sao diferentes\n");
        getchar();

        printf("\nDeseja testar com outros valores? (s) - sim | (n) - nao: ");
        scanf("%c", &resp);

    } while (resp == 's');
    system("clear");
}

#endif

#ifdef ex4

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

#endif

#ifdef ex5

int main()
{
    char resp;
    do
    {
        char caracteres[10];
        int i;

        system("clear");
        printf("Digite uma cadeia de ate 10 caracteres: ");
        scanf("%s", &caracteres);
        getchar();

        for (i = 0; i < 10; i++){
            if(caracteres[i] >= 97 && caracteres[i] <= 122)
                caracteres[i] = caracteres[i] - 32;
        }

        printf("Em caixa alta: %s", caracteres);

        printf("\nDeseja testar com outros valores? (s) - sim | (n) - nao: ");
        scanf("%c", &resp);
    } while (resp == 's');
}

#endif

#ifdef ex6

int main()
{
    char resp;
    do
    {
        char caracteres[10];
        int i;

        system("clear");
        printf("Digite uma cadeia de ate 10 caracteres: ");
        scanf("%s", &caracteres);
        getchar();

        for (i = 0; i < 10; i++){
            if(caracteres[i] >= 65 && caracteres[i] <= 90)
                caracteres[i] = caracteres[i] + 32;
        }

        printf("Em caixa baixa: %s", caracteres);

        printf("\nDeseja testar com outros valores? (s) - sim | (n) - nao: ");
        scanf("%c", &resp);
    } while (resp == 's');
}

#endif

#ifdef ex7

int main()
{
    char resp;
    do
    {
        char palavra[50];
        int i;

        printf("Digite uma palavra de ate 50 caracteres: ");
        scanf("%s", &palavra);
        getchar();

        for (i = 0; i < strlen(palavra); i++)
        {
            palavra[i] = palavra[i] + 1;
        }

        printf("\nCada caracter recebeu acrescimo de 1 em seu valor na tabela ASCII\nResultado: %s", palavra);

        printf("\n\nDeseja testar com outros valores? (s) - sim | (n) - nao: ");
        scanf("%c", &resp);
    } while (resp == 's');
}

#endif

#ifdef ex8

int main()
{
    char resp;
    do
    {
        char stringDigitada[] = {};
        
        system("clear");
        printf("Digite uma sequencia de caracteres: ");
        scanf("%s", &stringDigitada);
        getchar();

        printf("Palavra %s tem o comprimento de %d caracteres", stringDigitada, strlen(stringDigitada));

        printf("\nDeseja testar com outros valores? (s) - sim | (n) - nao: ");
        scanf("%c", &resp);
    } while (resp == 's');
}

#endif
