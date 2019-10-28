#define ex5
#include <stdlib.h>
#include <stdio.h>

#ifdef ex1

void main()
{
    char resp;
    do
    {
        char c, *cp;
        int i, *ip;
        long l, *lp;
        unsigned u, *up;
        float f, *fp;
        double d, *dp;
        unsigned long ul, *ulp;
        unsigned char uc, *ucp;

        cp = &c;
        ip = &i;
        lp = &l;
        up = &u;
        fp = &f;
        dp = &d;
        ulp = &ul;
        ucp = &uc;

        system("clear");

        printf("Digite valores referentes aos seguintes tipos, nessa mesma ordem: char, int, long, unsigned, float, double, unsigned long, unsigned char\n");
        scanf("%c", cp);
        getchar();
        scanf("%d %ld %u %f %lf %lu", ip, lp, up, fp, dp, ulp);
        getchar();
        scanf("%u", ucp);
        getchar();
        getchar();
        system("clear");

        printf("        10        20        30        40        50        60\n");
        printf("123456789012345678901234567890123456789012345678901234567890\n");
        printf("    %-6d              %-11ld         %-5u\n              %-8g            %-9g           %-4c\n         %-10ld          %-3u\n", *ip, *lp, *up, *fp, *dp, *cp, *ulp, *ucp);
        printf("\nPressione alguma tecla para continuar...");
        getchar();

        system("clear");
        printf("Deseja continuar no programa? (s) - Sim\n");
        scanf("%c", &resp);
        getchar();

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
    char resp;
    do
    {
        dadosPessoais dp[4], *dpp;
        int i;

        system("clear");

        for (i = 0; i < 4; i++)
        {
            dpp = &dp[i];
            printf("-- Dados da %da pessoa --\n", i + 1);
            printf("Nome: ");
            scanf("%s", &dpp->nome[0]);
            getchar();
            printf("Endereço: ");
            scanf("%s", &dpp->end[0]);
            getchar();
            printf("Cidade: ");
            scanf("%s", &dpp->cidade[0]);
            getchar();
            printf("Estado: ");
            scanf("%s", &dpp->estado[0]);
            getchar();
            printf("Cep: ");
            scanf("%d", &dpp->cep);
            getchar();
            system("clear");
        }

        for (i = 0; i < 4; i++)
        {
            dpp = &dp[i];
            printf("\n-- Dados da %da pessoa --\n", i + 1);
            printf("Nome: %s\nEndereço: %s\nCidade: %s\nEstado: %s\nCep: %d\n", dpp->nome, dpp->end, dpp->cidade, dpp->estado, dpp->cep);
        }

        printf("\nPressione alguma tecla para continuar\n");
        getchar();
        system("clear");

        printf("Deseja continuar no programa? (s) - Sim\n");
        scanf("%c", &resp);
        getchar();
    } while (resp == 's');
}

#endif

#ifdef ex3

void main()
{
    char resp;
    do
    {
        static char vet[] = {'a', 'd', 'f', 'h', 'j', 'l', 'm', 'o', 'q', 's', 'u', 'w', 'y'};
        char crc, *crcp, *vetp;
        int i;
        crcp = &crc;
        system("clear");
        printf("Digite um caracter para compararmos com o vetor {'a', 'd', 'f', 'h', 'j', 'l', 'm', 'o', 'q', 's', 'u', 'w', 'y'}: ");
        scanf("%c", crcp);
        getchar();

        for (i = 0; i < 13; i++)
        {
            vetp = &vet[i];
            if (*vetp == *crcp)
            {
                printf("O caracter %c esta' presente no vetor", *crcp);
                break;
            }
            else if (i == 12)
                printf("O caracter %c nao esta' presente no vetor", *crcp);
        }
        printf("\n\nDeseja continuar no programa? (s) - Sim\n");
        scanf("%c", &resp);
        getchar();
    } while (resp == 's');
}

#endif

#ifdef ex4

int tamanhoString(char a[])
{
    int i = 0;
    for (int j = 0; a[j] != '\0'; j++)
    {
        i++;
    }
    return i;
}

int comparaString(char a[], char b[])
{
    if (tamanhoString(a) != tamanhoString(b))
    {
        return 0;
    }
    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] != b[i])
        {
            return 0;
        }
    }
    return 1;
}

void main()
{
    char resp;
    do
    {
        char palavras[2][11], *palavrasP[2][11];
        int i, cont;

        palavrasP[0][0] = &palavras[0][0];
        palavrasP[1][0] = &palavras[1][0];

        system("clear");

        for (i = 0; i < 2; i++)
        {
            printf("Digite a %da string: ", i + 1);
            scanf("%s", palavrasP[i]);
            getchar();
        }

        if (comparaString(palavrasP[0], palavrasP[1]))
            printf("\nAs string digitadas sao IGUAIS\n");
        else
            printf("\nAs string digitadas sao DIFERENTESS\n");

        printf("\nDeseja executar novamente? (s) - Sim\n");
        scanf("%c", &resp);
        getchar();
    } while (resp == 's');
}

#endif

#ifdef ex5

// 5 - Escreva um programa que receba via teclado numeros inteiros positivos usando
//     ponteiros. Quando o numero digitado for negativo o programa deve parar e calcula
//     a media dos valores digitados e mostrar o resultado.

void main()
{
    char resp;
    do
    {
        int soma = 0, num = 0, qtd = 0, media, *mediaP, *qtdP, *somaP, *numP;

        somaP = &soma;
        numP = &num;
        qtdP = &qtd;

        system("clear");
        do
        {
            printf("Digite um numero, se quiser para digite um numero negativo: ");
            scanf("%d", numP);
            getchar();
            if (*numP >= 0)
            {
                *somaP += *numP;
                *qtdP += 1;
            }
        } while (*numP >= 0);

        system("clear");

        *mediaP = *somaP / *qtdP;
        printf("Media: %d", *mediaP);

        printf("\n\nDeseja executar o programa novamente? (s) - Sim\n");
        scanf("%c", &resp);
    } while (resp == 's');
}

#endif