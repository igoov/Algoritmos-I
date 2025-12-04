#include <stdio.h>

int main (){

    float valor;
    float maior = 0;
    float menor = 0;

    printf("Digite o valor de compra: ");
    scanf("%f", &valor);
    
    if (valor <= 20.00 ) {
        maior = valor * 0.45;
        
        printf("O valor de compra do produto foi: %.2f\nO valor de venda e: %.2f\n", valor, maior);

    } else { 
        menor = valor * 0.30;
        
        printf("O valor de compra do produto foi: %.2f\nO valor de venda e: %.2f\n", valor, menor);

    }
    
    return 0;
}