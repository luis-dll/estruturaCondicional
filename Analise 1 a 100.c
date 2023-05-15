int main() {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero >= 1 && numero <= 100) {
        printf("O número está entrer 1 e 100\n");
    } else {
        printf("O número não está entre 1 e 100\n");
    }

    return 0;
}