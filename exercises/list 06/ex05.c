#include <stdio.h>
#include <stdlib.h>

void main(){
    int n, m, d;

    while(1){
        system("clear");
        
        printf("Digite um numero: ");
        scanf("%d", &n);

        m = n << 3;
        d = n >> 3;

        printf("%d * 8 = %d\n%d / 8 = %d (Divisão entre inteiros)\n", n , m, n , d );
        return;
    }
}