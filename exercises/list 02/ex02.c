// 2 - Escreva um programa para adivinhar um numero entre 1 e 99 que o usuario
//     pensou. Digite via teclado os simbolos =,> ou < a cada pergunta. Utilize o
//     comando if-else.

#include <stdio.h>

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