#define ex1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef ex1

int indexOf(char vetor[], char letra);

int main()
{

    char resp, letra, vetor[] = "bdfhjkmoqsuwy";
    int index;
    do
    {
        system("clear");
        printf("Digite um caracter para ser pesquisado no vetor: ");
        scanf("%c", &letra);
        getchar();
        index = indexOf(vetor, letra);
        if (index == 0)
            printf("Caracter nao encontrado no vetor");
        else
            printf("Caracter encontrado na posicao %d do vetor", index);
        
        printf("\n\nDeseja testar com outros valores? (s) - sim | (n) - nao: ");
        scanf("%c", &resp);
        getchar();
    } while (resp == 's');
    system("clear");
}

int indexOf(char vetor[], char letra)
{
    for (int i = 0; i < strlen(vetor); i++)
        if (letra == vetor[i])
            return i;
    return 0;
}

#endif

#ifdef ex2

int soma(int x, int y);
int subt(int x, int y);
int mult(int x, int y);
float divv(float x, float y);

int main()
{

    char resp;
    do
    {
        system("clear");
        int x, y;
        printf("Digite o valor x: ");
        scanf("%d", &x);
        getchar();

        printf("Digite o valor y: ");
        scanf("%d", &y);
        getchar();

        system("clear");
        printf("--Resultado--\n\n%d + %d = %d\n%d - %d = %d\n%d * %d = %d\n%d / %d = %.2f\n", x, y, soma(x, y), x, y, subt(x, y), x, y, mult(x, y), x, y, divv(x, y));
        printf("\n\nDeseja testar com outros valores? (s) - sim | (n) - nao: ");
        scanf("%c", &resp);
        getchar();
    } while (resp == 's');
    system("clear");
}

int soma(int x, int y)
{
    return x + y;
}
int subt(int x, int y)
{
    return x - y;
}
int mult(int x, int y)
{
    return x * y;
}
float divv(float x, float y)
{
    return x / y;
}

#endif

#ifdef ex3

int soma(int x, int y);
int subt(int x, int y);
int mult(int x, int y);
float divv(float x, float y);

int main()
{

    char resp, resp2;
    do
    {
        system("clear");
        int x[] = {}, index=0;
        do
        {
            printf("Digite o %do valor: ", index + 1);
            scanf("%d", &x[index]);
            getchar();
            index++;
            printf("Digite o %do valor: ", index + 1);
            scanf("%d", &x[index]);
            getchar();
            index++;
            system("clear");
            printf("Deseja inserir mais numeros? (s) sim (n) nao => ");
            scanf("%c", &resp2);
            getchar();
        } while (resp2 == 115);

        system("clear");
        for (int i = 1; i < index; i += 2)
        {
            printf("\n--Resultado, posicoes x[%d] e x[%d]--\n\n%d + %d = %d\n%d - %d = %d\n%d * %d = %d\n%d / %d = %.2f\n", i-1, i, x[i - 1], x[i], soma(x[i - 1], x[i]), x[i - 1], x[i], subt(x[i - 1], x[i]), x[i - 1], x[i], mult(x[i - 1], x[i]), x[i - 1], x[i], divv(x[i - 1], x[i]));
        }
        printf("\nDeseja testar com outros valores? (s) - sim | (n) - nao: ");
        scanf("%c", &resp);
        getchar();
    } while (resp == 115);
    system("clear");
}

int soma(int x, int y)
{
    return x + y;
}
int subt(int x, int y)
{
    return x - y;
}
int mult(int x, int y)
{
    return x * y;
}
float divv(float x, float y)
{
    return x / y;
}

#endif

#ifdef ex4

int soma(int x, int y);
int subt(int x, int y);
int mult(int x, int y);
float divv(float x, float y);

