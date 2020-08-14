#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
int cargar(int orden,int v[]);
int burbuja(int orden, int v[]);
int insercion(int orden,int v[]);
int seleccion(int v[]);
int QuickSort(int orden,int v[], int *A, int izq, int der);
int MergeSort(int orden, int v[]);
int Mostrar(int orden,int v[]);
int copiar(int orden,int v[],int k[]);
int copiar(int orden,int v[],int k[])
{
	for(int i=0;i<orden;i++)
	k[i]=v[i];
}
int Mostrar(int orden,int v[])
{
	        int i;
	        
			for(i=0; i<orden ; i++)
			{
				printf("%d ",v[i]);

}			}

int cargar(int orden,int v[])  ///carga del vector
{
	        int i;
	        srand(time(NULL));
			for(i=0; i<orden ; i++)
			{
				v[i]=rand();
			}
			
}
int burbuja(int orden, int v[])  /// aki empieza metodo de la burbuja mejorada 
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

int insercion(int orden,int v[])	  /// aki empieza el metodo de insercion
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
int seleccion(int orden, int v[])  /// aki empieza el metodo de seleccion
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
int QuickSort( int v[], int izq, int der) /// aki empieza el metodo de QuickSort
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
int MergeSort(int orden, int v[])  ///aki empieza el metodo de MergeSort
{
  	// Declaracion de variables
    ///int i, j, k;
    ///int n_1 = (q - p) + 1;
    //int n_2 = (r - q);
    //int *L, *R;

    // Asignacion de memoria
    //L = (int*)malloc(n_1 * sizeof(int));
    //R = (int*)malloc(n_2 * sizeof(int));

    // Copia de datos del arreglo A en los subarreglos L y R
    //for (i = 0; i < n_1; i++)
    //{
      //  L[i] = *(array + p + i);
    //}

    //for (j = 0; j < n_2; j++)
    //{
        //R[j] = *(array + q + j + 1);
    //}

    //i = 0;
    //j = 0;

    // Fusion de datos respetando el valor minimos entre dos arreglos
    ///for (k = p; k < r + 1; k++)
    //{
        ///if (i == n_1)
        //{
            //*(array + k) = *(R + j);
            //j =  j+ 1;
        //}
        //else if(j == n_2)
        //{
            //*(array + k) = *(L + i);
            ///i = i + 1;
        //}
        //else
        //{
           // if (*(L + i) <= *(R + j))
            //{
              //  *(array + k) = *(L + i);
                //i = i + 1;
            //}
            //else
            //{
               // *(array + k) = *(R + j);
                //j = j + 1;
            //}
        //}
    //}
	
}
