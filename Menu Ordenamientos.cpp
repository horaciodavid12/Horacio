#include<stdio.h>
#include<stdlib.h>
#include"Libreria.h"



main()
{   
 int opcion, v[1000],i, orden, k[1000];
  while (opcion!=7)
  {
  	
  
  printf("******************************************************\n");
  printf("Bienvenidos al Menu de opciones de Ordenamiento\n"); 
  printf("1) Cargar el Vector\n:");
  printf("2) Ordenanr burbuja mejorada\n:");
  printf("3) ordenar por insercion\n:");
  printf("4) ordenar por seleccion\n:");
  printf("5) ordenar por QuickSort\n:");
  printf("6) ordenar por MergeSort\n:");
  printf("7) Salir \n:");
  scanf("%d", &opcion);
  printf("***********************************************\n");
  
  switch(opcion)
  {
  	case 1: printf("ingrese el tamaño del vector"); ///cargar(int orden,int v[1000]); /// carga del vector
			scanf("%d", &orden);
			cargar(orden, v);
			
			
			  break;
			  
  	case 2:  copiar(orden,v,k);
	  		 burbuja(orden, k); ///ordenamiento burbuja
  			 Mostrar(orden, v);
  		 	 break;
  	case 3: copiar(orden,v, k); ///ordenamiento de insercion
	  		insercion(orden, v);
  			Mostrar(orden, v);
  			 break;	 	 
  	case 4:  copiar(orden,v, k);  ///ordenamiento de seleccion
	  		seleccion(orden, v);
	  		Mostrar(orden, v);
	  		 break;		
  	case 5:  QuickSort(orden, v);
  			 break;
  	case 6:  MergeSort(v);
  		 	 break;
  	
  	
   }   

  }
}




