// 8 - Escreva um programa que calcula o comprimento de uma string recebida via 
//     teclado.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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