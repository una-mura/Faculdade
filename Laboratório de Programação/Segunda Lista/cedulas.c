#include <stdio.h>

void bankNotes(int);

int main() {

    unsigned int num;
    
    do scanf("%d", &num);
    while (num > 1000000);

    printf("%d\n", num);
    
    bankNotes(num);

    return 0;
}

void bankNotes(int money) {

    int notes[7] =  {100, 50, 20, 10, 5, 2, 1};
    int count, i;

    for (i = 0; i < 7; i++) {
        
        count = 0;

        while (money >= notes[i]) {
            money = money - notes[i];
            count++;
        }

        printf("%d nota(s) de R$ %d,00\n", count, notes[i]);
    }
}
