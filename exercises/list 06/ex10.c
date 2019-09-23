// 10 - Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado
//      possui uma taxa diferente de imposto sobre o produto (MG 7%; SP 12%; RJ 15%;
//      MS 8%). Escreva um programa em que o usuario entre com o valor do produto e o
//      estado destino do produto. O programa deve mostrar o preco final do produto
//      acrescido do imposto do estado em que ele sera vendido. Se o estado digitado
//      nao for valido, mostrar uma mensagem de erro.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    char estado[2];
    float prod;

    while (1)
    {
        system("clear");

        printf("Digite o valor do produto: ");
        scanf("%f", &prod);
        getchar();
        printf("Para qual estado estas a vender? (SP) (MG) (RJ) (MS)\n");
        scanf("%s", &estado);
        getchar();

        if (strcmp(estado, "SP") == 0)
        {
            printf("\nValor final do produto com imposto acrescido de %d%: %.2f\n",12 , prod*1.12);
            return;
        }
        if (strcmp(estado, "MG") == 0)
        {
            printf("\nValor final do produto com imposto acrescido de %d%: %.2f\n",7 , prod*1.07);
            return;
        }
        if (strcmp(estado, "RJ") == 0)
        {
            printf("\nValor final do produto com imposto acrescido de %d%: %.2f\n",15 , prod*1.15);
            return;
        }
        if (strcmp(estado, "MS") == 0)
        {
            printf("\nValor final do produto com imposto acrescido de %d%: %.2f\n",8 , prod*1.08);
            return;
        }
        printf("\nErro, estado invalido...\n");
        return;
    }
}