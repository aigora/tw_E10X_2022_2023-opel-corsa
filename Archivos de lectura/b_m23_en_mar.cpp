#include <stdio.h>

int main()
{
	char caracter;
	int anyo1,anyo2;
	FILE *pf;
	pf = fopen("C:/Info trabajo/ficheros archivo/b_m23_en_mar.txt","r");
	if(pf==NULL)
	{
		printf("Error al abrir el fichero de lectura.\n");
		return -1;
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
return 0;
}
}
