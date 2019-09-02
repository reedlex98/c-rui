
// 3 - Acrescente ao exercicio anterior mais uma linha. Receba via teclado os valores
//     sem sinal char, int e long int e escrevendo nas coluna 10, 30 e 50.

#include <stdio.h>

int main(){
    short s;
    long l;
    int i;
    float f;
    double d;
    char c;

    unsigned char uc;
    unsigned int ui;
    unsigned long ul;

    printf("Insert a value to short, long, int, float, double and char variables: \n");
    scanf("%hd %ld %d %g %lg %c", &s,&l, &i, &f, &d, &c);

    printf("\nInsert a value to UNSIGNED char, int and long variables: \n");
    scanf("%u %u %lu", &uc,&ui, &ul);

    printf("\n        10        20        30        40        50        60\n");
    printf(  "12345678901234567890123456789012345678901234567890123456789012345\n");
    printf(  "    short               long                int\n");
    printf(  "              float               double              char\n");
    printf(  "        unsignedchar        unsignedint         unsignedlong\n");

    printf("    %-6hd              %-11ld         %-6d\n", s, l, i);
    printf("              %-8g            %-9g           %-4c\n", f,d,c);
    printf("        %-3u                 %-5u               %-10lu\n", uc,ui,ul);
}