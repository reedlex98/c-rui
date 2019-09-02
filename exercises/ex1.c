
// 1 - Escreva um programa e inicialize as variaveis do tipo char, int, short,
//     long, unsigned(char, int, short, long), float e double com seus valores
//     limites e imprima-os no video. Utilize variaveis globais para os valores
//     positivos e locais para os negativos.

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