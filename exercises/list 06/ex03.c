#include <stdio.h>
#include <stdlib.h>

void main(){
    float div,n1, n2, soma, sub, mult;

    while(1){
        system("clear");

        printf("Digite o primeiro numero: ");
        scanf("%f", &n1);
        getchar();
        printf("Digite o segundo numero: ");
        scanf("%f", &n2);
        getchar();
        
        soma = sub = div = mult = n1;
        
        soma += n2; 
        
        sub -= n2; 
        
        mult *= n2; 
        
        div /= n2; 
        
        printf("\n%.2f + %.2f = %.2f\n%.2f - %.2f = %.2f\n%.2f * %.2f = %.2f\n%.2f / %.2f = %.2f\n", n1, n2, soma, n1, n2, sub, n1, n2, mult, n1, n2, div);
        
        return;
    }
}