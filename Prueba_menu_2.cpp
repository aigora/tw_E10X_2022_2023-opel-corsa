#include <stdio.h>


void estadistica_balance()
{
  FILE *plectura;
  FILE *pescritura;

  float anyo19[19];
  float anyo20[19];
  float anyo21[19];
  float anyo22[19];
  float anyo23[19];
  int i = 0;
  
  plectura = fopen("Archivos de lectura/Ficheros/Estadisticas_Balance_2019-2023.txt", "r");

  if (plectura == NULL)
  {
    printf("ERROR AL ABRIR EL FICHERO DE LECTURA\n");
  }
  else
  {
    for (i = 0; i <19; i++)
    {
      fscanf(plectura, "%f,%f,%f,%f,%f", &anyo19[i], &anyo20[i], &anyo21[i], &anyo22[i], &anyo23[i]); 
    }
    fclose(plectura);	
    
    float max_anyo19 = anyo19[0];
    float min_anyo19 = anyo19[0];
    float mean_anyo19 = 0;
    float max_anyo20 = anyo20[0];
    float min_anyo20 = anyo20[0];
    float mean_anyo20 = 0;
    float max_anyo21 = anyo21[0];
    float min_anyo21 = anyo21[0];
    float mean_anyo21 = 0;
    float max_anyo22 = anyo22[0];
    float min_anyo22 = anyo22[0];
    float mean_anyo22 = 0;
    float max_anyo23 = anyo23[0];
    float min_anyo23 = anyo23[0];
    float mean_anyo23 = 0;

    for (i = 0; i < 19; i++)
    {

      if(anyo19[i] > max_anyo19)
      {
        max_anyo19 = anyo19[i];
      }	  	
      if(anyo19[i] < min_anyo19)
      {
        min_anyo19 = anyo19[i];				  		
      }
      mean_anyo19 = mean_anyo19 + anyo19[i];
			
            if(anyo20[i] > max_anyo20)
      {
        max_anyo20 = anyo20[i];
      }	  	
      if(anyo20[i] < min_anyo20)
      {
        min_anyo20 = anyo20[i];				  		
      }
      mean_anyo20 = mean_anyo20 + anyo20[i];	  	
		  
            if(anyo21[i] > max_anyo21)
      {
        max_anyo21 = anyo21[i];
      }	  	
      if(anyo21[i] < min_anyo21)
      {
        min_anyo21 = anyo21[i];				  		
      }
      mean_anyo21 = mean_anyo21 + anyo21[i];
			
            if(anyo22[i] > max_anyo22)
      {
        max_anyo22 = anyo22[i];
      }	  	
      if(anyo22[i] < min_anyo22)
      {
        min_anyo22 = anyo22[i];				  		
      }
      mean_anyo22 = mean_anyo22 + anyo22[i];
      
                if(anyo21[i] > max_anyo21)
      {
        max_anyo23 = anyo23[i];
      }	  	
      if(anyo23[i] < min_anyo23)
      {
        min_anyo23 = anyo23[i];				  		
      }
      mean_anyo23 = mean_anyo23 + anyo23[i];
			
      }
    
    mean_anyo19 = mean_anyo19/19;
    mean_anyo20 = mean_anyo20/19;
    mean_anyo21 = mean_anyo21/19;
    mean_anyo22 = mean_anyo22/19;
	mean_anyo23 = mean_anyo23/19;
		
 
    printf("Variables: \t\t\t Min \t\t\t Max \t\t\t Prom \n");
    printf("Ano 2019: \t\t %f \t\t %f \t\t %f \n", min_anyo19, max_anyo19, mean_anyo19);
    printf("Ano 2020: \t\t %f \t\t %f \t\t %f \n",min_anyo20, max_anyo20, mean_anyo20);
    printf("Ano 2021: \t\t %f \t\t %f \t\t %f \n", min_anyo21, max_anyo21, mean_anyo21);
    printf("Ano 2022: \t\t %f \t\t %f \t\t %f \n", min_anyo22, max_anyo22, mean_anyo22);
    printf("Ano 2023: \t\t %f \t\t %f \t\t %f \n\n", min_anyo23, max_anyo23, mean_anyo23);
    
    
    pescritura= fopen("Archivos de lectura/Ficheros/result.txt", "w");
    if (pescritura == NULL)
    {
      printf("ERROR AL ABRIR EL FICHERO DE ESCRITURA");
    }
    else
    {	
      fprintf(pescritura, "Variables: \t\t Min \t\t Max \t\t Prom \n");
      fprintf(pescritura, "Ano 2019: \t %f \t %f \t %f \n", min_anyo19, max_anyo19, mean_anyo19);
      fprintf(pescritura, "Ano 2020: \t %f \t %f \t %f \n",min_anyo20, max_anyo20, mean_anyo20);
      fprintf(pescritura, "Ano 2021: \t %f \t %f \t %f \n", min_anyo21, max_anyo21, mean_anyo21);
      fprintf(pescritura, "Ano 2022: \t %f \t %f \t %f \n", min_anyo22, max_anyo22, mean_anyo22);
      fprintf(pescritura, "Ano 2023: \t %f \t %f \t %f \n", min_anyo23, max_anyo23, mean_anyo23);

      fclose(pescritura);	
    }		
  }

}




