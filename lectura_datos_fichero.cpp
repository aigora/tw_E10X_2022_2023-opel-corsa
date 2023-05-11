#include <stdio.h>


int main()
{
  FILE *plectura;
  FILE *pescritura;

  float anyo19[19];
  float anyo20[19];
  float anyo21[19];
  float anyo22[19];
  float anyo23[19];
  int i = 0;
  // Abrir el archivo de lectura
  plectura = fopen("Archivos de lectura/Ficheros/Estadisticas_Balance_2019-2023.txt", "r");

  if (plectura == NULL)
  {
    printf("ERROR AL ABRIR EL FICHERO DE LECTURA");
  }
  else
  {
    // Leemos con un FOR porque conocemos el numero de lineas
    // Si no leeríamos linea a liena hasta el final del archivo
    for (i = 0; i <19; i++)
    {
      fscanf(plectura, "%f,%f,%f,%f,%f", &anyo19[i], &anyo20[i], &anyo21[i], &anyo22[i], &anyo23[i]); 
    }
    // Se ha terminado de leer, luego se cierra el archivo
    fclose(plectura);	

    // Suponemos que el mínimo y máximo valores son el primero
    // Después iremos sustituyendo al encontrar un nuevo mínimo o máximo
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
    // recorremos cada vector buscando mínimos y máximos y acumulando para las medias
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
    printf("Ano 2023: \t\t %f \t\t %f \t\t %f \n", min_anyo23, max_anyo23, mean_anyo23);
    
    
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
	
  return 0;	
}
