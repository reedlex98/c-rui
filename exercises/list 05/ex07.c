// 7 - Escreva um programa que recebe 2 valores X e Z na fun��o main(). Escreva uma 
//     fun��o que receba por parametro os 2 valores X e Z, calcule e retorne o 
//     resultado de X exponencial Z para o programa principal. 
//     ATENCAO: nao utilize nenhuma funcao pronta de exponenciacao.

#include <stdio.h>
#include <stdlib.h>

float expp( float x, float y){
    float result = x;
    if(y >= 0){
        if( y == 0){
            return 1;
        }
        for (int i = 1; i < y; i++)
        {
            result = result*x;
        }
        return result;
    }else
    {
        result = 1;
        for (int i = 0; i < y*(-1); i++)
        {
            result = result/x;
        }
        return result;
    }
    
}

int main()
{
    int x, y;
    char resp;
    do
    {
        system("clear");
        printf("Digite o valor da base: ");
        scanf("%d", &x);
        getchar();
        printf("Digite o valor do expoente: ");
        scanf("%d", &y);
        getchar();
        printf("%d elevado a %d eh igual a %.2f", x, y, expp(x,y));
        printf("\n\nDeseja testar com outros valores? (s) - sim | (n) - nao: ");
        scanf("%c", &resp);
    } while (resp == 's');
    system("clear");
}