//Este es un programa que calcula la temperatura la temperatura promedio de la semana //
#include<iostream>
#include<stdio.h>
#include<math.h>

main(){
	float tl,tm,tmi,tj,tv,ts,td,tp,tf,tk;
	printf("Este es un programa que calcula temperatura la temperatura promedio de la semana \n");
	printf("Ingrese la temperatura del Lunes: ");
	scanf("%f",&tl);	
	printf("Ingrese la temperatura del martes: ");
	scanf("%f",&tm);	
	printf("Ingrese la temperatura del miercoles: ");
	scanf("%f",&tmi);		
	printf("Ingrese la temperatura del jueves: ");
	scanf("%f",&tj);	
	printf("Ingrese la temperatura del viernes: ");
	scanf("%f",&tv);	
	printf("Ingrese la temperatura del sabado: ");
	scanf("%f",&ts);
	printf("Ingrese la temperatura del domingo: ");
	scanf("%f",&td);
	tp=(tl+tm+tmi+tj+tv+ts+td)/7;
	tf=tp*(9/5)+32;
	tk=tp+273.15;
	printf("La temperatura promedio de la semana en grados celcius es: %f", tp);
	printf("\n");
	printf("La temperatura promedio de la semana en grados farhenheit es: %f", tf);
	printf("\n");
	printf("La temperatura promedio de la semana en grados kelvin es: %f", tk);
	}
