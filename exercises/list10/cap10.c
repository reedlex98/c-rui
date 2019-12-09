#define ex2
#include <stdio.h>
#include <stdlib.h>

#ifdef ex1

/*
1 - Fa�a um programa para:
    1 - criar/abrir um arquivo texto de nome �arq.txt�,
    2 - receba via teclado diversos caracteres (um por vezes)e armazene nesse 
        arquivo. O caracter '0' finaliza a entrada de dados. 
    3 - abra o arquivo. Leia e imprima na tela todos os caracteres armazenados.
*/

void main()
{
    char resp;

    do
    {
        FILE *p;
        char ch = 1, s[60];
        int qtd = 0;

        if ((p = fopen("arq.txt", "w")) == NULL)
        {
            printf("erro na abertura do arquivo \n");
            exit(0);
        }

        for (;;)
        {
            if (ch == 48)
            {
                break;
            }
            printf("Digite um caracter (ou 0 para parar): ");
            scanf("%c", &ch);
            getchar();

            fputc(ch, p);
            qtd = qtd + 1;
        }

        fclose(p);

        printf("Pressione alguma tecla para continuar...");
        getchar();

        if ((p = fopen("arq.txt", "r")) == NULL)
        {
            printf("erro na abertura do arquivo \n");
            exit(0);
        }

        fgets(s, 60, p);
        printf("Esses foram os caracteres gravados no arquivos: %s", s);

        printf("\n\nDesejas sair do programa? (s) - sim\n\n");
        resp = getchar();
        getchar();
    } while(resp != 115);
}

#endif

#ifdef ex2

#endif