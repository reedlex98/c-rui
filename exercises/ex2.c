// 2 - Escreva um programa que receba dados via teclado para variaveis do tipo short,
//     long, int, float, double e um char e imprima-os no video no seguinte
//     formato:

//              10        20        30        40        50        60
//      12345678901234567890123456789012345678901234567890123456789012345
//          short               long                int
//                    float               double              char
#include <stdio.h>

int main(){
    short s;
    long l;
    int i;
    float f;
    double d;
    char c;

    printf("Insert a value to short, long, int, float, double and char variables: \n");
    scanf("%hd %ld %d %g %lg %c", &s,&l, &i, &f, &d, &c);

    printf("\n        10        20        30        40        50        60\n");
    printf("12345678901234567890123456789012345678901234567890123456789012345\n");
    printf("    short               long                int\n");
    printf("              float               double              char\n");

    printf("    %-6hd              %-11ld         %-6d\n", s, l, i);
    printf("              %-8g            %-9g           %-4c\n", f,d,c);
}