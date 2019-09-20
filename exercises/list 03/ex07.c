
// 7 - Receba via teclado dez valores numericos e ordene por ordem crescente estes
//     valores, guardando-os num vetor. Ordene o valor assim que ele for digitado. 
//     Mostre ao final os valores em ordem.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int vet[10], i, j, aux; 

    for (i = 0; i < 10; i++)
    {
        printf("Digite um valor para posicao [%d] do vetor: ", i);
        scanf("%d", &vet[i]);

        for(j = 0; j <= i; j++ ){
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
        printf("Posicao [%d], valor: %d\n",i, vet[i]);
    }
    
    
}