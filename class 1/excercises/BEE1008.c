#include <stdio.h>

int main()  {
    
    //Váriaveis
    int numero, horas; 
    float valorph, salario;

    //Entrada
    printf("Número do funcionario:");
    scanf("%d", &numero);

    printf("Horas Trabalhadas:");
    scanf("%d", &horas);

    printf("Valor que o funcionário recebe por hora:");
    scanf("%f", &valorph);

    //Processamento
    salario = horas * valorph;

    //Saída
    printf ("NUMBER = %d\n", numero);
    printf ("SALARY = U$ %.2f\n", salario);
    


    
    return 0;
}
