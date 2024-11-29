//Este es un programa que convierte los kilogramos a gramos y libras//
#include<iostream>
#include<stdio.h>

main(){
	float kg,g,lb;
	printf("Este es un programa que conveirte los kilogramos a gramos y libras \n");
	printf("Ingrese los kilogramos a convertir: ");
	scanf("%f",&kg);
	g=kg*1000;
	lb=kg*2.205;
	printf("La cantidad convertida a gramos es: %f \n",g);
	printf("La cantidad convertida a libras es: %f \n",lb);
	
}
