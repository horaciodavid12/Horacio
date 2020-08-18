#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include"Libreria.h"

main()
{   /*Declaracion de variables*/
	
  	int salir, carga;	
  	int opcion, v[100000],i, orden, k[100000];
  
    printf("\t************************************************************\n\n");
  	printf("\t****      Bienvenidos al Menu de Ordenamientos         *****\n\n"); 
  	printf("\t****      - - - - - - - - - - - - - - - - - - -        *****\n\n");
  	printf("\t************************************************************\n\n\n");
  
  
  	while (opcion<6)
  	{
  		printf("\n\n");
  		printf("\n\tPor favor ingrese el tamaño del vector: ");	/*carga del vector*/
  		scanf("%d", &orden);
  		cargar(orden, v);
  
  		printf ("\n\n\t- A continuacion podra seleccionar una opcion para ordenar el vector -");
  
  		printf("\n\n1) Ordenar burbuja mejorada: \n");
  		printf("\n2) ordenar por insercion: \n");
  		printf("\n3) ordenar por seleccion: \n");
  		printf("\n4) ordenar por QuickSort: \n");
  		printf("\n5) ordenar por MergeSort: \n");
  		printf("\n6) Salir: \n");
  		printf("\n\n\tIngrese una opcion: ");
  		scanf("%d", &opcion);
  
  
  		switch(opcion)
  		{
  	
		case 1:  copiar(orden,v,k);   /*ordenamiento burbuja mejorada*/
	  		 burbuja(orden, v); 
  			 Mostrar(orden, v);
  		 	 break;
  		case 2: copiar(orden,v, k);   /*ordenamiento de insercion*/
	  		insercion(orden, v);
  			Mostrar(orden, v);
  			 break;	 	 
  		case 3:  copiar(orden,v, k);  /*ordenamiento de seleccion*/
	  		seleccion(orden, v);
	  		Mostrar(orden, v);
	  		 break;		
  		case 4:  copiar(orden,v,k);   /* Ordenamiento QuickSort*/
	  		QuickSort(k,0,orden);
	  		Mostrar(orden, k);
  			 break;
  		case 5:  copiar(orden,v,k);	  /*ordenamiento MergeSort*/
	  			mergeSort(v,0,orden-1);
	 		 Mostrar(orden,v);
  		 	break;
  		case 6: salir;
  			printf("\n\n");
  			printf("*********************************************\n\n");
   			printf("****    Gracias por su visita           *****\n\n");
   			printf("****    - - - - - - - - - - -            *****\n\n");
   			printf("*********************************************\n\n");
   }   


  }
  printf("El programa finalizo");
}




