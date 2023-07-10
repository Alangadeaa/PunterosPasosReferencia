Punteros y paso por referencia
1) Ingresar por teclado 5 números cualesquiera y luego por medio de una función con punteros ordenarlos.

2) Quedando el menor en la variable a, el segundo menor en la b y así sucesivamente
Decir que devuelve el siguiente programa, comentar cada instrucción.

#include <stdio.h>
int main() {
	int x, *y;
	x=10;
	y=&x;
    printf("%d %d %d",y,*y,&y );
	return 0;
}
 
3) Decir que devuelve el siguiente programa, mencionar si hay algo extraño en el mismo y comentar cada instrucción.
   
#include <stdio.h>
void carga (int n, int Vector[]);
void imprimir (int n, int Vector[]);
 
int main()
{
int n=5;
           	int V[n];
carga (n,V);
	       	imprimir (n,V);
           	printf("\n");
           	for (int i=0; i<n; i++){
    	                   	printf("%5d",V[i]);
	       	}
	       	return 0;
}
void carga (int n, int Vector[]){
           	 int i;
           	 for (i=0; i<n; i++){
    	                   	printf("ingrese el valor de la posicion %d: ",i);
    	                   	scanf("%d",&Vector[i]);
           	  }
}
void imprimir (int n, int Vector[]){
           	 for (int i=0; i<n; i++){
  	                     	 printf("\n %5d",Vector[i]);
	       	}
           	 printf("\n");
}

4) Decir que devuelve el siguiente programa, mencionar si hay algo extraño en el mismo y comentar cada instrucción.
   
#include <stdio.h>
void carga (int n, int Vector[]);
void imprimir (int n, int Vector[]);
void ordenar (int n, int Vector[]);
int main()
{
int n=5;
int V[n];
carga (n,V);
imprimir (n,V);
ordenar (n,V);
imprimir (n,V);
 
           	printf("\n");
           	for (int i=0; i<n; i++){
    	                   	printf("%5d",V[i]);
	       	}
	       	return 0;
}
void carga (int n, int Vector[]){
           	for (int i=0; i<n; i++){
    	                   	printf("ingrese el valor de la posicion %d: ",i);
    	                   	scanf("%d",&Vector[i]);
           	  }
}
void imprimir (int n, int Vector[]){
           	for (int i=0; i<n; i++){
  	                     	 printf("\n %5d",Vector[i]);
	       	}
           	 printf("\n");
}
void ordenar (int n, int Vector[]){
           	int aux;
           	for (int i=0; i<n; i++){
           	    for (int j=0; j<n; j++){
           	        if (Vector[i]>Vector[j]){
           	           aux=Vector[i];
           	           Vector[i]=Vector[j];
           	           Vector[j]=aux;
           	        }
 	      	}
           	}
           	 printf("\n");
}

5) Decir que devuelve el siguiente programa, mencionar si hay algo extraño en el mismo y comentar cada instrucción.
 
#define N 10
#include <stdio.h>
void leer_matriz(int A[N][N], int filas, int columnas);
void escribir_matriz(int A[N][N], int filas, int columnas);
void multiplicar(int A[N][N], int B[N][N], int C[N][N], int m, int n, int p);
int main ()  {
 int m, n, p;
 int A[N][N], B[N][N], C[N][N];
           	printf("\n Datos de la Matriz A: \n"); 
printf("Filas: ");                           	scanf("%d", &m);
           	printf("Columnas: "); 	scanf("%d", &n);
leer_matriz(A, m, n);
           	printf("\n Datos de la Matriz B: \n");
printf("Columnas: ");	            	scanf("%d", &p);
leer_matriz(B, n, p);
printf("\n Matriz A:\n");  escribir_matriz(A, m, n);
    	printf("\n Matriz B: \n");  escribir_matriz(B, n, p);
    	multiplicar(A, B, C, m, n, p);
    	printf("\n Matriz AxB: \n");   escribir_matriz(C, m, p);
}
void leer_matriz(int A[N][N], int filas, int columnas) {
           	int i, j;
 for (i=0; i<filas; i++)  {
                           	for (j=0; j<columnas; j++)  {
                                           	printf("Ingresa la entrada [%d][%d]: ", i+1, j+1);
                                           	scanf("%d", &A[i][j]);
                           	}
           	}
}
void escribir_matriz(int A[N][N], int filas, int columnas)
{
 int i, j;
 for (i=0; i< filas; i++)  {
                           	for (j=0; j<columnas; j++)   {
                                           	printf("\t%d", A[i][j]);
                           	 }
                           	printf("\n");
 }
}
void multiplicar (int A[N][N], int B[N][N], int C[N][N], int m, int n, int p) {
           	int i, j, k;
 //limpiar o inicializar matriz C
           	for(i=0; i< m; i++)
                           	for(k=0; k< p; k++)
                                           	C[i][k]=0;
  
                           	for (i=0; i< m; i++)
                                           	for (j=0; j< n; j++)
                                                          	 for (k=0; k< p; k++)
                                                                          	 C[i][k] = C[i][k] + A[i][j]*B[j][k];
}


6) Realizar un programa que tenga las siguientes funciones sobre matrices carga, escritura, suma, multiplicación entre matrices, determinante, transpuesta. Realizar un menú acorde al mismo (que sea recurrente y me permita realizar otras acciones)
