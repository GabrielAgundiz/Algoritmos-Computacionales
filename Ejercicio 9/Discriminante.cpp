//Este es un programa que calcula el discriminante de una ecuacion//
#include<iostream>
#include<stdio.h>
#include<math.h>

main(){
	float A,B,C,D;
	printf("Este es un programa que calcula el discriminante de una ecuacion \n");
	printf("Tomando en cuenta que la ecuacion es en forma Ax^2+Bx+C \n");
	printf("Ingresa la A de la ecuacion: ");
	scanf("%f",&A);	
	printf("Ingrese la B de la ecuacion: ");
	scanf("%f",&B);
	printf("Ingrese la C de la ecuacion: ");
	scanf("%f",&C);		
	D=(pow(B,2))-(4*A*C);
	printf("El Discriminante de la ecuacion es: %f", D);
	}
