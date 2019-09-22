
#include <stdio.h>
#include <stdlib.h>

int main()
{

    char resp;
    do
    {
        printf("\n\nDeseja testar com outros valores? (s) - sim | (n) - nao: ");
        scanf("%c", &resp);
    } while (resp == 's');
    system("clear");
}