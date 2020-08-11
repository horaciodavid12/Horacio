#include<stdio.h>
#include<stdlib.h>
#include"Libreria.h"




main()
{   
 int opcion, v[100];
  printf("******************************************************\n");
  printf("Bienvenidos al Menu de opciones de Ordenamiento\n"); 
  printf("1) Cargar el Vector\n:");
  printf("2) Ordenanr burbuja mejorada\n:");
  printf("3) ordenar por seleccion\n:");
  printf("4) ordenar por simple\n:");
  printf("5) ordenar por QuickSort\n:");
  printf("6) ordenar por MergeSort\n:");
  printf("7) Salir \n:");
  scanf("%d", &opcion);
  printf("***********************************************\n");
  
  switch(opcion)
  {
  	case 1: cargar ;
  	int i, v, orden; 	
	for(i=0; i<orden; i++)	  
	{
		printf("ingrese un elemento: ", i+1);
		scanf("%d", &v[100])
		  }	  
		  
		  
		  	break;
  	case 2:  ///burbuja(v);
  	int array[10];
  	int i, j, aux, a, lim;
  	
  	printf("Digite la cantidad de valores que desea ordenar: ");
  	scanf("%i", &lim);
  	llenado del vector
  	printf("\n");
  	
	  for(i=0; i<lim; i++)
  	{
  	  printf("valor en [%i]:", i+1);	
  	  scanf("%i", &array[i]);	
     }
  	ordenamiento
      for(i=0; i<lim; i++)
  	{
  	    for(j=0; j<lim; j++)	
  	   {
  	       if(array[j] > array[j+1])
		     { 
			  aux = array[j];
			  array[j] = array[j+1];
			  array[j+1] = aux;
		     }  
		}	
  	}
  	
  	printf("\n");
  	ascendiente
  	for(i=0; i<lim; i++)
    {
  		printf("%i", array[i]);
  	}
  	printf("\n\n");
  	
  	descendiente
  	for(i=lim-1; i>=0; i--)
    {
  		printf("%i", array[i]);
  		
	}
  	
  	
  	
  	
  			break;
  	case 3:  seleccion(v);
	  		break;		
  	case 4: simple(v);
  			break;
  	case 5:  QuickSort(v);
  			break;
  	case 6:  MergeSort(v);
  			break;
  	case 7:  burbuja(v);
  	
  }  

}





