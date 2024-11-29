//Este es un programa que convierte los litros a mililitros, centilitros y decalitros//
#include<iostream>
#include<stdio.h>

main(){
	float l, ml,cl,dl;
	printf("Este es un programa que conveirte los litros a mililitros, centilitros y decalitros \n");
	printf("Ingrese los litros a convertir: ");
	scanf("%f",&l);
	ml=l*1000;
	cl=l*100;
	dl=l*10;
	printf("La cantidad convertida a mililitros es: %f \n",ml);
	printf("La cantidad convertida a centilitros es: %f \n",cl);
	printf("La cantidad convertida a decalitros es: %f \n",dl);
	
}
