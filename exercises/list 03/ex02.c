// 2 - Um vetor � pal�ndromo se ele n�o se altera quando as posi��es dos componentes
//     s�o invertidos. Por exemplo, o vetor v = {1, 3, 5, 2, 2, 5, 3, 1} � pal�ndromo.
//     Escreva um programa que verifique se um vetor � pal�ndromo. Receba o vetor
//     via teclado (tamanho 10)
#include <stdio.h>
#include <stdlib.h>

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
