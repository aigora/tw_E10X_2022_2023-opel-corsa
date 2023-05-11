#include <stdio.h>
#define N 30


int main()
{
  FILE *plectura;
  FILE *pescritura;

  // Defino un vector para cada variable a leer del fichero	
  float nueve[N];
  float veinte[N];

  int i = 0;
  // Abrir el archivo de lectura
  plectura = fopen("C:/Info trabajo/Ficheros archivo/Estadisticas_prueba.txt", "r");

  if (plectura == NULL)
  {
    printf("ERROR AL ABRIR EL FICHERO DE LECTURA");
  }
  else
  {
    // Leemos con un FOR porque conocemos el numero de lineas
    // Si no leeríamos linea a liena hasta el final del archivo
    for (i = 0; i <N; i++)
    {
      fscanf(plectura, "%f,%f", &nueve[i], &veinte[i]); 
    }
    // Se ha terminado de leer, luego se cierra el archivo
    fclose(plectura);	

    // Suponemos que el mínimo y máximo valores son el primero
    // Después iremos sustituyendo al encontrar un nuevo mínimo o máximo
    float max_nueve = nueve[0];
    float min_nueve = nueve[0];
    float mean_nueve = 0;
    float max_veinte = veinte[0];
    float min_veinte = veinte[0];
    float mean_veinte = 0;
    
    // recorremos cada vector buscando mínimos y máximos y acumulando para las medias
    for (i = 0; i < N; i++)
    {
      // Temperadura
      if(nueve[i] > max_nueve)
      {
        max_nueve = nueve[i];
      }	  	
      if(nueve[i] < min_nueve)
      {
        min_nueve = nueve[i];				  		
      }
      mean_nueve = mean_nueve + nueve[i];
			
      // Humedad
      if(veinte[i] > max_veinte)
      {
        max_veinte = veinte[i];
      }	  	
      if(veinte[i] < min_veinte)
      {
        min_veinte = veinte[i];				  		
      }
      mean_veinte = mean_veinte + veinte[i];	  	
		  

    mean_nueve = mean_nueve/N;
    mean_veinte = mean_veinte/N;
    
		
    // Mostramos resultados
    printf("Variable: \t Min \t Max \t Prom \n");
    printf("2019: \t %f \t %f \n", min_nueve, max_nueve, mean_nueve);
    printf("2020: \t %f \t %f \n", min_veinte, max_veinte, mean_veinte);
    

    // Abrir el archivo de escritura
    pescritura= fopen("result.csv", "w");
    if (pescritura == NULL)
    {
      printf("ERROR AL ABRIR EL FICHERO DE ESCRITURA");
    }
    else
    {	
      fprintf(pescritura, "Variable: \t Min \t Max \t Prom \n");
      fprintf(pescritura, "Nueve: \t %f \t %f \n", min_nueve, max_nueve, mean_nueve);
      fprintf(pescritura, "Veinte: \t %f \t %f \n", min_veinte, max_veinte, mean_veinte);
      
      // Al terminar de escribir, cerramos el archivo
      fclose(pescritura);	
    }		
  }
}
  return 0;	

}


