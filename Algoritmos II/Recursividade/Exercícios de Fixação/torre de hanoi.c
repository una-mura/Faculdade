#include <stdio.h>

void moveTorre(int, char, char, char);
void moveDisco(char, char);

int main() {

    moveTorre(3, 'A', 'C', 'B');

    return 0;
}

void moveTorre(int d, char orig, char dest, char aux) {

    if (d > 0) {
        moveTorre(d - 1, orig, aux, dest);
        moveDisco(orig, dest);
        moveTorre(d - 1, aux, dest, orig);
    }
}

void moveDisco(char orig, char dest) {
    printf("Mover %c -> %c \n", orig, dest);
}
