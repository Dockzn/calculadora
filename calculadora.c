#include <stdio.h>
#include <stdbool.h>

int main(void) {
    
    while(true){
    printf("Calculadora:\n");
    printf("1-Soma\n");
    printf("2-Subtracao\n");
    printf("3-Multiplicacao\n");
    printf("4-Divisao\n");
    printf("0-Saida\n");

    int opcao;
    printf("Opcao: ");
    scanf("%d", &opcao);
    printf("\n");

    if (opcao == 0) {
        printf("Programa encerrado.\n");
        return 0;
    }

    int valor1;
    printf("Primeiro valor: ");
    scanf("%d", &valor1);

    int valor2;
    printf("Segundo valor: ");
    scanf("%d", &valor2);

    switch (opcao) {
        case 1:
            printf("Resultado: %d\n", valor1 + valor2);
            printf("\n");
            printf("\n");
            break;
        case 2:
            printf("Resultado: %d\n", valor1 - valor2);
            printf("\n");
            printf("\n");
            break;
        case 3:
            printf("Resultado: %d\n", valor1 * valor2);
            printf("\n");
            printf("\n");
            break;
        case 4:
            if (valor2 == 0) {
                printf("Erro: Divisao por zero.\n");
                printf("\n");
                printf("\n");
            } else {
                float resultado;
                resultado = (float) valor1 /  valor2;
                printf("Resultado: %.2f\n", resultado);
                printf("\n");
                printf("\n");
            }
            break;
        default:
            printf("Opcao invalida.\n");
            printf("\n");
            printf("\n");
        }
    }

    return 0;
}
