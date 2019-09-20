// 3 - Receba 2 string de ate 10 caracteres via teclado, compare-as mostrando como
//     resultado se s�o IGUAIS ou DIFERENTES.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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