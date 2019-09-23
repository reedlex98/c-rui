// 7 - Escreva um programa que tenha o menu abaixo. F
//    1 - transforma graus Celsius em Fahrenheit e Kelvin
//    2 - transforma graus Fahrenheit e Celsius e Kelvin
//    3 - transforma graus Kelvin e Celsius e Fahrenheit

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int opc;
    float temp;

    while (1)
    {
        system("clear");

        printf("-- Opcoes --\n1 - transforma graus Celsius em Fahrenheit e Kelvin\n2 - transforma graus Fahrenheit e Celsius e Kelvin\n3 - transforma graus Kelvin e Celsius e Fahrenheit\nSelecione uma delas: ");
        scanf("%d", &opc);
        getchar();

        switch (opc)
        {
        case 1:
            printf("\nDigite a temperatura em Celsius: ");
            scanf("%f", &temp);
            getchar();

            printf("\nEm Fahrenheit: %.2f\nEm Kelvin: %.2f\n", 9 / 5 * temp + 32, temp + 273.15);
            break;
        case 2:
            printf("\nDigite a temperatura em Fahrenheit: ");
            scanf("%f", &temp);
            getchar();

            printf("\nEm Celsius: %.2f\nEm Kelvin: %.2f\n", (temp - 32) * (5 / 9), (temp - 32) * (5 / 9) + 273.15);
            break;
        case 3:
            printf("\nDigite a temperatura em Kelvin: ");
            scanf("%f", &temp);
            getchar();

            printf("\nEm Celsius: %.2f\nEm Fahrenheit: %.2f\n", temp - 273.15, (temp - 273.15) * 9 / 5 + 32);
            break;
        default:
            printf("\nOpcao invalida");
            break;
        }

        return;
    }
}