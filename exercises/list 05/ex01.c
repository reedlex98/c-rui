// 1 - Escreva um programa que receba uma letra via teclado. Escreva uma funcao que
//     pesquise esta letra dentro do vetor abaixo. Imprima o resultado da pesquisa
//     no video na funcao main(). Passe como informacao para a funcao a letra
//     digitada.(utilize o comando return)

//     vetor -> b,d,f,h,j,k,m,o,q,s,u,w,y
// {'b','d','f','h','j','k','m','o','q','s','u','w','y'}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int indexOf(char vetor[], char letra);

int main()
{

    char resp, letra, vetor[] = "bdfhjkmoqsuwy";
    int index;
    do
    {
        system("clear");
        printf("Digite um caracter para ser pesquisado no vetor: ");
        scanf("%c", &letra);
        getchar();
        index = indexOf(vetor, letra);
        if (index == 0)
            printf("Caracter nao encontrado no vetor");
        else
            printf("Caracter encontrado na posicao %d do vetor", index);
        
        printf("\n\nDeseja testar com outros valores? (s) - sim | (n) - nao: ");
        scanf("%c", &resp);
        getchar();
    } while (resp == 's');
    system("clear");
}

int indexOf(char vetor[], char letra)
{
    for (int i = 0; i < strlen(vetor); i++)
        if (letra == vetor[i])
            return i;
    return 0;
}