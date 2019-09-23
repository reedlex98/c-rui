
// 6 - Receba 2 numeros inteiros via teclado. Compare utilizando as expressoes
//     abaixo. Imprima no video o resultado (se verdadeiro = 1 se falso = 0)
//     a e b e' recebido via teclado para cada expressao
//         a >= 120 && b < 240    
//         a != 60  || b == 120
//        (a*25) == 100 && (b+10) >= 100
//        ((a + 300)/5) >= 100 || (b - 200) <= 200

#include <stdio.h>
#include <stdlib.h>

void main(){
    int a, b;

    while(1){
        system("clear");
        
        printf("Digite o primeiro numero: ");
        scanf("%d", &a);
        getchar();
        
        printf("Digite o segundo numero: ");
        scanf("%d", &b);
        getchar();

        printf("\n%d >= 120 && %d < 240                       --> %d (verdadeiro (1) falso(0))", a,b, a >= 120 && b < 240 );
        printf("\n%d != 60  || %d == 120                      --> %d (verdadeiro (1) falso(0))", a,b, a != 60  || b == 120 );
        printf("\n(%d*25) == 100 && (%d+10) >= 100            --> %d (verdadeiro (1) falso(0))", a,b, (a*25) == 100 && (b+10) >= 100 );
        printf("\n((%d + 300)/5) >= 100 || (%d - 200) <= 200  --> %d (verdadeiro (1) falso(0))\n", a,b, ((a + 300)/5) >= 100 || (b - 200) <= 200 );
        

        return;
    }
}
