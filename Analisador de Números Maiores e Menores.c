#include <stdio.h>

int main() {
    int numero1, numero2;

    printf("Digite o primeiro número: ");
    scanf("%d", &numero1);

    printf("Digite o segundo número: ");
    scanf("%d", &numero2);

    if (numero1 > numero2) {
        printf("%d é maior que %d\n", numero1, numero2);
    } else if (numero1 < numero2) {
        printf("%d é menor que %d\n", numero1, numero2);
    } else {
        printf("%d e %d são números iguais\n", numero1, numero2);
    }

    return 0;
}