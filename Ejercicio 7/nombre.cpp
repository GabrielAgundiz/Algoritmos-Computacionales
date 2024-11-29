//Este es un programa que te da tu nombre junto con la suma de 2 numeros//
#include<iostream>
#include<stdio.h>
#include<math.h>

main(){
	float n1,n2,nt;
	char n[40];
	printf("Este es un programa que te da tu nombre junto con la suma de 2 numeros \n");
	printf("Dame tu nombre: ");
	scanf("%s",n);	
	printf("Ingrese el primer numero de la suma: ");
	scanf("%f",&n1);
	printf("Ingrese el segundo numero de la suma: ");
	scanf("%f",&n2);		
	nt=n1+n2;
	printf("Hola, %s", n);
	printf("\n");
	printf("La suma de los numeros es: %f", nt);
	printf("\n");
	}