int main()
{

    char resp, resp2;
    do
    {
        system("clear");
        int x[] = {}, index=0, opc;
        do
        {
            printf("Digite o %do valor: ", index + 1);
            scanf("%d", &x[index]);
            getchar();
            index++;
            printf("Digite o %do valor: ", index + 1);
            scanf("%d", &x[index]);
            getchar();
            index++;
            system("clear");
            printf("Deseja inserir mais numeros? (s) sim (n) nao => ");
            scanf("%c", &resp2);
            getchar();
        } while (resp2 == 115);

        system("clear");
        for (int i = 1; i < index; i += 2)
        {
            printf("\n-----------------------------------\nPara as posicoes x[%d] e x[%d]\nOperacoes\n1 - Soma\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\nEscolha uma das opcoes acima: ", i-1, i);
            scanf("%d", &opc);
            getchar();
            switch (opc)
            {
            case 1:
                printf("\n%d + %d = %d", x[i-1], x[i], soma(x[i-1], x[i]));
                break;
            case 2:
                printf("\n%d - %d = %d", x[i-1], x[i], subt(x[i-1], x[i]));
                break;
            case 3:
                printf("\n%d * %d = %d", x[i-1], x[i], mult(x[i-1], x[i]));
                break;
            case 4:
                printf("\n%d / %d = %.2f", x[i-1], x[i], divv(x[i-1], x[i]));
                break;
            default:
                printf("Opcao invalida");
                break;
            }
        }
        printf("\nDeseja testar com outros valores? (s) - sim | (n) - nao: ");
        scanf("%c", &resp);
        getchar();
    } while (resp == 115);
    system("clear");
}

int soma(int x, int y)
{
    return x + y;
}
int subt(int x, int y)
{
    return x - y;
}
int mult(int x, int y)
{
    return x * y;
}
float divv(float x, float y)
{
    return x / y;
}

#endif

#ifdef ex5

char string1[10], string2[10];

int comparaString(char primeira[], char segunda[])
{
    if (strlen(primeira) == strlen(segunda))
    {
        for (int i = 0; i < strlen(segunda); i++)
        {
            if (primeira[i] != segunda[i])
            {
                return 0;
            }
        }
    }
    else
    {
        return 0;
    }
    return 1;
}

int maiorString(char primeira[], char segunda[])
{
    if (strlen(primeira) > strlen(segunda))
    {
        return 2;
    }
    if (strlen(primeira) < strlen(segunda))
    {
        return 3;
    }
    return 0;
}

int main()
{
    int comparacao, maiorStr;
    char resp;
    do
    {
        system("clear");
        printf("Digite uma palavra de ate 10 caracteres: ");
        scanf("%s", &string1);
        getchar();

        printf("Digite outra palavra de ate 10 caracteres: ");
        scanf("%s", &string2);
        getchar();

        comparacao = comparaString(string1, string2);
        maiorStr = maiorString(string1, string2);

        if (comparacao == 0)
        {
            printf("%d - As strings sao diferentes\n", comparacao);
            if (maiorStr > 0)
            {
                if (maiorStr == 2)
                {
                    printf("%d - A primeira string e maior que a segunda\n", maiorStr);
                }
                else
                {
                    printf("%d - A segunda string e maior que a primeira\n", maiorStr);
                }
            }
        }
        else
        {
            printf("%d As strings sao iguais\n", comparacao);
        }
        printf("\n\nDeseja testar com outros valores? (s) - sim | (n) - nao: ");
        scanf("%c", &resp);
    } while (resp == 's');
    system("clear");
}

#endif

#ifdef ex6

int somaFat(long fat)
{
    if (fat < 10)
    {
        return fat;
    }
    else if (fat < 100)
    {
        return fat / 10 + fat % 10;
    }
    else if (fat < 1000)
    {
        return fat / 100 + fat % 100 / 10 + fat % 100 % 10;
    }
    else if (fat < 10000)
    {
        return fat / 1000 + fat % 1000 / 100 + fat % 1000 % 100 / 10 + fat % 1000 % 100 % 10;
    }
    else if (fat < 100000)
    {
        return fat / 10000 + fat % 10000 / 1000 + fat % 10000 % 1000 / 100 + fat % 10000 % 1000 % 100 / 10 + fat % 10000 % 1000 % 100 % 10;
    }
    else if (fat < 1000000)
    {
        return fat / 100000 + fat % 100000 / 10000 + fat % 100000 % 10000 / 1000 + fat % 100000 % 10000 % 1000 / 100 + fat % 100000 % 10000 % 1000 % 100 / 10 + fat % 100000 % 10000 % 1000 % 100 % 10;
    }
    else
    {
        return fat / 1000000 + fat % 1000000 / 100000 + fat % 1000000 % 100000 / 10000 + fat % 1000000 % 100000 % 10000 / 1000 + fat % 1000000 % 100000 % 10000 % 1000 / 100 + fat % 1000000 % 100000 % 10000 % 1000 % 100 / 10 + fat % 1000000 % 100000 % 10000 % 1000 % 100 % 10;
    }
}

