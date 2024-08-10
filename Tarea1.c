#include <stdio.h>

int main(int argc, char **argv) {
    int numero1, numero2, suma, resta, multiplicacion;
    float division;

    printf("Hello, World!\n");

    printf("Ingrese el primer numero: ");
    scanf("%d", &numero1);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &numero2);

    suma = numero1 + numero2;
    resta = numero1 - numero2;
    multiplicacion = numero1 * numero2;
    division = (float) numero1 / numero2;

    printf("Suma: %d\n", suma);
    printf("Resta: %d\n", resta);
    printf("Multiplicacion: %d\n", multiplicacion);
    printf("Division: %.2f\n", division);

    return 0;
}