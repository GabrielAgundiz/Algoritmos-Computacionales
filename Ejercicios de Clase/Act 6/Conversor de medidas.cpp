//Aplicación que convierte de pies a metros y libras a kilogramos

#include<iostream>
#include<stdio.h>

main(){
	float p,m,lb,kg;
	printf("Este es un programa que convierte las medidas de un objeto de pies a metros y libras a kilogramos \n");
	printf("Ingresa la longitud del objeto en pies:");
	scanf("%f",&p);	
	printf("Ingresa eel peso del objeto en libras:");
	scanf("%f", &lb);	
	m=p*0.3048;
	kg=lb*0.45359;
	printf("La longitud del objeto en metros es: %f", m);
	printf("\n");
	printf("El peso del objeto en kilogramos es: %f", kg);	

}
