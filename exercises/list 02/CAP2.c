#define ex1
#include <stdio.h>
#include <stdlib.h>

#ifdef ex1

int main()
{
    int value;
    unsigned int  count = 0, isPositive = 1,total = 0;
    do
    {
        printf("Escreva um numero positivo: ");
        scanf("%d", &value);
        if (value >= 0){
            count = count + 1;
            total = total + value;
        }
        else
            isPositive = 0;
    } while (isPositive == 1);
    printf("Media: %d\n", count,total/count);
}

#endif

#ifdef ex2

int main()
{
    char resposta;
    unsigned int limiteInferior = 1, limiteSuperior = 99, valor;
    printf("Pense num número...\n");
    do
    {
        valor = (limiteSuperior + limiteInferior)/2;
        printf("[Responda com (>), (<) ou (=)] Ele é maior, menor ou igual a %d? \n",  valor); 
        scanf("%c", &resposta);
        if(resposta == '>'){
            limiteInferior = valor;
        } else if (resposta == '<'){
            limiteSuperior = valor;
        }
    } while (resposta!='=');
    
    printf("Numero pensado: %d", valor);
}

#endif

#ifdef ex3

int main()
{
    char resposta;
    unsigned int limiteInferior = 1, limiteSuperior = 99, valor;
    printf("Pense num número...\n");
    do
    {
        valor = (limiteSuperior + limiteInferior) / 2;
        printf("[Responda com (>), (<) ou (=)] Ele é maior, menor ou igual a %d? \n",  valor); 
        scanf("%c", &resposta);char c = 127;
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
        getchar();
        switch (resposta)
        {
            case '>':
                limiteInferior = valor;
                break;
            case '<':
                limiteSuperior = valor;
                break;
            case '=':
                printf("Numero pensado: %d\n", valor);
                break;
        }
    } while (resposta!='=');
    
}

#endif

#ifdef ex4

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

#endif

#ifdef ex5

float proximoInteiro(float numero){
    float i = 0;
    do{
        i = i + 1;
    }while(i <= numero);
    return i;
}

int main(){
    float valor, proximo, fracionario, numeroArredondado;
    printf("Digite um numero: ");
    scanf("%f", &valor);
    proximo = proximoInteiro(valor);
    fracionario = 1 - (proximo - valor);
    if(fracionario > 0.75)
        numeroArredondado = proximo;
    if(fracionario > 0.25 && fracionario < 0.74)
        numeroArredondado = proximo - 0.5;
    if(fracionario < 0.24)
        numeroArredondado = valor - fracionario;
    printf("Numero arredondado: %0.2f\n", numeroArredondado);
}

#endif

#ifdef ex6

float calculaDesconto( unsigned int litros, unsigned int limiteLitros, float valorPorLitro, float desconto1, float desconto2 ){
    if(litros < limiteLitros)
        return (litros*valorPorLitro)*(1-desconto1/100);
    return (litros*valorPorLitro)*(1-desconto2/100);
}

int main(){
    unsigned int litros;
    char tipoCombustivel;
    float descontoGasolinaMenor20 = 4, descontoGasolinaMaior20 = 6, descontoAlcoolMenor20 = 3, descontoAlcoolMaior20 = 5, precoLitroGasolina = 3.88, precoLitroAlcool = 3.18; 

    printf("Informe a quantidade de litros e o tipo do combustivel. (G) - Gasolina (A) - Alcool\n");
    scanf("%u %c", &litros, &tipoCombustivel);
    switch (tipoCombustivel)
    {
        case 'G':
            printf("Preco com desconto: %0.2f\n", calculaDesconto(litros,20,precoLitroGasolina,descontoGasolinaMenor20,descontoGasolinaMaior20));
            break;
        case 'A':
            printf("Preco com desconto: %0.2f\n", calculaDesconto(litros,20,precoLitroAlcool,descontoAlcoolMenor20,descontoAlcoolMaior20));
            break;
        default:
            printf("Erro!\n");
            break;
    }
}

#endif

#ifdef ex7

int main(){
    float kmPorLitros, km, qtLitros;

    printf("Informe a distancia percorrida e em seguida a quantidade de litros consumidos: \n");
    scanf("%f %f", &km, &qtLitros);

    kmPorLitros = kmPorLitros / qtLitros;
    printf("%0.2f", kmPorLitros);

    if(kmPorLitros < 8)
        printf("Venda o carro!\n");
    if(kmPorLitros > 14)
        printf("Economico!\n");
    if(kmPorLitros > 8 && kmPorLitros < 14)
        printf("Super Economico!\n");
}

#endif

#ifdef ex8

int main(){
    float peso, altura, imc; 
    printf("Digite o seu peso: "); scanf("%f", &peso);
    printf("Digite o sua altura: "); scanf("%f", &altura);
    imc = peso / (altura * altura);
    if(imc > 40)
        printf("Obesidade Grau III\n");
    else if(imc > 35)
        printf("Obesidade Grau II\n");
    else if(imc > 30)
        printf("Obesidade Grau I\n");
    else if(imc > 25)
        printf("Peso em excesso\n");
    else if(imc > 18.6)
        printf("Saudavel\n");
    else
        printf("Abaixo do Peso\n");
}

#endif