void subbalance1() {
    int tiempo,anyo1,anyo2,mes1,mes2;
	printf("Estas viendo el balance energetico nacional\n");
	printf("A continuacion, se mostraran las estadisticas mas notables sobre el balance desde el ano 2019 al 2023, medido en Kw/H\n\n");
	estadistica_balance();
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
	                pf = fopen("Archivos de lectura/Ficheros/b_a_2019_2020.txt","r");
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
	                pf = fopen("Archivos de lectura/Ficheros/b_a_2019_2021.txt","r");
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
	                pf = fopen("Archivos de lectura/Ficheros/b_a_2019_2022.txt","r");
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
	                pf = fopen("Archivos de lectura/Ficheros/b_a_2019_2023.txt","r");
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
	                pf = fopen("Archivos de lectura/Ficheros/b_a_2020_2021.txt","r");
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
	                pf = fopen("Archivos de lectura/Ficheros/b_a_2020_2022.txt","r");
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
	                pf = fopen("Archivos de lectura/Ficheros/b_a_2020_2023.txt","r");
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
	                pf = fopen("Archivos de lectura/Ficheros/b_a_2021_2022.txt","r");
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
	                pf = fopen("Archivos de lectura/Ficheros/b_a_2021_2023.txt","r");
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
	                pf = fopen("Archivos de lectura/Ficheros/b_a_2022_2023.txt","r");
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
	                pf = fopen("Archivos de lectura/Ficheros/b_m23_en_feb.txt","r");
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
						}
					case 3:
						{
					FILE *pf;
	                int caracter;
	                pf = fopen("Archivos de lectura/Ficheros/b_m23_en_mar.txt","r");
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
	                pf = fopen("Archivos de lectura/Ficheros/b_m23_feb_mar.txt","r");
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
void subdemanda1(){
	int dato;
	int tiempo,anyo1,anyo2,mes1,mes2;
	
	{
	
				{
					printf("Selecciona si quieres ver la demanda maxima diaria en el territorio nacional\n");
					printf("de manera anual(1), o de manera mensual (2)\n");
					scanf("%i",&tiempo);
					if(tiempo==1)
							{
								printf("Has seleccionado verlo de forma anual\n");
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
	                pf = fopen("Archivos de lectura/Ficheros/d_a_2019_2020.txt","r");
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
	                pf = fopen("Archivos de lectura/Ficheros/d_a_2019_2021.txt","r");
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
	                pf = fopen("Archivos de lectura/Ficheros/d_a_2019_2022.txt","r");
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
	                pf = fopen("Archivos de lectura/Ficheros/d_a_2019_2023.txt","r");
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
	                pf = fopen("Archivos de lectura/Ficheros/d_a_2020_2021.txt","r");
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
	                pf = fopen("Archivos de lectura/Ficheros/d_a_2020_2022.txt","r");
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
	                pf = fopen("Archivos de lectura/Ficheros/d_a_2020_2023.txt","r");
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
	                pf = fopen("Archivos de lectura/Ficheros/d_a_2021_2022.txt","r");
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
	                pf = fopen("Archivos de lectura/Ficheros/d_a_2021_2023.txt","r");
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
	                pf = fopen("Archivos de lectura/Ficheros/d_a_2022_2023.txt","r");
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
					
				}
				else if(tiempo==2)
				{
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
	                pf = fopen("Archivos de lectura/Ficheros/b_m23_en_feb.txt","r");
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
						break;
					case 3:
						{
					FILE *pf;
	                int caracter;
	                pf = fopen("Archivos de lectura/Ficheros/b_m23_en_mar.txt","r");
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
	                pf = fopen("Archivos de lectura/Ficheros/b_m23_feb_mar.txt","r");
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


	}
}
}
}
				


void opcion1() 
{

    int subbalance, dato;
	printf("Has elegido la opcion del balance energetico\n");
	printf("El balance energetico nos habla sobre el porcentaje de energias\n");
	printf("renovables y no renovables, y desglosa el tipo de energias que forman cada uno.");
	printf("Ahora, vas a ver el balance energetico en todo el territorio nacional\n");
	subbalance1();
}

void opcion2() {
    int subdemanda,dato;
	printf("Has elegido la opcion de la demanda\n\n");
    printf("La demanda electrica nos habla del uso de la electricidad que se necesita cada dia en Espanya\n\n");
    printf("A continuacion, puedes consultar distintos datos de la demanda b.c.\n\n");
    printf("Definicion: La demanda b.c.(barras de central): Energia inyectada en la red procedente de las centrales de generacion\n");
    printf("y de las importaciones, y deducidos los consumos en bombeo y las exportaciones. Para el traslado de esta energia hasta\n");
    printf("los puntos de consumo habria que detraer las perdidas originadas en la red de transporte y distribucion\n\n");
    subdemanda1();
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
        scanf("%i", &opcion);

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
                printf("Opcion invalida, para reiniciar el programa pulsa cualquier tecla.\n");
                scanf("%i", &opcion);
                break;

        }
    } while (opcion != 7);


    return 0;
}




