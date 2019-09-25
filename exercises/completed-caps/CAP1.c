#define ex1
#include <stdio.h>
#include <stdlib.h>

#ifdef ex1

char c = 127;
int i = 32767;
short s = 32767;
long l = 2147483647;
unsigned char uc = 255;
unsigned int ui = 65535;
unsigned short us = 65535;
unsigned long ul = 4294967295;
float f = 3.4E+38;
double d = 1.7E+307;

int main()
{
    char nc = -128;
    int ni = -32768;
    short ns = -32768;
    long nl = -2147483648;
    float nf = -3.4E-38;
    double nd = -1.7E-307;
    printf("-- Positive Max Values --\n");
    printf("char: %d\n", c);
    printf("int: %d\n", i);
    printf("short: %hd\n", s);
    printf("long: %ld\n", l);
    printf("float: %g\n", f);
    printf("double: %lg\n", d);
    printf("unsigned char: %u\n", uc);
    printf("unsigned int: %u\n", ui);
    printf("unsigned short: %hu\n", us);
    printf("unsigned long: %lu\n", ul);
    printf("-- Negative Max Values --\n");
    printf("char: %d\n", nc);
    printf("int: %d\n", ni);
    printf("short: %hd\n", ns);
    printf("long: %ld\n", nl);
    printf("float: %g\n", nf);
    printf("double: %lg\n", nd);
}

#endif

#ifdef ex2

int main()
{
    short s;
    long l;
    int i;
    float f;
    double d;
    char c;

    printf("Insert a value to short, long, int, float, double and char variables: \n");
    scanf("%hd %ld %d %g %lg %c", &s, &l, &i, &f, &d, &c);

    printf("\n        10        20        30        40        50        60\n");
    printf("12345678901234567890123456789012345678901234567890123456789012345\n");
    printf("    short               long                int\n");
    printf("              float               double              char\n");

    printf("    %-6hd              %-11ld         %-6d\n", s, l, i);
    printf("              %-8g            %-9g           %-4c\n", f, d, c);
}

#endif

#ifdef ex3

int main()
{
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
    scanf("%hd %ld %d %g %lg %c", &s, &l, &i, &f, &d, &c);

    printf("\nInsert a value to UNSIGNED char, int and long variables: \n");
    scanf("%u %u %lu", &uc, &ui, &ul);

    printf("\n        10        20        30        40        50        60\n");
    printf("12345678901234567890123456789012345678901234567890123456789012345\n");
    printf("    short               long                int\n");
    printf("              float               double              char\n");
    printf("        unsignedchar        unsignedint         unsignedlong\n");

    printf("    %-6hd              %-11ld         %-6d\n", s, l, i);
    printf("              %-8g            %-9g           %-4c\n", f, d, c);
    printf("        %-3u                 %-5u               %-10lu\n", uc, ui, ul);
}

#endif

#ifdef ex4

int main(){
    int a, b;

    printf("Digite um valor para a e b, respectivamente: \n");
    scanf("%d %d", &a, &b);
    printf("Antes da troca, a = %d e b = %d\n", a,b);

    a = a + b; // a = 3 + 4
    b = a - b; // b = 7 - 4
    a = a - b; // a = 7 - 3

    printf("Depois da troca, a = %d e b = %d\n", a,b);
}

#endif

#ifdef ex5

int main(){
    int number, limit;
    printf("Insira o numero e o valor limit: \n");
    scanf("%d %d", &number, &limit);
    printf("Menor multiplo de %d maior que %d. Resultado: %d\n", number, limit, number * (limit/number + 1));
 
}

#endif

#ifdef ex6

int main(){
    int seconds;
    printf("Insert the current time in seconds: \n");
    scanf("%d",&seconds);

    printf("Time in hh:min:ss format => %dh : %dmin : %ds\n", seconds/3600, seconds%3600 / 60, seconds % 3600 % 60 );
}

#endif

#ifdef ex7

int main()
{
    int number;
    printf("Insert a integer number with 3 digits: ");
    scanf("%d", &number);
    printf("Generated number: %d%d%d\n", number % 100 % 10, number % 100 / 10, number / 100);
}

#endif

#ifdef ex8

int main()
{
    int value;
    printf("Insira uma quantidade em dinheiro: ");
    scanf("%d", &value);
    printf("Valor: %d\n", value);
    printf("Notas | Quantidade\n");
    printf("$100  | %d\n", value / 100);
    printf("$50   | %d\n", value % 100 / 50);
    printf("$10   | %d\n", value % 100 % 50 / 10);
    printf("$1    | %d\n", value % 100 % 50 % 10);
}

#endif
