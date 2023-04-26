#include <stdio.h>

void subbalance1() {
    int tiempo;
	printf("Estas viendo el balance energetico nacional\n");
	printf("Elegir si lo quieres ver anualmente(1) o mensualmente(solo 2023)(2)\n");
	scanf("%i",&tiempo);
	switch(tiempo){
		case 1:
			printf("Hola\n");
			break;
		case 2:
			printf("Adios\n");
			break;

	}
}

void opcion1() {
    int subbalance, dato;
	printf("Has elegido la opcion del balance energetico\n");
	printf("El balance energetico nos habla sobre el porcentaje de energias\n");
	printf("renovables y no renovables, y desglosa el tipo de energias que forman cada uno.");
	printf("Selecciona si quieres consultar el reparto de energias (1), o verlo por comunidades autonomas (2)\n");
	scanf("%i",&dato);
	if(dato==1)
	{
		printf("Elige entre ver el reparto Nacional (1), Peninsular (2), Baleares(3), Canarias(4), Ceuta(5) o Melilla(6)");
		scanf("%i",&subbalance);
		switch(subbalance)
		{
			case 1:
				subbalance1();
				break;


		}
	}
	else
	{
		printf("adios\n");//explicacion y fichero sobre reparto por comunidades autonomas.
	}
}

void opcion2() {
    int subdemanda,dato;
	printf("Has elegido la opcion de la demanda\n");
    printf("La demanda electrica nos habla del uso de la electricidad que se necesita cada dia en Espanya\n");
    printf("Selecciona si quieres consultar la demanda b.c.(1), las perdidas de transportes(2), o la demanda final(3)\n");
    scanf("%i",&dato);
    if(dato==1)
    {
    	printf("hola\n");//explicacion y fichero sobre demanda b.c.
	}
	if(dato==2)
	{
		printf("adios\n"); //explicacion y fichero sobre perdidas de transporte
	}
	if(dato==3)
	{
		printf("joder\n");//explicacion y fichero sobre demanda final
	}


}

void opcion3() {
    printf("Has elegido la opcion de generacion\n");
    printf("La generacion nos habla sobre los porcentajes de generacion de energias, las emisiones y\n");
    printf("el factor de emision de CO2, y la potencia instalada nacional\n");

}

void opcion4() {
    printf("Has elegido la opcion 4\n");
}

void opcion5() {
    printf("Has elegido la opcion 5\n");
}

void opcion6() {
    printf("Has elegido la opcion 6\n");
}
void opcion7() {
	printf("Para salir, pulse cualquier tecla\n");
}


void mostrarMenu() {
    printf("Menu:\n");
    printf("1. Balances\n");
    printf("2. Demanda\n");
    printf("3. Generacion\n");
    printf("4. Intercambios\n");
    printf("5. Transportes\n");
    printf("6. Mercados\n");
    printf("7. Salir\n");
    printf("Seleccione una opcion (1-7): ");
}

int main() {
    int opcion;

    do {
        mostrarMenu();
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                opcion1();
                break;
            case 2:
                opcion2();
                break;
            case 3:
                opcion3();
                break;
            case 4:
                opcion4();
                break;
            case 5:
                opcion5();
                break;
            case 6:
            	opcion6();
            	break;
            case 7:
            	opcion7();
            		break;
            default:
                printf("Opcion invalida\n");
                break;

        }
    } while (opcion != 7);

    return 0;
}


