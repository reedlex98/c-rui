// 8 - Escreva um programa que calcule o IMC de uma pessoa e mostre sua classificacao
//     conforme tabela abaixo:
//        IMC             Classificacao
//      < 18,5            Abaixo do Peso
//        18,6 - 24,9     Saudavel
//        25,0 - 29,9     Peso em excesso
//        30,0 - 34,9     Obesidade Grau I
//        35,0 - 39,9     Obesidade Grau II(severa)
//      > 40,0            Obesidade Grau III(morbida)
// IMC = Peso / (Altura^2)
#include <stdio.h>

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