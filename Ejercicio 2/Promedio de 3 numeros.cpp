//Este es un programa que calcula el promedio de 3 numeros//

#include<iostream>
#include<stdio.h>
#include<math.h>
main(){
	float n1,n2,n3,prom;
	printf("Este es un programa que calcula el promedio de 3 numeros \n");
	printf("Ingresa el primer numero: ");
	scanf("%f",&n1);	
	printf("Ingresa el segundo numero: ");
	scanf("%f",&n2);	
	printf("Ingresa el tercer numero: ");
	scanf("%f",&n3);		
	prom=(n1+n2+n3)/3;
	printf("El promedio de los tres numeros es: %f", prom);	
}
