//Programa que al recibir como entrada la calificacion del servicio de comida rapida, imprima la evaluacion//
#include<iostream>
#include<stdio.h>

main(){
	float cal,cals,calc,cali,cale,prom;
	printf("Este es un programa que al recibir como entrada la calificacion del servicio de comida rapida, imprima la evaluacion \n");
	printf("Ingrese la calificacion del servicio: ");
	scanf("%f",&cals);
	printf("Ingrese la calificacion de la comida: ");
	scanf("%f",&calc);
	printf("Ingrese la calificacion de las instalaciones: ");
	scanf("%f",&cali);
	printf("Ingrese la calificacion del estacionamiento: ");
	scanf("%f",&cale);
	cal=(cals+calc+cali+cale)/4;
	printf("Ingrese la calificacion general es: %f",cal);	
	if(cal<100 && cal>90){
		printf("\nLa calificacion del servicio es excelente");
	}
	else if(cal<91 && cal>70){
		printf("\nLa calificacion del servicio es bueno");
		}
	else if (cal<71 && cal>50){
		printf("\nLa calificacion del servicio es regular");
		}
	else{
		printf("\nLa calificacion del servicio es mala");
		}
	}

