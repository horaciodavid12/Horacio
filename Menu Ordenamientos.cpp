#include<stdio.h>
#include<stdlib.h>
#include"Libreria.h"



main()
{   
  int salir, carga, t;
  int opcion, v[1000],i, orden, k[1000];
  while (opcion!=7)
  {
  	
  
  printf("************************************************************\n\n");
  printf("****      Bienvenidos al Menu de Ordenamientos             *****\n\n"); 
  printf("****      - - - - - - - - - - - - - - - - - - -            *****\n\n");
  printf("************************************************************\n\n\n");
  printf("1) Cargar el Vector: \n");
  printf("2) Ordenanr burbuja mejorada\n:");
  printf("3) ordenar por insercion\n:");
  printf("4) ordenar por seleccion\n:");
  printf("5) ordenar por QuickSort\n:");
  printf("6) ordenar por MergeSort\n:");
  printf("7) Salir \n:");
  scanf("%d", &opcion);
  
  
  switch(opcion)
  {
  	case 1: printf("ingrese el tamaño del vector: "); /*carga del vector*/
  			scanf("%d\n\n ", &orden);
			cargar(orden, v);
			break;
	case 2:  copiar(orden,v,k);   /*ordenamiento burbuja mejorada*/
	  		 burbuja(orden, k); 
  			 Mostrar(orden, k);
  		 	 break;
  	case 3: copiar(orden,v, k);   /*ordenamiento de insercion*/
	  		insercion(orden, k);
  			Mostrar(orden, v);
  			 break;	 	 
  	case 4:  copiar(orden,v, k);  /*ordenamiento de seleccion*/
	  		seleccion(orden, v);
	  		Mostrar(orden, k);
	  		 break;		
  	case 5:  copiar(orden,v,k);   /* Ordenamiento QuickSort*/
	  		QuickSort(k,0,orden);
	  		Mostrar(orden, k);
  			 break;
  	case 6:  					  /*ordenamiento MergeSort*/
	  		MergeSort(orden,k);
	 		 
  		 	break;
  	case 7: salir;
  			printf("Gracias por su visita");
   }   

  }
}




