/*Ejercicio 20*/
#include<stdio.h>

void entrada();
void mayores();
void menores();
void promedio();

int num[50], i, N;
float suma,prom;

main(){
	entrada();
	promedio();
	mayores();
	menores();

}

void entrada(){
	do{
		printf("Cantidad de numeros a almacenar en el arreglo:");
		scanf("%d",&N);
	} while(N<=1);
	
	for (i=1; i<=N;i++){
		printf("\nIngresa el dato en el arreglo: ");
		scanf("%d", &num[i]);
	}
}

void promedio(){
	suma=0.0;
	for (i=1; i<=N;i++){
		suma=suma+num[i];
	}
	prom=suma/N;
	printf("\nEl promedio de los numeros es: %f",prom);
}

void mayores(){
	for (i=1; i<=N;i++){
		if (num[i]>prom){
			if (num[i]%2==0){
				printf("\nEl numero %d es mayor y par",num[i]);
			}
			else{
				printf("\nEl numero %d es mayor e impar",num[i]);
			}
		}
	}
}

void menores(){
	for (i=1; i<=N;i++){
		if (num[i]<prom){
			if (num[i]%2==0){
				printf("\nEl numero %d es menor y par",num[i]);
			}
			else{
				printf("\nEl numero %d es menor e impar",num[i]);
			}
		}
	}	
}

