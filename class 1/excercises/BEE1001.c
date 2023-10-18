#include <stdio.h>
 
int main() {
    int a, b, result;
    
    //entrada de dados
    printf("Primeiro Valor:");
    scanf("%d", &a);
    printf("Segundo Valor:");
    scanf("%d", &b);
   
   //processamento 
    result = a + b;
    
    // saída de dados
    printf("X = %d\n", result);
    
 
    return 0;
}