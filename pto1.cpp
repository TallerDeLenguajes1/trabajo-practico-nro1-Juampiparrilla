#include<stdio.h>

int main(){
	int *puntero,variable=50;
	puntero=&variable;
	
	printf("El contenido del puntero es: %d \n" , *puntero);
	printf("La direccion de la variable %p \n", &variable);
	printf("La direccion de memoria almacenada por el puntero : %p\n",puntero);
	printf("La direccion de memoria del puntero : %p\n", &puntero);	
	printf("tamaño de la variable en bytes: %d\n",sizeof(puntero));
	
	
	return 0;
}
