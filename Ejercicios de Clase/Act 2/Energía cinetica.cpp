//Aplicación que calcula la energía cinetica de un objeto//

#include<iostream>
#include<stdio.h>

main(){
	float Ec,m,vi,vf;
	printf("Este es un programa que calcula la energia cinetica de un objeto \n");
	printf("Ingresa la masa del objeto:");
	scanf("%f",&m);	
	printf("Ingresa la velocidad inicial del objeto:");
	scanf("%f", &vi);
	printf("Ingresa la velocidad final del objeto:");
	scanf("%f", &vf);	
	Ec=0.5*m*(vf*vf-vi*vi);
	printf("La energia cinetica del objeto es:%f", Ec, " N");
}
