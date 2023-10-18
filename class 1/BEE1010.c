#include <stdio.h>
 
int main() {
    //Váriaveis
    int cod, qtd;
    float valor, valort;
    
    //entrada de dados
    printf("Escreva o código da peça, Quantidade de peças e o Valor Unitário da peça:");
    scanf("%d %d %f", &cod, &qtd, &valor);
    
    //Processamento 1
    valort = qtd * valor;
    
    //entrada de dados
    printf("Escreva o código da peça, Quantidade de peças e o Valor Unitário da peça:");
    scanf("%d %d %f", &cod, &qtd, &valor);
    
    //Processamento 2
    valort = valort + qtd * valor;
    
    printf("VALOR A PAGAR: R$ %.2f", valort);
    printf("\n");
    return 0;
}