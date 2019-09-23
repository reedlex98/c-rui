
// 8 - Escreva um programa para determinar a idade de uma pessoa, em anos, meses e
//     dias, recebendo via teclado a data (dia, m�s e ano) do seu nascimento e a 
//     data (dia, m�s e ano) atual.Verifique se a data atual e' anterior a data de
//     nascimento.

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int ndd, nmm, nyy, add, amm, ayy;

    while (1)
    {
        system("clear");

        printf("Entre com dia, mes e o ano em que nasceu, nessa mesma ordem: \n");
        scanf("%d %d %d", &ndd, &nmm, &nyy);
        getchar();

        printf("\nEntre com dia, mes e o ano atuais, nessa mesma ordem: \n");
        scanf("%d %d %d", &add, &amm, &ayy);
        getchar();

        system("clear");

        printf("Voce tem %d anos, %d meses e %d dias de idade\n", ayy - nyy, (amm - nmm) > 0 ? amm - nmm : 12 + amm - nmm, (add - ndd) > 0 ? add - ndd : 31 + add - ndd );

        return;
    }
}