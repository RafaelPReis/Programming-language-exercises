#include <stdio.h>
 
int main() {
    int a, b, PROD;
    
    //entrada de dados
    printf("Primeiro Valor:");
    scanf("%d", &a);
    printf("Segundo Valor:");
    scanf("%d", &b);
   
   //processamento 
    PROD = a * b;
    
    // saída de dados
    printf("PROD = %d\n", PROD);
    
 
    return 0;
}