//Programa que al recibir como entrada la calificacion del servicio de comida rapida, imprima la evaluacion//
#include<iostream>
#include<stdio.h>

main(){
	float cal;
	printf("Este es un programa que al recibir como entrada la calificacion del servicio de comida rapida, imprima la evaluacion \n");
	printf("Ingrese la calificacion del servicio: ");
	scanf("%f",&cal);
	if(cal<100 && cal>90){
		printf("La calificacion del servicio es excelente");
	}
	else if(cal<91 && cal>70){
		printf("La calificacion del servicio es bueno");
		}
	else if (cal<71 && cal>50){
		printf("La calificacion del servicio es regular");
		}
	else{
		printf("La calificacion del servicio es mala");
		}
	}

