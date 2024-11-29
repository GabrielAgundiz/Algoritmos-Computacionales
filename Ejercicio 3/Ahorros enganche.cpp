//Este es un programa que calcula los ahorros de Maria y Juan para el enganche de un carro//
#include<iostream>
#include<stdio.h>
#include<math.h>

main(){
	float je,jf,jm,jt,mo,mn,md,mt,t;
	printf("Este es un programa que calcula los ahorros de Maria y Juan para el enganche de un carro \n");
	printf("Ingrese los ahorros de Juan en el mes de Enero: ");
	scanf("%f",&je);	
	printf("Ingrese los ahorros de Juan en el mes de Febrero: ");
	scanf("%f",&jf);	
	printf("Ingrese los ahorros de Juan en el mes de Marzo: ");
	scanf("%f",&jm);		
	jt=(je+jf+jm);
	printf("Ingrese los ahorros de Maria en el mes de Octubre: ");
	scanf("%f",&mo);	
	printf("Ingrese los ahorros de Maria en el mes de Noviembre: ");
	scanf("%f",&mn);	
	printf("Ingrese los ahorros de Maria en el mes de Diciembre: ");
	scanf("%f",&md);
	mt=(mo+mn+md);	
	printf("Los ahorros totales de Juan son: %f", jt);
	printf("\n");
	printf("Los ahorros totales de Maria son: %f", mt);
	printf("\n");
	t=mt+jt;
	printf("Los ahorros totales entre los dos son: %f", t);
		
}
