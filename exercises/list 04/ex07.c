
// 7 - Receba via teclado dez valores numericos e ordene por ordem crescente estes
//     valores, guardando-os num vetor. Ordene o valor assim que ele for digitado.
//     Mostre ao final os valores em ordem.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char resp;
    do
    {
        printf("\nDeseja testar com outros valores? (s) - sim | (n) - nao: ");
        scanf("%c", &resp);
    } while (resp == 's');
}