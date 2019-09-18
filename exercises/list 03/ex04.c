// 4 - Defina 2 vetores bidimensionais do tipo inteiro de 2x3. Escreva um programa
//     que recebe os dados via teclado para esses 2 vetores. Usando o operador
//     multiplicacao "*", multiplique os elementos de mesmo indice dos 2 vetores
//     e guarde o resultado num 3. vetor. Imprima na tela o indice, os valores e
//     o resultado dos 6 elementos dos vetores.
#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[2][3], b[2][3], c[6], x, y, count = 0;

    for (x = 0; x < 2; x++){
        for(y = 0; y < 3; y++){
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
    
}