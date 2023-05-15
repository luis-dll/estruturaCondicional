int main() {
    float nota;

    printf("Digite a nota do estudante: ");
    scanf("%f", &nota);

    if (nota >= 0.0 && nota <= 2.9) {
        printf("O aluno está reprovado\n");
    } else if (nota >= 3.0 && nota <= 5.9) {
        printf("O aluno está de recuperação\n");
    } else if (nota > 5.9) {
        printf("O aluno está aprovado!\n");
    } else {
        printf("Nota inválida\n");
    }

    return 0;
}