#include <stdio.h>
#include <locale.h>

#define TAMANHO 5

int main() {
    setlocale(LC_ALL, "");

    int numeros[TAMANHO], i;
    for(i = 0; i < TAMANHO; i++) {
        numeros[i] = 1;
    }

    for(i = 0; i < TAMANHO; i++) {
        printf("diga um número: ");
        scanf("%i", &numeros[i]);
        if(numeros[i] <= 0) {
            numeros[i] = 1;
            break;
        }
    }

    int n = TAMANHO;
    int soma_x = 0;
    int soma_y = 0;
    int soma_xy = 0;
    int soma_x_quadrado = 0;
    float m;
    float b;

    // Calcular as somas
    for (int i = 0; i < n; i++) {
        int x = i;
        soma_x += x;
        soma_y += numeros[i];
        soma_xy += x * numeros[i];
        soma_x_quadrado += x * x;
    }

    // Calcular os valores m e b
    m = (n * soma_xy - soma_x * soma_y) / (n * soma_x_quadrado - soma_x * soma_x);
    b = (soma_y - m * soma_x) / n;

    // Imprimir os valores de m e b
    // printf("m = %.2f\n", m);
    // printf("b = %.2f\n", b);

    // for(i = 0; i < 30; i++) {
    //     printf("numeros[%i] = %i\n", i, numeros[i]);
    // }

    printf("y = n*x + b\n");
    printf("y = %.2lf*x + %.2lf\n", m, b);

    // printf("Olá Mundo!\n");
    return 0;
}
// [55, 64, 64, 58, 28, 45, 56, 72, 55, 37, 37, 30, 42, 56, 21, 78, 41, 39, 93, 66, 56, 44, 61, 59, 94, 72, 96, 69, 85, 50]
