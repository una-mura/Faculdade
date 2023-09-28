#include <stdio.h>

/* 
Your job in this problem is to read a number that is a line of an array, 
an uppercase character, indicating the operation to be performed and all 
elements of a bidimentional array M[12][12]. Then, you have to calculate 
and print the sum or average of all elements within the green area according 
to the case. The following figure illustrates the case when is entered the 
number 2 to the array line, showing all elements that must be considered in the operation. 
*/

#include <stdio.h>

int main() {

    float M[12][12], sum;
    int i, j, col;
    char op;

    sum = 0;

    do scanf("%d", &col);
    while (col < 0 || col > 11);

    do scanf("%c", &op);
    while (op != 'S' && op != 'M');
    
    for (i = 0; i < 12; i++)
        for (j = 0; j < 12; j++)
            scanf("%f", &M[i][j]);

    j = col;
    
    for (i = 0; i < 12; i++)
        sum = sum + M[i][j];

    if (op == 'S')
        printf("%.1f\n", sum);
    else
        printf("%.1f\n", sum / 12);

    return 0;
}