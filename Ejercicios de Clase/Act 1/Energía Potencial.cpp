//Programa para calcular la energía potencial de un objeto//

#include<iostream>
#include<stdio.h>

main(){
	float Epot, m, h, g; 
	g=9.18;
	printf("Este es un programa que calcula la energia potencial de un objeto \n");
	printf("Ingresa la altura del objeto:");
	scanf("%f", &h);
	printf("Ingresa la masa del objeto:");
	scanf("%f",&m);
	Epot=m*g*h;
	printf("La energía portencial del objeto es:%f", Epot);
}
