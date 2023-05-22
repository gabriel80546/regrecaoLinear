#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    int numeros[30], i;
    for(i = 0; i < 30; i++) {
        numeros[i] = 0;
    }
    for(i = 0; i < 30; i++) {
        printf("diga um número: ");
        scanf("%i", &numeros[i]);
        if(numeros[i] <= 0) {
            break;
        }
    }

    for(i = 0; i < 30; i++) {
        printf("numeros[%i] = %i\n", i, numeros[i]);
    }
    printf("Olá Mundo!\n");
    return 0;
}