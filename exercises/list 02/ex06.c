// 6 - Um posto est� vendendo combust�veis com a seguinte tabela de descontos:
//      �lcool
//          at� 20 litros, desconto de 3% por litro
//          acima de 20 litros, desconto de 5% por litro
//      Gasolina
//           at� 20 litros, desconto de 4% por litro
//           acima de 20 litros, desconto de 6% por litro
//      Escreva um programa que leia o n�mero de litros vendidos e o tipo de
//      combust�vel (codificado da seguinte forma: A-�lcool, G-gasolina), calcule e
//      imprima o valor a ser pago pelo cliente sabendo-se que o pre�o do litro da 
//      gasolina � R$ 3,88 e o pre�o do litro do �lcool � R$ 3,18.

#include <stdio.h>

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