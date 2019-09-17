// 4 - De um modo geral, as liga��es telef�nicas s�o cobradas pelas suas dura��es.
//     O sistema registra os instantes em que a liga��o foi iniciada e conclu�da.
//     Escreva um programa que recebe os dois instantes dados em horas, minutos e
//     segundo e determina o intervalo de tempo (em horas, minutos e segundos)
//     decorrido entre eles.

#include <stdio.h>

int calculaTotalSegundos(int hora, int minuto, int segundo)
{
    return (hora * 3600) + (minuto * 60) + segundo;
}

int main()
{
    int segundosDecorridos, horaInicial, minutoInicial, segundoInicial, totalSegundosInicial, horaFinal, minutoFinal, segundoFinal, totalSegundosFinal;
    printf("Digite as horas, minutos e segundos em que a chamada iniciou: \n");
    scanf("%d %d %d", &horaInicial, &minutoInicial, &segundoInicial);
    printf("Digite as horas, minutos e segundos em que a chamada terminou: \n");
    scanf("%d %d %d", &horaInicial, &minutoInicial, &segundoInicial);
    totalSegundosInicial = calculaTotalSegundos(horaInicial, minutoInicial, segundoInicial);
    totalSegundosFinal = calculaTotalSegundos(horaFinal * 60, minutoFinal, segundoFinal);
    segundosDecorridos = totalSegundosFinal - totalSegundosInicial;
    printf("%d", totalSegundosInicial);
    printf("O tempo decorrido foi: %dh : %dmin : %ds", segundosDecorridos / 3600, segundosDecorridos % 3600 / 60, segundosDecorridos % 3600 % 60);
}