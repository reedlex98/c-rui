#define ex1
#include <stdio.h>
#include <stdlib.h>

#ifdef ex1

int main()
{
    char resp;
    do
    {
        system("clear");
        int i[3], cont;
        long l[3];
        unsigned u[3];
        float f[3];
        double d[3];

        for (cont = 0; cont < 3; cont++)
        {
            printf("Digite um numero inteiro: ");
            scanf("%d", &i[cont]);
            getchar();
        }
        system("clear");

        for (cont = 0; cont < 3; cont++)
        {
            printf("Digite um numero long: ");
            scanf("%ld", &l[cont]);
            getchar();
        }
        system("clear");

        for (cont = 0; cont < 3; cont++)
        {
            printf("Digite um numero unsigned: ");
            scanf("%u", &u[cont]);
            getchar();
        }
        system("clear");

        for (cont = 0; cont < 3; cont++)
        {
            printf("Digite um numero float: ");
            scanf("%f", &f[cont]);
            getchar();
        }
        system("clear");

        for (cont = 0; cont < 3; cont++)
        {
            printf("Digite um numero double: ");
            scanf("%g", &i[cont]);
            getchar();
        }
        system("clear");

        printf("        10        20        30        40        50\n");
        printf("12345678901234567890123456789012345678901234567890\n");
        for (cont = 0; cont < 3; cont++)
        {
            printf("  %-6d          %-11ld         %-5u\n", i[cont], l[cont], u[cont]);
            printf("            %-8g            %-9g\n", f[cont], d[cont]);
        }
        printf("Deseja testar com outros valores? (s) - sim | (n) - nao: ");
        scanf("%c", &resp);
    } while (resp == 's');
}

#endif

#ifdef ex2

void main()
{
    char resp;
    do
    {
        system("clear");
        int v[10], cont, ehPalindromo = 1;
        for (cont = 0; cont < 10; cont++)
        {
            printf("Digite um valor inteiro para a posicao %d do vetor: ", cont);
            scanf("%d", &v[cont]);
        }
        for (cont = 0; cont < 10; cont++)
        {
            if (v[cont] != v[9 - cont])
            {
                ehPalindromo = 0;
            }
        }
        if (ehPalindromo == 1)
            printf("Vetor eh palindromo\n");
        
        else
            printf("Vetor nao eh palindromo\n");
        

        getchar();
        printf("Deseja testar com outros valores? (s) - sim | (n) - nao: ");
        scanf("%c", &resp);

    } while (resp == 's');
}

#endif

#ifdef ex3

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

#endif

#ifdef ex4

int main()
{
    char resp;
    do
    {
        system("clear");
        int a[2][3], b[2][3], c[6], x, y, count = 0;

        for (x = 0; x < 2; x++)
        {
            for (y = 0; y < 3; y++)
            {
                printf("Digite um valor para posicao [%d][%d] do vetor a: ", x, y);
                scanf("%d", &a[x][y]);
                getchar();
                printf("Digite um valor para posicao [%d][%d] do vetor b: ", x, y);
                scanf("%d", &b[x][y]);
                getchar();
                c[count] = a[x][y] * b[x][y];
                count++;
            }
        }
        for (count = 0; count < 6; count++)
        {
            printf("Vetor c, posicao [%d], valor: %d\n", count, c[count]);
        }
        
        printf("Deseja testar com outros valores? (s) - sim | (n) - nao: ");
        scanf("%c", &resp);
    } while (resp == 's');
    
}

#endif

#ifdef ex5

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
            if (i % 2 == 0)
            {
                u[qtPar] = v[i];
                qtPar++;
                continue;
            }
            w[qtImpar] = v[i];
            qtImpar++;
        }
        system("clear");
        printf("Valores de ordem impar: \n");
        for (i = 0; i < qtImpar; i++)
        {
            printf("w[%d] : %d\n", i, w[i]);
        }

        printf("Valores de ordem par: \n");
        for (i = 0; i < qtPar; i++)
        {
            printf("u[%d] : %d\n", i, u[i]);
        }

        printf("\nDeseja testar com outros valores? (s) - sim | (n) - nao: ");
        scanf("%c", &resp);
    } while (resp == 's');
}

#endif

#ifdef ex6

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

#endif

#ifdef ex7

int main()
{
    char resp;
    do
    {
        int vet[10], i, j, aux;
        system("clear");
        for (i = 0; i < 10; i++)
        {
            printf("Digite um valor para posicao [%d] do vetor: ", i);
            scanf("%d", &vet[i]);

            for (j = 0; j <= i; j++)
            {
                if (vet[j] > vet[i])
                {
                    aux = vet[i];
                    vet[i] = vet[j];
                    vet[j] = aux;
                }
            }
        }
        system("clear");
        printf("Vetor organizado: \n");
        for (i = 0; i < 10; i++)
        {
            printf("Posicao [%d], valor: %d\n", i, vet[i]);
        }

        printf("\nDeseja testar com outros valores? (s) - sim | (n) - nao: ");
        scanf("%c", &resp);
    } while (resp == 's');
}

#endif

#ifdef ex8

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

#endif
