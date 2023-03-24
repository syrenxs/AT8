#include <stdio.h>

int main() {
    float peso, altura, imc;

    // solicita o peso e a altura do usuário
    printf("Informe o seu peso em kg: ");
    scanf("%f", &peso);
    printf("Informe a sua altura em metros: ");
    scanf("%f", &altura);

    // calcula o IMC
    imc = peso / (altura * altura);

    // exibe o resultado
    printf("Seu IMC é: %.2f\n", imc);

    // classifica o resultado
    if (imc < 18.5) {
        printf("Você está abaixo do peso.\n");
    } else if (imc < 25) {
        printf("Seu peso está normal.\n");
    } else if (imc < 30) {
        printf("Você está acima do peso.\n");
    } else {
        printf("Você está obeso.\n");
    }

    return 0;
}