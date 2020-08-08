#include<stdio.h>
#include<stdlib.h>

int cargar(int v[]);
int burbuja(int v[]);
void seleccion(int v[]);
int simple(int v[]);
void QuickSort(int v[]);
int MergeSort(int v[]);




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
  printf("*****************************************************");
  
  switch(opcion)
  {
  	case 1: cargar(v);
  			break;
  	case 2:  burbuja(v);
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

int cargar(int v[])
{
	
}
int burbuja(int v[])
{
	
}
void seleccion(int v[])
{
	
}
int simple(int v[])
{
	
	
}
void QuickSort(int v[])
{
	
	
}
int MergeSort(int v[])
{
	
	
}



