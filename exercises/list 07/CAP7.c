#define ex1

#include <stdlib.h>
#include <stdio.h>
#include <math.h>


#ifdef ex1

struct dados
{
    char c;
    int i;
    long l;
    float f;
    double d;
    unsigned char uc;
    unsigned int ui;
    unsigned long ul;
};

typedef struct dados dados;

void main()
{
    char resp;
    dados dd;
    do
    {
        system("clear");
        printf("Entre com valores para os seguintes campos, nessa mesma ordem: char, int, long, float, double, unsigned char, unsigned int, unsigned long\n");
        scanf("%c %d %ld %f %lf %u %u %lu", &dd.c, &dd.i, &dd.l, &dd.f, &dd.d, &dd.uc, &dd.ui, &dd.ul);
        getchar();
        system("clear");
        printf("        10        20        30        40        50        60        70\n");
        printf("1234567890123456789012345678901234567890123456789012345678901234567890\n");
        printf("     %-4c     %-6d    %-11ld         %-8g            %-9g\n          %-3u                 %-5u               %-10lu\n", dd.c, dd.i, dd.l, dd.f, dd.d, dd.uc, dd.ui, dd.ul);
        getchar();
        system("clear");
        printf("\nDeseja testar com outros valores? (s) - Sim\n");
        scanf("%c", &resp);
        getchar();
        system("clear");
    } while (resp == 's');
}

#endif

#ifdef ex2

struct dadosPessoais
{
    char nome[60];
    char end[60];
    char cidade[60];
    char estado[3];
    int cep;
};

typedef struct dadosPessoais dadosPessoais;

void main()
{
    dadosPessoais dp[4];
    int i;
    char resp;
    do
    {
        for (i = 0; i < 4; i++)
        {
            printf("Entre com os dados da %da pessoa na seguinte ordem: nome, endereço, cidade, estado e cep\n", i + 1);
            scanf("%s %s %s %s %d", &dp[i].nome, &dp[i].end, &dp[i].cidade, &dp[i].estado, &dp[i].cep);
            getchar();
        }
        system("clear");
        for (i = 0; i < 4; i++)
        {
            printf("\n-- Dados da %da pessoa --\n", i + 1);
            printf("\nNome: %s\nEndereco: %s\nCidade: %s\nEstado: %s\nCep: %d\n", dp[i].nome, dp[i].end, dp[i].cidade, dp[i].estado, dp[i].cep);
        }
        printf("\nPressione alguma tecla para continuar\n");
        getchar();
        system("clear");
        printf("Deseja testar com outros valores? (s) - Sim\n");
        scanf("%c", &resp);
        getchar();
        system("clear");
    } while (resp == 's');
}

#endif

#ifdef ex3 // SE COMPILAR UTILIZANDO O GCC, COLOQUE -lm AO FINAL DO COMANDO

struct ponto{
    int x;
    int y;
};

typedef struct ponto ponto;

void main(){
    ponto p;
    char resp;

    do
    {

        system("clear");

        printf("Coordenada X: ");
        scanf("%d", &p.x);
        getchar();
        printf("Coordenada Y: ");
        scanf("%d", &p.y);
        getchar();
        
        system("clear");

        printf( "A distancia entre o ponto P(%d,%d) e a origem (0,0) e: %g", p.x, p.y, sqrt(pow(p.x - 0, 2) + pow(p.y - 0, 2)) );
        printf("\n\nPressione alguma tecla para continuar");
        getchar();

        system("clear");
        printf("Deseja testar com outros valores? (s) - Sim\n");
        scanf("%c", &resp);
        getchar();
        system("clear");

    } while (resp == 's');
    
}
#endif
