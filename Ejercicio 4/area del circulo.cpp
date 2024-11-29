//Este es un programa que calcula el area de un circulo//

#include<iostream>
#include<stdio.h>
#include<math.h>

main(){
	float r, pi,A;
	pi=3.1416;
	printf("Este es un programa que calcula el area de un circulo \n");
	printf("Ingresa el radio del circulo: ");
	scanf("%f",&r);			
	A=pi*r*r;
	printf("El area del circulo es: %f", A);	
}
