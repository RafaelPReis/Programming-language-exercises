#include <stdio.h>
 
int main() {
    double area, raio, n;
   
    //entrada de dados
    scanf("%lf", &raio);
   
    //processamento
    n = 3.14159;
    area = n * pow(raio,2);
   
    //saída de dados
    printf("A=%.4f\n", area);
 
    return 0;
}