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
    int x;
    float m;
    float b;

    for (i = 0; i < n; i++) {
        x = i;
        soma_x += x;
        soma_y += numeros[i];
        soma_xy += x * numeros[i];
        soma_x_quadrado += x * x;
    }

    m = (float)(n * soma_xy - soma_x * soma_y) / (float)(n * soma_x_quadrado - soma_x * soma_x);
    b = (float)(soma_y - m * soma_x) / n;

    printf("y = n*x + b\n");
    printf("y = %.2f*x + %.2f\n", m, b);

    return 0;
}
