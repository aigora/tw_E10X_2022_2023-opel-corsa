#include <stdio.h>

void subbalance1() {
    int tiempo,anyo1,anyo2,mes1,mes2;
	printf("Estas viendo el balance energetico nacional\n");
	printf("Elegir si lo quieres ver anualmente(1) o mensualmente(solo 2023)(2)\n");
	scanf("%i",&tiempo);
	switch(tiempo){
		case 1:
			printf("Introduce los sobre los que quieres ver datos, en el formato YY-YY (Desde 2019 a 2023)\n");
			scanf("%i-%i",&anyo1,&anyo2);
			if(anyo1>=anyo2||anyo1<19||anyo2>23)
			{
				printf("Formato de tiempo incorrecto, reiniciando el sistema\n");
			}
			else
			{
				if(anyo1==19)
				{
					if(anyo2==20)
					{
					FILE *pf,*pf1;
	                int caracter;
	                pf = fopen("C:/Info trabajo/ficheros archivo/b_a_2019_2020.txt","r");
	                if(pf==NULL)
	                {
		                printf("Error al abrir el fichero de lectura.\n");
	                }
	                else
                    {
                        printf("\nLos datos del fichero son: \n\n");
                        while((caracter = fgetc(pf)) != EOF)
	                    {
                            printf("%c",caracter);
	                    }
                        fclose(pf);

			}
		}
				else if(anyo2==21)
				{
					FILE *pf;
	                int caracter;
	                pf = fopen("C:/Info trabajo/Ficheros archivo/b_a_2019_2021.txt","r");
	                if(pf==NULL)
	                {
		                printf("Error al abrir el fichero de lectura.\n");
	                }
	                else
                    {
                        printf("Fichero abierto correctamente.\n");
                        printf("\nEl contenido del archivo de prueba es \n\n");
                        while((caracter = fgetc(pf)) != EOF)
	                    {
                            printf("%c",caracter);
	                    }
                        fclose(pf);
				}
			 	}
			 	else if(anyo2==22)
			 	{
			 		FILE *pf;
	                int caracter;
	                pf = fopen("C:/Info trabajo/ficheros archivo/b_a_2019_2022.txt","r");
	                if(pf==NULL)
	                {
		                printf("Error al abrir el fichero de lectura.\n");
	                }
	                else
                    {
                        printf("Fichero abierto correctamente.\n");
                        printf("\nEl contenido del archivo de prueba es \n\n");
                        while((caracter = fgetc(pf)) != EOF)
	                    {
                            printf("%c",caracter);
	                    }
                        fclose(pf);
				}
				 }
				 else if(anyo2==23)
				 {
				 	FILE *pf;
	                int caracter;
	                pf = fopen("C:/Info trabajo/ficheros archivo/b_a_2019_2023.txt","r");
	                if(pf==NULL)
	                {
		                printf("Error al abrir el fichero de lectura.\n");
	                }
	                else
                    {
                        printf("Fichero abierto correctamente.\n");
                        printf("\nEl contenido del archivo de prueba es \n\n");
                        while((caracter = fgetc(pf)) != EOF)
	                    {
                            printf("%c",caracter);
	                    }
                        fclose(pf);
				}
				 }
				 }
				 else if(anyo1==20)
				 {
				 	if(anyo2==21)
				 	{
				 	FILE *pf;
	                int caracter;
	                pf = fopen("C:/Info trabajo/ficheros archivo/b_a_2020_2021.txt","r");
	                if(pf==NULL)
	                {
		                printf("Error al abrir el fichero de lectura.\n");
	                }
	                else
                    {
                        printf("Fichero abierto correctamente.\n");
                        printf("\nEl contenido del archivo de prueba es \n\n");
                        while((caracter = fgetc(pf)) != EOF)
	                    {
                            printf("%c",caracter);
	                    }
                        fclose(pf);
				}
				    }
				    else if(anyo2==22)
				 {
				 	FILE *pf;
	                int caracter;
	                pf = fopen("C:/Info trabajo/ficheros archivo/b_a_2020_2022.txt","r");
	                if(pf==NULL)
	                {
		                printf("Error al abrir el fichero de lectura.\n");
	                }
	                else
                    {
                        printf("Fichero abierto correctamente.\n");
                        printf("\nEl contenido del archivo de prueba es \n\n");
                        while((caracter = fgetc(pf)) != EOF)
	                    {
                            printf("%c",caracter);
	                    }
                        fclose(pf);
				}
				 }
				 else if(anyo2==23)
				 {
				 				 		FILE *pf;
	                int caracter;
	                pf = fopen("C:/Info trabajo/ficheros archivo/b_a_2020_2023.txt","r");
	                if(pf==NULL)
	                {
		                printf("Error al abrir el fichero de lectura.\n");
	                }
	                else
                    {
                        printf("Fichero abierto correctamente.\n");
                        printf("\nEl contenido del archivo de prueba es \n\n");
                        while((caracter = fgetc(pf)) != EOF)
	                    {
                            printf("%c",caracter);
	                    }
                        fclose(pf);
				}
				 }
				 }
				 else if(anyo1==21)
				 {
				 	if(anyo2==22)
				 	{
				 	FILE *pf;
	                int caracter;
	                pf = fopen("C:/Info trabajo/ficheros archivo/b_a_2021_2022.txt","r");
	                if(pf==NULL)
	                {
		                printf("Error al abrir el fichero de lectura.\n");
	                }
	                else
                    {
                        printf("Fichero abierto correctamente.\n");
                        printf("\nEl contenido del archivo de prueba es \n\n");
                        while((caracter = fgetc(pf)) != EOF)
	                    {
                            printf("%c",caracter);
	                    }
                        fclose(pf);
				}
				 }
				 else if(anyo2==23)
				 {
				 	FILE *pf;
	                int caracter;
	                pf = fopen("C:/Info trabajo/ficheros archivo/b_a_2021_2023.txt","r");
	                if(pf==NULL)
	                {
		                printf("Error al abrir el fichero de lectura.\n");
	                }
	                else
                    {
                        printf("Fichero abierto correctamente.\n");
                        printf("\nEl contenido del archivo de prueba es \n\n");
                        while((caracter = fgetc(pf)) != EOF)
	                    {
                            printf("%c",caracter);
	                    }
                        fclose(pf);
				 }
					 }
				 }
				 if(anyo1==22)
				 {
				 	FILE *pf;
	                int caracter;
	                pf = fopen("C:/Info trabajo/ficheros archivo/b_a_2022_2023.txt","r");
	                if(pf==NULL)
	                {
		                printf("Error al abrir el fichero de lectura.\n");
	                }
	                else
                    {
                        printf("Fichero abierto correctamente.\n");
                        printf("\nEl contenido del archivo de prueba es \n\n");
                        while((caracter = fgetc(pf)) != EOF)
	                    {
                            printf("%c",caracter);
	                    }
                        fclose(pf);
				 }






			    break;

		case 2:
			printf("Estas viendo el balance energetico mensual de 2023 (hasta marzo)\n");
			printf("Introduce el numero que corresponde a cada mes, siendo enero el 1\n");
			printf("EL FORMATO DEBE SER: num-num\n");
			scanf("%i-%i",&mes1,&mes2);
			if(mes1==1)
			{
				switch(mes2)
				{
					case 2:
						{
					FILE *pf;
	                int caracter;
	                pf = fopen("C:/Info trabajo/ficheros archivo/b_m23_en_feb.txt","r");
	                if(pf==NULL)
	                {
		                printf("Error al abrir el fichero de lectura.\n");
	                }
	                else
                    {
                        printf("Fichero abierto correctamente.\n");
                        printf("\nEl contenido del archivo de prueba es \n\n");
                        while((caracter = fgetc(pf)) != EOF)
	                    {
                            printf("%c",caracter);
	                    }
                        fclose(pf);
				 }
						}
					case 3:
						{
					FILE *pf;
	                int caracter;
	                pf = fopen("C:/Info trabajo/ficheros archivo/b_m23_en_mar.txt","r");
	                if(pf==NULL)
	                {
		                printf("Error al abrir el fichero de lectura.\n");
	                }
	                else
                    {
                        printf("Fichero abierto correctamente.\n");
                        printf("\nEl contenido del archivo de prueba es \n\n");
                        while((caracter = fgetc(pf)) != EOF)
	                    {
                            printf("%c",caracter);
	                    }
                        fclose(pf);
				 }
						}
					default:
						printf("Formato de meses incorrecto, volviendo al menu principal...\n\n");
				}

			}
			else if(mes1==2)
			{
				{
					FILE *pf;
	                int caracter;
	                pf = fopen("C:/Info trabajo/ficheros archivo/b_m23_feb_mar.txt","r");
	                if(pf==NULL)
	                {
		                printf("Error al abrir el fichero de lectura.\n");
	                }
	                else
                    {
                        printf("Fichero abierto correctamente.\n");
                        printf("\nEl contenido del archivo de prueba es \n\n");
                        while((caracter = fgetc(pf)) != EOF)
	                    {
                            printf("%c",caracter);
	                    }
                        fclose(pf);
				 }
						}
			}
			break;

	}
}
}
}



