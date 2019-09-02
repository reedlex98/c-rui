// 6 - Escreva um programa que receba via teclado um tempo em segundos e converta um
//     para horas, minutos e segundos. 
//     Ex.: recebe 3850 segundos que converte para 1h 4min 10s.

#include <stdio.h>

int main(){
    int seconds;
    printf("Insert the current time in seconds: \n");
    scanf("%d",&seconds);

    printf("Time in hh:min:ss format => %dh : %dmin : %ds\n", seconds/3600, seconds%3600 / 60, seconds % 3600 % 60 );
}