#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Inicialitzar el generador de nombres aleatoris amb el temps actual
    srand(time(NULL));

    // Generar un nombre aleatori entre 0 i 99
    int numeroAleatori = rand() % 100;

    // Imprimir el nombre aleatori generat
    printf("Nombre aleatori generat: %d\n", numeroAleatori);

    return 0;
}
