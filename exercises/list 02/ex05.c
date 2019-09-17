// 5 - Escreva um programa que realize arredondamentos de n�meros utilizando a
//     seguinte regra:
//     - se a parte fracionaria for menor ou igual a 0,24 o n. e' arredonda para 0
//     - se a parte fracionaria for maior ou igual a 0,25 e menor ou igual a 0,74 
//       o numero e' arredondado para 0,5
//     - se a parte fracionaria for maior ou igual a 0,75 o numero e' arredondado
//       para o inteiro imediatamente superior

#include <stdio.h>
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