#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>

int cargar(int orden,int v[]);
int burbuja(int orden, int v[]);
int insercion(int orden,int v[]);
int seleccion(int orden, int v[]);
int QuickSort(int orden,int v[], int izq, int der);
void mergeSort(int arr[], int l, int r);
void merge(int arr[], int l, int m, int r);
int Mostrar(int orden,int v[]);
int copiar(int orden,int v[],int k[]);
int copiar(int orden,int v[],int k[]) /*Copia del vector a ordenar*/
{
	for(int i=0;i<orden;i++)
	k[i]=v[i];
}
int Mostrar(int orden,int v[]) /*Muestra del vector*/
{
	        int i;
	        printf("\n\n");
			for(i=0; i<orden ; i++)
			{
				printf("%d ",v[i]);
			}
}			

int cargar(int orden,int v[])  /*carga del vector*/
{
	        int i;
	        srand(time(NULL));
			for(i=0; i<orden ; i++)
			{
				v[i]=rand();
			}
			
}
int burbuja(int orden, int v[])  /*aki empieza metodo de la burbuja mejorada*/
{
	int i, j, aux;
	for(i=0; i<orden; i++)
  	{
  	    for(j=0; j<orden; j++)	
  	   {
  	       if(v[j] > v[j+1])
		     { 
			  aux = v[j];
			  v[j] = v[j+1];
			  v[j+1] = aux;
		     }  
		}	
  	}
}

int insercion(int orden,int v[])	  /*aki empieza el metodo de insercion*/
{
	
  int i,pos, aux;
  
  for(i=0;i<orden;i++)
  {
  	pos = i; 
  	aux = v[i];
  	
  	while((pos>0) && (v[pos-1] > aux))
  	      {
  	      	v[pos] = v[pos-1];
	  	    pos--;
		  }
  	v[pos] = aux;
  }
  
      
	
}
int seleccion(int orden, int v[])  /*aki empieza el metodo de seleccion*/
{

  int i,j, aux,min;
  
  for(i=0;i<orden;i++)
  {
  	min = i;
  	for(j=i+1;j<orden;j++)
  	{
  	  if(v[j] < v[min])
		{
		  min = j;	
		}
				
	}
  	  aux = v[i];
  	  v[i] = v[min];
  	  v[min] = aux;
  	  
  }    
  
  
}
int QuickSort( int v[], int izq, int der) /*aki empieza el metodo de QuickSort*/
{




	int piv = v[(izq + der) / 2];
 int i = izq;
 int j = der;
 int aux;

 while (i <= j) {
  while (v[i] < piv ) i++;
  while (v[j] > piv) j--;
  if (i <= j) {
   aux  = v[i];
   v[i] = v[j];
   v[j] = aux;
   i++;
   j--;
  }
 }

 
 if (izq<j )
 QuickSort( v, izq, j);
 if (i < der)
  QuickSort(v, i, der);
	
}

void merge(int arr[], int l, int m, int r) /* aki empieza el metodo de MergeSort*/
{ 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 = r - m; 
  
    
    int L[n1], R[n2]; 
  
    
    for (i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[m + 1 + j]; 
  
    
    i = 0;  
    j = 0;
    k = l;  
    while (i < n1 && j < n2) { 
        if (L[i] <= R[j]) { 
            arr[k] = L[i]; 
            i++; 
        } 
        else { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
  
    
    while (i < n1) { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
  
    
    while (j < n2) { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
} 
void mergeSort(int arr[], int l, int r) 
{ 
    if (l < r) { 
        
        int m = l + (r - l) / 2; 
  
         
        mergeSort(arr, l, m); 
        mergeSort(arr, m + 1, r); 
  
        merge(arr, l, m, r); 
    } 
}  
    
    
    
    
    
    
    
    
	
	
	
	

