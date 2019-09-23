// 8 - Fa�a um programa receba dois n�meros inteiros e execute as seguintes fun��es:
//     - Verificar se o n�mero digitado � positivo ou negativo. Sendo que o valor de 
//       retorno ser� 1 se positivo, 0 se negativo ou -1 se for igual a 0.
//     - Se os 2 n�meros s�o positivos, retorne a soma dos N n�meros existentes entre 
//       eles.
//     - Se os 2 n�meros s�o negativos, retorne a multiplica��o dos N n�meros existente
//       entre eles.

#include <stdio.h>
#include <stdlib.h>

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