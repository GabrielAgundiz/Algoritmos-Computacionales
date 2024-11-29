//Este es un programa que te da el promedio de un estudiante a partir de tres examenes, y si este aprobo o no//
#include<stdio.h>
#include<iostream>

main(){
	float e1,e2,e3,prom;
	printf("Programa que te da el promedio de un estudiante a partir de tres examenes, y si este aprobo o no");
	printf("\nIngresa la calificacion del primer examen:");
	scanf("%f",&e1);
	printf("Ingresa la calificacion del segundo examen: ");
	scanf("%f",&e2);
	printf("Ingresa la calificacion del tercer examen: ");
	scanf("%f",&e3);
	prom=(e1+e2+e3)/3;
	if (prom<70){
		printf("El promedio del alumno es: %f",prom);
		printf("\nEl alumno esta reprobado");
	}
	else{
		printf("El promedio del alumno es: %f",prom);
		printf("\nEl alumno esta aprobado");	
	}
}
