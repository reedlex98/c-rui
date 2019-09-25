#define ex1

#include <stdio.h>
#include <stdlib.h>

#ifdef ex1

void main(){
    int n1, n2;
    while(1){
        system("clear");

        printf("Digite o primeiro numero: ");
        scanf("%d", &n1);
        getchar();
        printf("Digite o segundo numero: ");
        scanf("%d", &n2);
        getchar();

        printf("\n%d + %d = %d\n%d - %d = %d\n%d * %d = %d\n%d / %d = %.2f\n", n1, n2, n1+n2, n1, n2, n1-n2, n1, n2, n1*n2, n1, n2, (float )n1 / (float)n2);
        
        return;
    }
}

#endif

#ifdef ex2

void main(){
    int n1, n2, soma, sub, mult;
    float div;

    while(1){
        system("clear");

        printf("Digite o primeiro numero: ");
        scanf("%d", &n1);
        getchar();
        printf("Digite o segundo numero: ");
        scanf("%d", &n2);
        getchar();
        
        soma = sub = div = mult = n1;
        
        soma += n2; 
        
        sub -= n2; 
        
        mult *= n2; 
        
        div /= n2; 
        
        printf("\n%d + %d = %d\n%d - %d = %d\n%d * %d = %d\n%d / %d = %.2f\n", n1, n2, soma, n1, n2, sub, n1, n2, mult, n1, n2, div);
        
        return;
    }
}

#endif

#ifdef ex3

void main(){
    float div,n1, n2, soma, sub, mult;

    while(1){
        system("clear");

        printf("Digite o primeiro numero: ");
        scanf("%f", &n1);
        getchar();
        printf("Digite o segundo numero: ");
        scanf("%f", &n2);
        getchar();
        
        soma = sub = div = mult = n1;
        
        soma += n2; 
        
        sub -= n2; 
        
        mult *= n2; 
        
        div /= n2; 
        
        printf("\n%.2f + %.2f = %.2f\n%.2f - %.2f = %.2f\n%.2f * %.2f = %.2f\n%.2f / %.2f = %.2f\n", n1, n2, soma, n1, n2, sub, n1, n2, mult, n1, n2, div);
        
        return;
    }
}

#endif

#ifdef ex4

void main()
{
    int n1, n2;
    while (1)
    {
        system("clear");

        printf("Digite o primeiro numero: ");
        scanf("%d", &n1);
        getchar();
        printf("Digite o segundo numero: ");
        scanf("%d", &n2);
        getchar();

        printf("\n%d & %d = %d (em decimal) e %x (em hexadecimal)\n%d | %d = %d (em decimal) e %x (em hexadecimal)\n%d ^ %d = %d (em decimal) e %x (em hexadecimal)\n", n1, n2, n1 & n2, n1, n2, n1 | n2, n1, n2, n1 ^ n2);

        return;
    }
}

#endif

#ifdef ex5

void main(){
    int n, m, d;

    while(1){
        system("clear");
        
        printf("Digite um numero: ");
        scanf("%d", &n);

        m = n << 3;
        d = n >> 3;

        printf("%d * 8 = %d\n%d / 8 = %d (Divisão entre inteiros)\n", n , m, n , d );
        return;
    }
}

#endif

#ifdef ex6

void main(){
    int a, b;

    while(1){
        system("clear");
        
        printf("Digite o primeiro numero: ");
        scanf("%d", &a);
        getchar();
        
        printf("Digite o segundo numero: ");
        scanf("%d", &b);
        getchar();

        printf("\n%d >= 120 && %d < 240                       --> %d (verdadeiro (1) falso(0))", a,b, a >= 120 && b < 240 );
        printf("\n%d != 60  || %d == 120                      --> %d (verdadeiro (1) falso(0))", a,b, a != 60  || b == 120 );
        printf("\n(%d*25) == 100 && (%d+10) >= 100            --> %d (verdadeiro (1) falso(0))", a,b, (a*25) == 100 && (b+10) >= 100 );
        printf("\n((%d + 300)/5) >= 100 || (%d - 200) <= 200  --> %d (verdadeiro (1) falso(0))\n", a,b, ((a + 300)/5) >= 100 || (b - 200) <= 200 );
        

        return;
    }
}

#endif

#ifdef ex7

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

#endif

#ifdef ex8

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

#endif

#ifdef ex9

void main()
{
    int d, m, y, k;

    while (1)
    {
        system("clear");

        printf("Entre com dia, mes e o ano qualquer, nessa mesma ordem: \n");
        scanf("%d %d %d", &d, &m, &y);
        getchar();

        system("clear");

        if (m == 1)
        {
            m = 13;
            y = y - 1;
        }
        if (m == 2)
        {
            m = 14;
            y = y - 1;
        }

        k = d + 2 * m + (3 * (m + 1)) / 5 + y + y / 4 - y / 100 + y / 400 + 2;

        if (m == 13)
        {
            m = 1;
            y = y + 1;
        }
        if (m == 14)
        {
            m = 2;
            y = y + 1;
        }

        printf("O dia da semana referente a data %2d/%2d/%4d eh ", d, m, y);
        switch (k % 7)
        {
        case 1:
            printf("Domingo\n");
            break;
        case 2:
            printf("Segunda-feira\n");
            break;
        case 3:
            printf("Terca-feira\n");
            break;
        case 4:
            printf("Quarta-feira\n");
            break;
        case 5:
            printf("Quinta-feira\n");
            break;
        case 6:
            printf("Sexta-feira\n");
            break;
        case 0:
            printf("Sabado\n");
            break;
        }
        return;
    }
}

#endif

#ifdef ex10

void main()
{
    char estado[2];
    float prod;

    while (1)
    {
        system("clear");

        printf("Digite o valor do produto: ");
        scanf("%f", &prod);
        getchar();
        printf("Para qual estado estas a vender? (SP) (MG) (RJ) (MS)\n");
        scanf("%s", &estado);
        getchar();

        if (strcmp(estado, "SP") == 0)
        {
            printf("\nValor final do produto com imposto acrescido de %d%: %.2f\n",12 , prod*1.12);
            return;
        }
        if (strcmp(estado, "MG") == 0)
        {
            printf("\nValor final do produto com imposto acrescido de %d%: %.2f\n",7 , prod*1.07);
            return;
        }
        if (strcmp(estado, "RJ") == 0)
        {
            printf("\nValor final do produto com imposto acrescido de %d%: %.2f\n",15 , prod*1.15);
            return;
        }
        if (strcmp(estado, "MS") == 0)
        {
            printf("\nValor final do produto com imposto acrescido de %d%: %.2f\n",8 , prod*1.08);
            return;
        }
        printf("\nErro, estado invalido...\n");
        return;
    }
}

#endif

