// 7 - Faca um programa que leia uma palavra (maximo de 50 letras) e some 1 no valor
//     ASCII de cada caractere da palavra. Na sua funcao main(), imprima a string
//     resultante.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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