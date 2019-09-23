#include <stdio.h>
#include <stdlib.h>

void main(){
    int n1, n2, soma, sub, mult;
    float div;

    while(1){
        system("clear");

        printf("Digite o primeiro numero: ");
        scanf("%d", &n1);
        getchar();
        printf("Digite o segundo numero: ");
        scanf("%d", &n2);
        getchar();
        
        soma = sub = div = mult = n1;
        
        soma += n2; 
        
        sub -= n2; 
        
        mult *= n2; 
        
        div /= n2; 
        
        printf("\n%d + %d = %d\n%d - %d = %d\n%d * %d = %d\n%d / %d = %.2f\n", n1, n2, soma, n1, n2, sub, n1, n2, mult, n1, n2, div);
        
        return;
    }
}