void opcion1() {
    int subbalance, dato;
	printf("Has elegido la opcion del balance energetico\n");
	printf("El balance energetico nos habla sobre el porcentaje de energias\n");
	printf("renovables y no renovables, y desglosa el tipo de energias que forman cada uno.");
	printf("Ahora, vas a ver el balance energetico en todo el territorio nacional\n");
	subbalance1();
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
    int subbintercambios, dato1, dato2;
    printf("Has elegido la opcion de intercambios\n");
    printf("Los intercambios ocurren tanto dentro de Espana como con Portugal, Marruecos, Andorra y Francia \n");
    printf("y en estos nos muestran el saldo, la exportacion e importacion de cada pais\n");
    printf("Selecciona si quieres consultar los intercambios internacionales (1) o entre peninsula y baleares(2)\n");
    scanf("%i",&dato1);

    if(dato1==1)
    {
    	printf("intercambios internacionales:\n");
    	printf("Selecciona la frontera:\n");
    	printf("Todas las fronteras(1), Andorra(2), Francia(3), Marruecos(4) o Portugal(5)\n");
    	scanf("%i",&dato2);

    	if(dato2==1)
      {
    	printf("Todas las fronteras\n");
      }
        if(dato2==2)
      {
    	printf("Andorra\n");
      }
        if(dato2==3)
      {
    	printf("Francia\n");
      }
        if(dato2==4)
      {
    	printf("Marruecos\n");
      }
      if(dato2==5)
      {
    	printf("Portugal\n");
      }




    }

	else
	{
		printf("Espana-Baleares\n");



	}



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


