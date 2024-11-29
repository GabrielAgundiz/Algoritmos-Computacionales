/*Ejercicio 30*/
#include<stdio.h>
main(){
	int i,suma,n;
	printf("Hasta que numero desea sumar? \n");
	scanf("%d",&n);
	suma=0;
	for(i=1;i<=n;i++){
		suma=suma+i;
	}
	printf("La suma de los numeros del 1 al %d es: %d",n,suma);
}

