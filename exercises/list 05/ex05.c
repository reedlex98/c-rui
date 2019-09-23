/* 5 - Escreva um programa que receba na funcao main() 2 strings de ate' 10 caracteres.
//     Escreva uma funcao que compare estas 2 strings e retorne se sao IGUAIS 1 ou 
//     DIFERENTES 0. Se forem DIFERENTES, retorne 2 se a 1. string for maior que a 2.
//     e 3 se a 2. string for maior que a 1.. Declare as strings como variavel global.  
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char string1[10], string2[10];

int comparaString(char primeira[], char segunda[])
{
    if (strlen(primeira) == strlen(segunda))
    {
        for (int i = 0; i < strlen(segunda); i++)
        {
            if (primeira[i] != segunda[i])
            {
                return 0;
            }
        }
    }
    else
    {
        return 0;
    }
    return 1;
}

int maiorString(char primeira[], char segunda[])
{
    if (strlen(primeira) > strlen(segunda))
    {
        return 2;
    }
    if (strlen(primeira) < strlen(segunda))
    {
        return 3;
    }
    return 0;
}

int main()
{
    int comparacao, maiorStr;
    char resp;
    do
    {
        system("clear");
        printf("Digite uma palavra de ate 10 caracteres: ");
        scanf("%s", &string1);
        getchar();

        printf("Digite outra palavra de ate 10 caracteres: ");
        scanf("%s", &string2);
        getchar();

        comparacao = comparaString(string1, string2);
        maiorStr = maiorString(string1, string2);

        if (comparacao == 0)
        {
            printf("%d - As strings sao diferentes\n", comparacao);
            if (maiorStr > 0)
            {
                if (maiorStr == 2)
                {
                    printf("%d - A primeira string e maior que a segunda\n", maiorStr);
                }
                else
                {
                    printf("%d - A segunda string e maior que a primeira\n", maiorStr);
                }
            }
        }
        else
        {
            printf("%d As strings sao iguais\n", comparacao);
        }
        printf("\n\nDeseja testar com outros valores? (s) - sim | (n) - nao: ");
        scanf("%c", &resp);
    } while (resp == 's');
    system("clear");
}