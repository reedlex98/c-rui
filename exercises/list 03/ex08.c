
// 8 - Leia uma matriz 5 x 5. Leia tambem um valor X. O programa dever fazer a busca
//     desse valor na matriz e, ao final escrever a localizacao (linha e coluna) ou
//     uma mensagem de �nao encontrado�.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char resp;
    do
    {
        int mat[5][5], i, j, query, qtResults = 0;
        system("clear");
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 5; j++)
            {
                printf("Digite um valor para a posicao [%d][%d] da matriz: ", i, j);
                scanf("%d", &mat[i][j]);
                getchar();
            }
        }

        system("clear");
        printf("Digite um valor que deseja pesquisar na matriz: ");
        scanf("%d", &query);
        getchar();

        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 5; j++)
            {
                if (mat[i][j] == query)
                {
                    printf("Valor %d foi encontrado na posicao [%d][%d]\n", query, i, j);
                    qtResults++;
                }
            }
        }

        if (qtResults == 0)
        {
            printf("Valor digitado não foi encontrado na Matriz\n");
        }

        printf("\nDeseja testar com outros valores? (s) - sim | (n) - nao: ");
        scanf("%c", &resp);

    } while (resp == 's');
}