int fatorial(int numero)
{
    if (numero <= 1)
    {
        return 1;
    }
    else
    {
        return numero * fatorial(numero - 1);
    }
}

int main()
{
    int n;
    char resp;
    do
    {
        do
        {
            system("clear");
            printf("Digite um valor para N: ");
            scanf("%d", &n);
            getchar();
        } while (n > 10);
        
        // printf("fat de %d eh: %d\n", n, fatorial(n));
        printf("A soma dos algarismos de %d! e: %d", n, somaFat(fatorial(n)));

        printf("\n\nDeseja testar com outros valores? (s) - sim | (n) - nao: ");
        scanf("%c", &resp);
    } while (resp == 's');
    system("clear");
}

#endif

#ifdef ex7

float expp( float x, float y){
    float result = x;
    if(y >= 0){
        if( y == 0){
            return 1;
        }
        for (int i = 1; i < y; i++)
        {
            result = result*x;
        }
        return result;
    }else
    {
        result = 1;
        for (int i = 0; i < y*(-1); i++)
        {
            result = result/x;
        }
        return result;
    }
    
}

int main()
{
    int x, y;
    char resp;
    do
    {
        system("clear");
        printf("Digite o valor da base: ");
        scanf("%d", &x);
        getchar();
        printf("Digite o valor do expoente: ");
        scanf("%d", &y);
        getchar();
        printf("%d elevado a %d eh igual a %.2f", x, y, expp(x,y));
        printf("\n\nDeseja testar com outros valores? (s) - sim | (n) - nao: ");
        scanf("%c", &resp);
    } while (resp == 's');
    system("clear");
}

#endif

#ifdef ex8

int verificaSinal(int numero){
    if(numero > 0){
        return 1;
    }
    if(numero < 0){
        return 0;
    }
    return -1;
}
int maiorEntreDois(int num1, int num2){
    if(num1 > num2)
        return num1;
    if(num1 < num2)
        return num2;
    return 0;
}

int menorEntreDois(int num1, int num2){
    if(num1 > num2)
        return num2;
    if(num1 < num2)
        return num1;
    return 0;
}

int somaNoIntervalo(int num1, int num2){
    int menor = menorEntreDois(num1, num2), maior = maiorEntreDois(num1,num2), soma = 0;
    for (int i = menor+1; i < maior; i++)
    {
        soma+=i;
    }
    return soma;
}

int multiplicacaoNoIntervalo(int num1, int num2){
    int menor = menorEntreDois(num1, num2), maior = maiorEntreDois(num1,num2), mult = 1;
    for (int i = menor+1; i < maior; i++)
    {
        mult*=i;
    }
    return mult;
}

int main()
{
    int num1, num2, maior, menor;
    char resp;
    do
    {
        system("clear");
        printf("Digite o primeiro numero: ");
        scanf("%d", &num1);
        getchar();
        printf("Digite o segundo numero: ");
        scanf("%d", &num2);
        getchar();
        maior = maiorEntreDois(num1,num2);
        menor = menorEntreDois(num1,num2);
        if( num1 == num2){
            printf("Os numeros sao iguais...");
        }
        else if(verificaSinal(num1) != verificaSinal(num2))
            printf("Os numeros possuem sinais distintos...");
        else{
            if(verificaSinal(num1) == 1){
                printf("A soma dos numeros no intervalo ]%d,%d[ eh: %d", menor, maior, somaNoIntervalo(num1,num2));
            }else{
                printf("A multiplicacao dos numeros no intervalo ]%d,%d[ eh: %d", menor,maior , multiplicacaoNoIntervalo(num1,num2));
            }
        }
        printf("\n\nDeseja testar com outros valores? (s) - sim | (n) - nao: ");
        scanf("%c", &resp);
    } while (resp == 's');
    system("clear");
}

#endif
