//Recibo de luz//
#include<stdio.h>
main(){
	char nom[15]; //Declaraci�n de la variable tipo caracter//
	int cons; //Declaraci�n de variable tipo entera//
	float tar,pago; //Declaraci�n de variable tipo real//
	printf("Ingresa el nombre del cliente:");
	scanf("&s",nom);
	printf("Ingresa el consumo kilowatt hora:");
	scanf("%d",&cons);
	printf("Ingresa la tarifa del kilowatt:");
	scanf("%f",&tar);
	pago=cons*tar;
	printf("El pago del cliente %s es de $%f", nom, pago);
}
