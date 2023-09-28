
void mostraInverso(int);

int main() {
    int n;

    printf("insira numero: ");
    scanf("%d", &n);
    mostraInverso(n);

    return 0;
}

void mostraInverso(int num) {
    
    if (num < 10)
        printf("%d\n", num);
    else {
        printf("%d", num % 10);
        mostraInverso(num/10);
    }
}
