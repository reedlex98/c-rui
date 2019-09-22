// 5 - Receba via teclado uma cadeia de caracteres (10) e converta todos os caracteres 
//     para letras maiusculas. 

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char resp;
    do
    {
        char caracteres[10];
        int i;

        system("clear");
        printf("Digite uma cadeia de ate 10 caracteres: ");
        scanf("%s", &caracteres);
        getchar();

        for (i = 0; i < 10; i++){
            if(caracteres[i] >= 97 && caracteres[i] <= 122)
                caracteres[i] = caracteres[i] - 32;
        }

        printf("Em caixa alta: %s", caracteres);

        printf("\nDeseja testar com outros valores? (s) - sim | (n) - nao: ");
        scanf("%c", &resp);
    } while (resp == 's');
}