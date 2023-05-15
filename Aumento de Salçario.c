#include <stdio.h>

int main() {
    float salario, novoSalario;

    printf("Digite o salário do funcionário: ");
    scanf("%f", &salario);

    if (salario <= 300.00) {
        novoSalario = salario + (salario * 0.5);
    } else {
        novoSalario = salario + (salario * 0.3);
    }

    printf("O valor do novo salário é de: R$ %.2f\n", novoSalario);

    return 0;
}