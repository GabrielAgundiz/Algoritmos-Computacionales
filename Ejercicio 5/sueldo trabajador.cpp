//Este es un programa que calcula el sueldo de los trabajadores de una empresa//
#include<iostream>
#include<stdio.h>
#include<math.h>

main(){
	float d,s;
	char n[40],c[40];
	printf("Este es un programa que calcula el sueldo de los trabajadores de una empresa \n");
	printf("Ingrese el nombre del trabajador: ");
	scanf("%s",n);	
	printf("Ingrese el cargo del trabajador: ");
	scanf("%s",c);	
	printf("Ingrese los dias de trabajo realizados por el trabajador: ");
	scanf("%f",&d);		
	s=d*80;
	printf("El nombre del trabajador es: %s", n);
	printf("\n");
	printf("El cargo del trabajador es: %s", c);
	printf("\n");
	printf("El salario del trabajador es: %f", s);
		
}
