#include <stdio.h>
#include <string.h>
#include <stdlib.h>




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
      
                if(anyo23[i] > max_anyo23)
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

void estadistica_demanda()
{
  FILE *plectura;
  FILE *pescritura;

  float anyo19[2];
  float anyo20[2];
  float anyo21[2];
  float anyo22[2];
  float anyo23[2];
  int i = 0;
  
  plectura = fopen("Archivos de lectura/Ficheros/Estadisticas_Demanda_2019-2023.txt", "r");

  if (plectura == NULL)
  {
    printf("ERROR AL ABRIR EL FICHERO DE LECTURA\n");
  }
  else
  {
    for (i = 0; i <2; i++)
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

    for (i = 0; i < 2; i++)
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
    
    mean_anyo19 = mean_anyo19/5;
    mean_anyo20 = mean_anyo20/5;
    mean_anyo21 = mean_anyo21/5;
    mean_anyo22 = mean_anyo22/5;
	mean_anyo23 = mean_anyo23/5;
		
 
    printf("Variables: \t\t\t Min \t\t\t Max \t\t\t Prom \n");
    printf("Ano 2019: \t\t %f \t\t %f \t\t %f \n", min_anyo19, max_anyo19, mean_anyo19);
    printf("Ano 2020: \t\t %f \t\t %f \t\t %f \n",min_anyo20, max_anyo20, mean_anyo20);
    printf("Ano 2021: \t\t %f \t\t %f \t\t %f \n", min_anyo21, max_anyo21, mean_anyo21);
    printf("Ano 2022: \t\t %f \t\t %f \t\t %f \n", min_anyo22, max_anyo22, mean_anyo22);
    printf("Ano 2023: \t\t %f \t\t %f \t\t %f \n\n", min_anyo23, max_anyo23, mean_anyo23);
    
    
    pescritura= fopen("Archivos de lectura/Ficheros/result_demanda.txt", "w");
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
void estadistica_generacion()
{
  FILE *plectura;
  FILE *pescritura;

  float anyo19[17];
  float anyo20[17];
  float anyo21[17];
  float anyo22[17];
  float anyo23[17];
  int i = 0;
  
  plectura = fopen("Archivos de lectura/Ficheros/Estadisticas_generacion.txt", "r");

  if (plectura == NULL)
  {
    printf("ERROR AL ABRIR EL FICHERO DE LECTURA\n");
  }
  else
  {
    for (i = 0; i <17; i++)
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

    for (i = 0; i < 17; i++)
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
      
	            if(anyo23[i] > max_anyo23)
      {
        max_anyo23 = anyo23[i];
      }	  	
      if(anyo23[i] < min_anyo23)
      {
        min_anyo23 = anyo23[i];				  		
      }
      mean_anyo23 = mean_anyo23 + anyo23[i];
			
      }
    
    mean_anyo19 = mean_anyo19/17;
    mean_anyo20 = mean_anyo20/17;
    mean_anyo21 = mean_anyo21/17;
    mean_anyo22 = mean_anyo22/17;
	mean_anyo23 = mean_anyo23/17;
		
 
    printf("Variables: \t\t\t Min \t\t\t Max \t\t\t Prom \n");
    printf("Ano 2019: \t\t %f \t\t %f \t\t %f \n", min_anyo19, max_anyo19, mean_anyo19);
    printf("Ano 2020: \t\t %f \t\t %f \t\t %f \n",min_anyo20, max_anyo20, mean_anyo20);
    printf("Ano 2021: \t\t %f \t\t %f \t\t %f \n", min_anyo21, max_anyo21, mean_anyo21);
    printf("Ano 2022: \t\t %f \t\t %f \t\t %f \n", min_anyo22, max_anyo22, mean_anyo22);
    printf("Ano 2023: \t\t %f \t\t %f \t\t %f \n\n", min_anyo23, max_anyo23, mean_anyo23);
    
    
    pescritura= fopen("Archivos de lectura/Ficheros/escribir_fichero_generacion.txt", "w");
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
	printf("Elige como lo quieres ver: \n\n-Anualmente(1) \n\n-Mensualmente(solo 2023)(2)\n");
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
					printf("Vas a ver las estadisticas a nivel nacional\n\n");
					estadistica_demanda();
					printf("\nElige como quieres verlo: \n\n-Anual(1)\n\n-Mensual(2)\n");
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
	                pf = fopen("Archivos de lectura/Ficheros/d_m23_en_feb.txt","r");
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
	                pf = fopen("Archivos de lectura/Ficheros/d_m23_en_mar.txt","r");
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
	                pf = fopen("Archivos de lectura/Ficheros/d_m23_feb_mar.txt","r");
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
	else
	{
		printf("Formato de numero incorrecto, reiniciando programa\n\n");
	}
}
}
}
void subgeneracion1()
{
	int dato;
	void generacion2122();
	int tiempo,anyo;
	printf("En la generacion, podemos ver distintos datos en periodos de 5 anyos en el territorio nacional\n\n");
	printf("A continuacion, se te mostraran los datos desde 2019 hasta 2023 de la estructura nacional en la peninsula:\n\n");
	estadistica_generacion();
	printf("Elige que quieres ver: \n\n-La potencia instalada(1) \n\n-La estructura de la potencia renovable instalada(2)\n\n-Las emisiones generadas(3)\n\n-Estructura de la generacion por tecnologias (21-22)(4)\n");
	scanf("%i",&dato);
	switch(dato)
	{
		case 1:
			printf("\nHas elegido la potencia instalada\n");
			printf("Ahora, elige en que periodo quieres ver datos:\n\n2015-2019(1)\n\n2019-2023 (2)\n");
			scanf("%i",&anyo);
			if (anyo==1)
			{
				printf("Has elegido el periodo de 2015 a 2019, a continuacion se te mostrara el fichero con los datos:\n");
					FILE *pf;
	                int caracter;
	                pf = fopen("Archivos de lectura/Ficheros/g_p_a_2015_2019.txt","r");
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
	        else if (anyo==2)
			{
				printf("Has elegido el periodo de 2019 a 2023, a continuacion se te mostrara el fichero con los datos:\n");
					FILE *pf;
	                int caracter;
	                pf = fopen("Archivos de lectura/Ficheros/g_p_a_2019_2023.txt","r");
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
	case 2:
		printf("\nHas elegido la opcion de la estructura de la potencia renovable.\n\n");
		printf("Ahora, elige en que periodo quieres verlo: \n\n2015-2019 (1)\n\n2019-2023 (2):\n\n");
		scanf("%i",&anyo);
		if (anyo==1)
			{
				printf("Has elegido el periodo de 2015 a 2019, a continuacion se te mostrara el fichero con los datos:\n");
					FILE *pf;
	                int caracter;
	                pf = fopen("Archivos de lectura/Ficheros/g_p_inst_a_2015_2019.txt","r");
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
	        else if (anyo==2)
			{
				printf("Has elegido el periodo de 2019 a 2023, a continuacion se te mostrara el fichero con los datos:\n");
					FILE *pf;
	                int caracter;
	                pf = fopen("Archivos de lectura/Ficheros/g_p_inst_a_2019_2023.txt","r");
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
	    printf("\nHas elegido la opcion de las emisiones generadas.\n\n");
		printf("Ahora, elige el periodo en el que quieres verlo:\n\n2007-2011(1)\n\n2011-2015(2)\n\n2015-2019(3)\n\n2019-2023(4):\n\n");
		scanf("%i",&anyo);
		
		if (anyo==1)
		
		{
			printf("Has elegido la opcion de 2007 a 2011\n");
			FILE *pf;
	                int caracter;
	                pf = fopen("Archivos de lectura/Ficheros/g_e_a_2007_2011.txt","r");
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

         else if(anyo==2)
		{
			printf("Has elegido la opcion de 2011 a 2015\n");
			FILE *pf;
	                int caracter;
	                pf = fopen("Archivos de lectura/Ficheros/g_e_2011_2015.txt","r");
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

	    else if(anyo==3)
		{
			printf("Has elegido la opcion de 2015 a 2019\n");
			FILE *pf;
	                int caracter;
	                pf = fopen("Archivos de lectura/Ficheros/g_e_a_2015_2019.txt","r");
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
            
	      
		   else if(anyo==4)
		{
			printf("Has elegido la opcion de 2019 a 2023\n");
			FILE *pf;
	                int caracter;
	                pf = fopen("Archivos de lectura/Ficheros/g_e_a_2019_2023.txt","r");
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
        else
        {
        	printf("\nERROR EN EL FORMATO; REINICIANDO EL PROGRAMA\n\n");
        	break;
        	
		}
		case 4:
				printf("\nHas elegido la estructura de la generacion por tecnologias durante 2021-2022\n\n");
				generacion2122();
				break;
			
	default:
	printf("\nERROR EN EL FORMATO; REINICIANDO EL PROGRAMA\n\n");
				

}
}

void generacion2122()
{
	FILE *archivo;
    char linea[100];
    int contador = 0;
    char *palabra;
    char *numero;
    int i;

    archivo = fopen("Archivos de lectura/Ficheros/generacion_por_tecnologias_21_22_puntos_simplificado (2).csv", "r"); 
    
    if (archivo == NULL) {
        printf("No se pudo abrir el archivo.\n");
        
    }


    for (i = 0; i < 6; i++) 
	{
        if (fgets(linea, sizeof(linea), archivo) == NULL) 
		{
            fclose(archivo);
        }
    }

    while (fgets(linea, sizeof(linea), archivo) != NULL) 
	{
        printf("%s\n", linea);
    }
    

    fclose(archivo); 
}


void opcion1()
{

    int subbalance, dato;
	printf("Has elegido la opcion del balance energetico\n\n");
	printf("El balance energetico nos habla sobre el porcentaje de energias\n");
	printf("renovables y no renovables, y desglosa el tipo de energias que forman cada uno.\n\n");
	printf("Ahora, vas a ver el balance energetico en todo el territorio nacional\n\n");
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
	int subgeneracion,dato;
    printf("Has elegido la opcion de generacion\n\n");
    printf("La generacion nos habla sobre los porcentajes de generacion de energias, las emisiones y\n\n");
    printf("el factor de emision de CO2, y la potencia instalada nacional\n\n");
    subgeneracion1();

}
void opcion4() {
	printf("Para salir, pulse cualquier tecla\n");
}


void mostrarMenu() {
    printf("Menu:\n\n");
    printf("\n1. Balances\n\n");
    printf("2. Demanda\n\n");
    printf("3. Generacion\n\n");
    printf("4. Salir\n\n");
    printf("Seleccione una opcion (1-4): ");
}
