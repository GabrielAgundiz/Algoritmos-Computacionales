//Programa en el cual ignresas el monto a pagar, para luego aplicar el descuento correspondiente//
#include<iostream>
#include<stdio.h>

main(){
	float com,des;
	printf("Este es un programa en el cual ignresas el monto a pagar, para luego aplicar el descuento correspondiente \n");
	printf("Ingrese el monto a pagar: ");
	scanf("%f",&com);
	if(com<800){
		printf("El monto a pagar es: $ %f", com);
	}
	else if(com<=1500){
		des= com*.90;
		printf("El monto a pagar es: $ %f", des);
		}
	else if (com<5000){
		des= com*.85;
		printf("El monto a pagar es: $ %f", des);
		}
	else{
		des= com* .80;
		printf("El monto a pagar es: $ %f", des);
		}
	}


