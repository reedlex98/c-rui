// 3 - Escreva um programa declarando um vetor multidimensional de 2x3x3 de n.
//     inteiros e inicialize-o com "0". Receba via teclado novos valores para
//     todos os elementos do vetor e imprima no video estes novos conteudos.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char resp;
    do
    {
        system("clear");
        int v[2][3][3] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, x, y, z;

        for (x = 0; x < 2; x++)
        {
            for (y = 0; y < 3; y++)
            {
                for (z = 0; z < 3; z++)
                {
                    printf("Digite um numero inteiro para a posicao [%d][%d][%d] do vetor: ", x, y, z);
                    scanf("%d", &v[x][y][z]);
                }
            }
        }

        for (x = 0; x < 2; x++)
        {
            for (y = 0; y < 3; y++)
            {
                for (z = 0; z < 3; z++)
                {
                    printf("Vetor, posicao [%d][%d][%d] = %d \n", x, y, z, v[x][y][z]);
                }
            }
        }
       
        getchar();
        printf("Deseja testar com outros valores? (s) - sim | (n) - nao: ");
        scanf("%c", &resp);
    } while (resp == 's');
}