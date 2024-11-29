//Este es un programa que calcula el area de un trapecio//
#include<iostream>
#include<stdio.h>
#include<math.h>

main(){
	float bme,bma,h,A;
	printf("Este es un programa que calcula el area de un trapecio \n");
	printf("Ingresa la base mayor del trapecio: ");
	scanf("%f",&bma);	
	printf("Ingrese la base menor del trapecio: ");
	scanf("%f",&bme);
	printf("Ingrese la altura del trapecio: ");
	scanf("%f",&h);		
	A=((bme+bma)*h)/2;
	printf("El area del trapecio es: %f", A);
	}
