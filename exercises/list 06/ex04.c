#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n1, n2;
    while (1)
    {
        system("clear");

        printf("Digite o primeiro numero: ");
        scanf("%d", &n1);
        getchar();
        printf("Digite o segundo numero: ");
        scanf("%d", &n2);
        getchar();

        printf("\n%d & %d = %d (em decimal) e %x (em hexadecimal)\n%d | %d = %d (em decimal) e %x (em hexadecimal)\n%d ^ %d = %d (em decimal) e %x (em hexadecimal)\n", n1, n2, n1 & n2, n1, n2, n1 | n2, n1, n2, n1 ^ n2);

        return;
    }
}