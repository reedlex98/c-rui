// 3 - Reescreva o programa do exercicio anterior para receber via teclado n
//     valores. Os n valores nao sao definidos previamente.

#include <stdio.h>
#include <stdlib.h>

int soma(int x, int y);
int subt(int x, int y);
int mult(int x, int y);
float divv(float x, float y);

int main()
{

    char resp, resp2;
    do
    {
        system("clear");
        int x[] = {}, index=0;
        do
        {
            printf("Digite o %do valor: ", index + 1);
            scanf("%d", &x[index]);
            getchar();
            index++;
            printf("Digite o %do valor: ", index + 1);
            scanf("%d", &x[index]);
            getchar();
            index++;
            system("clear");
            printf("Deseja inserir mais numeros? (s) sim (n) nao => ");
            scanf("%c", &resp2);
            getchar();
        } while (resp2 == 115);

        system("clear");
        for (int i = 1; i < index; i += 2)
        {
            printf("\n--Resultado, posicoes x[%d] e x[%d]--\n\n%d + %d = %d\n%d - %d = %d\n%d * %d = %d\n%d / %d = %.2f\n", i-1, i, x[i - 1], x[i], soma(x[i - 1], x[i]), x[i - 1], x[i], subt(x[i - 1], x[i]), x[i - 1], x[i], mult(x[i - 1], x[i]), x[i - 1], x[i], divv(x[i - 1], x[i]));
        }
        printf("\nDeseja testar com outros valores? (s) - sim | (n) - nao: ");
        scanf("%c", &resp);
        getchar();
    } while (resp == 115);
    system("clear");
}

int soma(int x, int y)
{
    return x + y;
}
int subt(int x, int y)
{
    return x - y;
}
int mult(int x, int y)
{
    return x * y;
}
float divv(float x, float y)
{
    return x / y;
}