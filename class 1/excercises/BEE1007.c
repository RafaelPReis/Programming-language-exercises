#include <stdio.h>

int main ()
{
    //Váriaveis
    int a, b, c, d, diff;

    //Entrada
    printf("Valor A, B, C e D:");
    scanf ("%d" "%d" "%d" "%d", &a, &b, &c, &d);

    //Processamento
    diff = (a * b) - (c * d);

    //Saída
    printf("DIFERENCA = %d\n", diff);

    return 0;
}    