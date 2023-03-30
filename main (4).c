#include <stdio.h>

int main() {
    float nota1, nota2, media;
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    media = (4*nota1 + 6*nota2)/10;
    printf("A media do aluno e: %.2f\n", media);

    if (media >= 0 && media <= 4.9) {
        printf("Conceito final: D\n");
    } else if (media >= 5 && media <= 6.9) {
        printf("Conceito final: C\n");
    } else if (media >= 7 && media <= 8.9) {
        printf("Conceito final: B\n");
    } else if (media >= 9 && media <= 10) {
        printf("Conceito final: A\n");
    } else {
        printf("Media invalida\n");
    }
    return 0;
}