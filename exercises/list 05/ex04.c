// 4 - Aproveitando o programa anterior inclua a selecao das operacoes aritmeticas
//     para transforma-lo em uma calculadora. (utilize o comando switch).

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
        int x[] = {}, index=0, opc;
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
            printf("\n-----------------------------------\nPara as posicoes x[%d] e x[%d]\nOperacoes\n1 - Soma\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\nEscolha uma das opcoes acima: ", i-1, i);
            scanf("%d", &opc);
            getchar();
            switch (opc)
            {
            case 1:
                printf("\n%d + %d = %d", x[i-1], x[i], soma(x[i-1], x[i]));
                break;
            case 2:
                printf("\n%d - %d = %d", x[i-1], x[i], subt(x[i-1], x[i]));
                break;
            case 3:
                printf("\n%d * %d = %d", x[i-1], x[i], mult(x[i-1], x[i]));
                break;
            case 4:
                printf("\n%d / %d = %.2f", x[i-1], x[i], divv(x[i-1], x[i]));
                break;
            default:
                printf("Opcao invalida");
                break;
            }
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