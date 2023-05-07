#include <stdio.h>
#define N 2898

int main()
{
  FILE *plectura;
  FILE *pescritura;
  // Defino un vector para cada variable a leer del fichero	
  float temp[N];
  float hum[N];
  float viento[N];
  float rad[N];
  int i = 0;
  // Abrir el archivo de lectura
  plectura = fopen("C:/Users/pedro/Downloads/aranjuez.csv", "r");

  if (plectura == NULL)
  {
    printf("ERROR AL ABRIR EL FICHERO DE LECTURA");
  }
  else
  {
    // Leemos con un FOR porque conocemos el numero de lineas
    // Si no leeríamos linea a liena hasta el final del archivo
    for (i = 0; i < N; i++)
    {
      fscanf(plectura, "%f,%f,%f,%f", &temp[i], &hum[i], &viento[i], &rad[i]); 
    }
    // Se ha terminado de leer, luego se cierra el archivo
    fclose(plectura);	

    // Suponemos que el mínimo y máximo valores son el primero
    // Después iremos sustituyendo al encontrar un nuevo mínimo o máximo
    float max_temp = temp[0];
    float min_temp = temp[0];
    float mean_temp = 0;
    float max_hum = hum[0];
    float min_hum = hum[0];
    float mean_hum = 0;
    float max_viento = viento[0];
    float min_viento = viento[0];
    float mean_viento = 0;
    float max_rad = rad[0];
    float min_rad = rad[0];
    float mean_rad = 0;
    // recorremos cada vector buscando mínimos y máximos y acumulando para las medias
    for (i = 0; i < N; i++)
    {
      // Temperadura
      if(temp[i] > max_temp)
      {
        max_temp = temp[i];
      }	  	
      if(temp[i] < min_temp)
      {
        min_temp = temp[i];				  		
      }
      mean_temp = mean_temp + temp[i];
			
      // Humedad
      if(hum[i] > max_hum)
      {
        max_hum = hum[i];
      }	  	
      if(hum[i] < min_hum)
      {
        min_hum = hum[i];				  		
      }
      mean_hum = mean_hum + hum[i];	  	
		  
      // Viento
      if(viento[i] > max_viento)
      {
        max_viento = viento[i];
      }	  	
      if(viento[i] < min_viento)
      {
        min_viento = viento[i];				  		
      }
      mean_viento = mean_viento + viento[i];
			
      // Radiación
      if(rad[i] > max_rad)
      {
        max_rad = rad[i];
      }	  	
      if(rad[i] < min_rad)
      {
        min_rad = rad[i];				  		
      }
      mean_rad = mean_rad + rad[i];				
    }
    // Calculamos medias
    mean_temp = mean_temp/N;
    mean_hum = mean_hum/N;
    mean_viento = mean_viento/N;
    mean_rad = mean_rad/N;
		
    // Mostramos resultados
    printf("Variable: \t Min \t Max \t Prom \n");
    printf("Temperat: \t %f \t %f \t %f \n", min_temp, max_temp, mean_temp);
    printf("Humedad: \t %f \t %f \t %f \n", min_hum, max_hum, mean_hum);
    printf("Viento: \t %f \t %f \t %f \n", min_viento, max_viento, mean_viento);
    printf("Radiacion: \t %f \t %f \t %f \n", min_rad, max_rad, mean_rad);

    // Abrir el archivo de escritura
    pescritura= fopen("result.csv", "w");
    if (pescritura == NULL)
    {
      printf("ERROR AL ABRIR EL FICHERO DE ESCRITURA");
    }
    else
    {	
      fprintf(pescritura, "Variable: \t Min \t Max \t Prom \n");
      fprintf(pescritura, "Temp: \t %f \t %f \t %f \n", min_temp, max_temp, mean_temp);
      fprintf(pescritura, "Humedad: \t %f \t %f \t %f \n",min_hum, max_hum, mean_hum);
      fprintf(pescritura, "Viento: \t %f \t %f \t %f \n", min_viento, max_viento, mean_viento);
      fprintf(pescritura, "Radiacion: \t %f \t %f \t %f \n", min_rad, max_rad, mean_rad);

      // Al terminar de escribir, cerramos el archivo
      fclose(pescritura);	
    }		
  }
	
  return 0;	
}
