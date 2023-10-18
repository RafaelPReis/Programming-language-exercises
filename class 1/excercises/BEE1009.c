#include <stdio.h>

int main()  {
    
    //Váriaveis
    double salario, montante, total;
    char nome;

    //Entrada
    printf("Nome:");
    scanf("%s", &nome);

    printf("Sálario Fixo do vendedor:");
    scanf("%lf", &salario);

    printf("Montante de venda:");
    scanf("%lf", &montante);

    //Processamento
    total = salario + (montante * 0.15);

    //Saída
    printf("TOTAL = R$ %.2lf\n", total);
    
    
    return 0;
}
