// 5 - Escreva um programa que receba um vetor e o decomponha em dois outros vetores,
//     um contendo as componentes de ordem �mpar e o outro contendo as componentes
//     de ordem par. Por exemplo, se o vetor dado for v = {3, 5, 6, 8, 1, 4, 2, 3, 7},
//     o programa deve gerar os vetores u = {3, 6, 1, 2, 7} e w = {5, 8, 4, 3}.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char resp;
    do
    {
        system("clear");
        int v[10], u[10], w[10], i, qtPar = 0, qtImpar = 0;

        for (i = 0; i < 10; i++)
        {
            printf("Digite um numero inteiro: ");
            scanf("%d", &v[i]);
            getchar();
            if (v[i] % 2 == 0)
            {
                u[qtPar] = v[i];
                qtPar++;
                continue;
            }
            w[qtImpar] = v[i];
            qtImpar++;
        }
        system("clear");
        if (qtImpar == 0)
        {
            printf("\n Dos valores digitados, nenhum eh impar...\n");
        }
        else
        {
            printf("Valores impares digitados: \n");
            for (i = 0; i < qtImpar; i++)
            {
                printf("w[%d] : %d\n", i, w[i]);
            }
        }

        if (qtPar == 0)
        {
            printf("\nDos valores digitados, nenhum eh par...\n");
        }
        else
        {
            printf("Valores pares digitados: \n");
            for (i = 0; i < qtPar; i++)
            {
                printf("u[%d] : %d\n", i, u[i]);
            }
        }

        printf("\nDeseja testar com outros valores? (s) - sim | (n) - nao: ");
        scanf("%c", &resp);
    } while (resp == 's');
}