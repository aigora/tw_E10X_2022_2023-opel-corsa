#include <stdio.h>
#include <math.h>

int main() {
    FILE *archivo;
    double valor, suma = 0.0, suma_cuadrados = 0.0;
    int n = 0;

    archivo = fopen("C:/Info trabajo/Ficheros archivo/b_a_2019_2020.txt", "r");

    if (archivo == NULL) {
        printf("No se pudo abrir el archivo\n");
        return 1;
    }

    while (fscanf(archivo, "%lf", &valor) != EOF) {
        n++;
        suma += valor;
        suma_cuadrados += valor * valor;
    }

    fclose(archivo);

    if (n > 0) {
        double media = suma / n;
        double varianza = suma_cuadrados / n - media * media;
        double desviacion = sqrt(varianza);

        printf("Media: %lf\n", media);
        printf("Desviacion estandar: %lf\n", desviacion);
    } else {
        printf("El archivo esta vacio\n");
    }

    return 0;
}

