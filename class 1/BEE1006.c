#include <stdio.h>

int main()
{
    // Váriaveis
    double a, b, c, media;

    //Entrada
    printf("Nota 1:");
    scanf("%lf", &a);

    printf("Nota 2:");
    scanf("%lf", &b);

    printf("Nota 3:");
    scanf("%lf", &c);

    //Processamento
    media = ((a*2) + (b*3) + (c*5)) / 10;

    //Saída
    printf("MEDIA = %.1lf\n", media);


    
    
    return 0;
}
