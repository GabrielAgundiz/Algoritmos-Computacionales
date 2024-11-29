//Aplicación que convierte el area de un terreno en acres a hectareas

#include<iostream>
#include<stdio.h>

main(){
	float a,mc,h;
	printf("Este es un programa que convierte el area de un terreno en acres a hectareas \n");
	printf("Ingresa el area del terreno en acres: ");
	scanf("%f",&a);		
	mc=a*4047;
	h=mc/10000;
	printf("El area del terreno en hectareas es: %f", h);
	printf("\n");	

}
