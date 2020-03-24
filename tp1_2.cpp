#include<stdio.h>
int cuadradoNumero(int numero){
	int resultado;
	resultado = numero * numero;
	return resultado;
}
void cuadradoNumero2(int numero){
	int resultado;
	resultado = numero * numero;
	printf("\nEL CUADRADO DEL NUMERO 4 ES: %d", resultado);
}
void mostrarVariable(int numero){
	printf("\nLA DIRECCION DE LA VARIABLE ES: %p", &numero);
	printf("\nEL CONTENIDO DE LA VARIABLE ES: %d", numero);
}
void invertirValores(int numero, int numero2){
	int aux;
	
	aux = numero;
	numero = numero2;
	numero2 = aux;
	printf("\nLOS VALORES DE NUM1 Y NUM2 SON: %d Y %d || INVERTIDOS SON: %d Y %d", aux, numero, numero, numero2);
}
void menorMayor(int numero, int numero2){
	if(numero > numero2){
		printf("\nLOS VALORES DE NUM1 Y NUM2 SON: %d - %d", numero, numero2);
	}else{
		printf("\nLOS VALORES DE NUM1 Y NUM2 SON: %d - %d", numero2, numero);
	}	
}
int main(){
	int numero = 4;
	int numero2 = 2;
	
	printf("\nEL CUADRADO DEL NUMERO 4 ES: %d", cuadradoNumero(numero));
	cuadradoNumero2(numero);
	mostrarVariable(numero);
	invertirValores(numero, numero2);
	menorMayor(numero2, numero);
	
return 0;
}
