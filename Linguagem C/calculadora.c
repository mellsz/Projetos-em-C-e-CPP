#include <stdio.h>
#include <stdlib.h>

int main() {
    float numb1, numb2, resultado;
    int opcao;

    do {
        printf("\n======= CALCULADORA =======\n");
        printf("1 - Somar\n");
        printf("2 - Subtrair\n");
        printf("3 - Multiplicar\n");
        printf("4 - Dividir\n");
        printf("0 - Sair\n");
        printf("===========================\n");

        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 4) {
            printf("Escolha um numero: ");
            scanf("%f", &numb1);
            printf("Escolha outro numero: ");
            scanf("%f", &numb2);
        }

        switch (opcao) {
            case 1:
                resultado = numb1 + numb2;
                printf("Resultado: %g\n", resultado);
                break;

            case 2:
                resultado = numb1 - numb2;
                printf("Resultado: %g\n", resultado);
                break;

            case 3:
                resultado = numb1 * numb2;
                printf("Resultado: %g\n", resultado);
                break;

            case 4:
                if (numb2 == 0) {
                    printf("Erro: Nao divide por zero!\n");
                } else {
                    resultado = numb1 / numb2;
                    printf("Resultado: %g\n", resultado);
                }
                break;

            case 0:
                printf("Saindo\n");
                break;

            default:
                printf("Opcao Invalida\n");
        }

    } while (opcao != 0);

    return 0;
}