// 2 - Escreva um programa que receba na funcao main() 2 valores inteiro. Escreva
//     uma funcao para cada operacoes aritmeticas e passe como parametro os 2
//     valores recebidos na funcao main(). Retorne os resultados usando o comando
//     return e imprima-os no video na funcao main().

#include <stdio.h>
#include <stdlib.h>

int soma(int x, int y);
int subt(int x, int y);
int mult(int x, int y);
float divv(float x, float y);

int main()
{

    char resp;
    do
    {
        system("clear");
        int x, y;
        printf("Digite o valor x: ");
        scanf("%d", &x);
        getchar();

        printf("Digite o valor y: ");
        scanf("%d", &y);
        getchar();

        system("clear");
        printf("--Resultado--\n\n%d + %d = %d\n%d - %d = %d\n%d * %d = %d\n%d / %d = %.2f\n", x, y, soma(x, y), x, y, subt(x, y), x, y, mult(x, y), x, y, divv(x, y));
        printf("\n\nDeseja testar com outros valores? (s) - sim | (n) - nao: ");
        scanf("%c", &resp);
        getchar();
    } while (resp == 's');
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