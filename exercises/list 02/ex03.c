// 3 - Resecreva o programa do execicio anterior agora utilizando o comando switch.
//     Conte o n. de tentativas e imprima o resultado no video.

#include <stdio.h>

int main()
{
    char resposta;
    unsigned int limiteInferior = 1, limiteSuperior = 99, valor;
    printf("Pense num número...\n");
    do
    {
        valor = (limiteSuperior + limiteInferior) / 2;
        printf("[Responda com (>), (<) ou (=)] Ele é maior, menor ou igual a %d? \n",  valor); 
        scanf("%c", &resposta);
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