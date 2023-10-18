#include <stdio.h>

int main()
{
    // Váriaveis
    double a, b, media;

    //Entrada
    printf("Nota 1:");
    scanf("%lf", &a);

    printf("Nota 2:");
    scanf("%lf", &b);

    //Processamento
    media = ((a*3.5) + (b*7.5)) / 11;

    //Saída
    printf("MEDIA = %.5lf\n", media);


    
    
    return 0;
}