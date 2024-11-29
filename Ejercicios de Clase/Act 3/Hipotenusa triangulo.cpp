//Aplicación que calcula la hipotenusa de un triangulo

#include<iostream>
#include<stdio.h>

main(){
	float c1,c2,h;
	printf("Este es un programa que calcula la hipotenusa de un triangulo \n");
	printf("Ingresa el primer cateto del triangulo:");
	scanf("%f",&c1);	
	printf("Ingresa el segundo cateto del triangulo:");
	scanf("%f", &c2);	
	h=(c1*c1+c2*c2)^(1/2);
	printf("La hipotenusa del triangulo es:%f", h,);
}
