#include<stdio.h>
//Desarrollo del pto i , ii y iii 

int cuadrado(int a);		
void cuadradovoid(int a); // utilizando una funcion tipo void

int main(){
	int numero,aux;
	printf(" Ingrese un numero:");
	scanf( "%d",&numero);
	//cuadradovoid(numero);
	aux=cuadrado(numero);
	printf(" El numero al cuadrado es:%d \n",aux);	
	printf("El contenido de variable:%d\n ",numero); // Muestra el contenido de la variable
	printf("La direccion de variable:%p\n",&numero); // Muestra el direccion de la variable
	
	return 0;
}
int cuadrado(int a){
	int aux;
	aux=a*a;	
	return aux;
	
}


void cuadradovoid(int a){
	int aux;
	aux=a*a;
	printf("El numero al cuadrado es:%d",aux);
}	
