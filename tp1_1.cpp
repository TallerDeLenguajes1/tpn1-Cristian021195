#include<stdio.h>

int main(){
	int numero = 10;
	int *puntero;
	puntero = &numero;
	
	printf("\nEL CONTENIDO DEL PUNTERO ES: %d", *puntero);
	printf("\nLA DIRECCION DE MEMORIA ALMACENADA POR EL PUNTERO: %p", puntero);
	printf("\nLA DIRECCION DE MEMORIA DE LA VARIABLE: %p", &numero);
	printf("\nLA DIRECCION DE MEMORIA DEL PUNTERO: %p", &puntero);
	printf("\nLA CANTIDAD DE MEMORIA DE LA VARIABLE %d", sizeof(numero));



return 0;
}
