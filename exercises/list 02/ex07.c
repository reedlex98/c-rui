
// 7 - Leia a distancia em Km e a quantidade de litros de gasolina consumidos
//     por um carro em um percurso, calcule o consumo em Km/l e escreva uma
//     mensagem de acordo com a tabela abaixo:
//     CONSUMO (Km/l) MENSAGEM
//     menor que 8    Venda o carro!
//     entre 8 e 14   Economico!
//     maior que 14   Super economico!

#include <stdio.h>

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