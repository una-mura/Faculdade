#include <stdio.h>

int main(void){
    int c, i, j;
    double m[12][12], soma, media, elementos;
    char o;
    
    soma = 0.0, elementos = 0;

    do {
        scanf(" %c", &o);
    } while (o != 'S' && o != 'M');
    
    for(i = 0; i < 12; i++)
        for(j = 0; j < 12; j++)
            scanf("%lf", &m[i][j]);
            
    for(i = 0; i < 5; i++)
        for(j = i + 1; j < 11 - i; j++) {
            soma += m[i][j];
            elementos++;
        }

    if(o == 'S')
        printf("%.1lf\n", soma);
    else{    
        media = soma / elementos;
        printf("%.1lf\n", media);
    }

    return 0;
}