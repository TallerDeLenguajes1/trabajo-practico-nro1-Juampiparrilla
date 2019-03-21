#include<stdio.h>
#include<stdlib.h>

void intercambiar (int *numero1 , int *numero2);
void mayor (int *numero1 , int *numero2);

int main(){
	int numero1,numero2,menu;
	printf("Ingrese el Nº1:");
	scanf("%d",&numero1);
	printf("Ingrese el Nº2:");
	scanf("%d",&numero2);	
	printf("Nº INGRESADOS --> Nº1:%d  Nº2:%d \n",numero1,numero2);
	
	printf("ELIJA LA OPERACION: 1-INVERTIR 2-MAYOR 3-PAR. \n");
	scanf("%d",&menu);
	
	if(menu==1){
		intercambiar(&numero1,&numero2);	
	}else if(menu==2){
		mayor(&numero1,&numero2);
	}	 else if(menu==3){
		
	}		else printf("NUMERO DE OPERACION NO VALIDA.");
	
	return 0;
}

void intercambiar (int *numero1 , int *numero2){
	
	int *aux,*aux2;
	aux2=numero1;
	aux=numero2;
	
	//printf("p1 %d p2 %d \n",*aux,*aux2);

	numero1=aux;
	numero2=aux2;
	
	printf("Nº INVERTIDOS --> Nº1:%d  Nº2:%d \n",*numero1, *numero2);
		
}

void mayor (int *numero1 , int *numero2){
	int *aux,*aux2;
	
	aux=numero1;
	aux2=numero2;
	
	if(*aux > *aux2){	
				
		numero1 = aux;
		numero2 = aux2;
		
		printf(" menor %d mayor %d ", *numero2, *numero1);
		
	}else if(*aux < *aux2){
		numero1 = aux;
		numero2 = aux2;
		printf(" menor %d mayor %d ", *numero1 , *numero2);
	} else printf("SON IGUALES");
	
	
}
