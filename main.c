/*
 * Este programa imprime a pantalla el valor de pi hasta el lugar
 * de decimales que el usuario pida, con precision de hasta 15 digitos.
 *
 * Autor: Jonathan Nuñez de Caceres.
 * Fecha: 6 de Septiembre del 2018.
 * Correo: A01411277@itesm.mx
 */

#include <stdio.h>
#include <math.h>

int main() {
    // Declaracion de variables.
    int n;
    double pi = 0;

    // Se le pide al usuario el numero de lugares decimales.
    printf("Enter the number of decimal places for pi:");
    scanf("%d", &n);

    // Aqui empieza el ciclo for.
    for (int k = 0; k < n; k++) {
        // Esta es la formula para pi hasta n lugares.
        pi += pow(16, -k) * (4.0 / (8 * k + 1) - 2.0 / (8 * k + 4) - 1.0 / (8 * k + 5) - 1.0 / (8 * k + 6));
    }

    // Se imprime a pantalla pi hasta n lugares.
    printf("Pi to the %d decimal place is: %.*lf", n, n, pi);

    // El programa termina.
    return 0;
}