//Este es un programa que calcula el area de un triangulo a partir del cateto opuesto y la hipotenusa//

#include<iostream>
#include<stdio.h>
#include<math.h>

main(){
	float h,ca,co,s,A;
	printf("Este es un programa que calcula el area de un triangulo a partir del cateto opuesto y la hipotenusa \n");
	printf("Ingrese la hipotenusa: ");
	scanf("%f",&h);
	printf("Ingrese el cateto opuesto: ");
	scanf("%f",&co);
	ca=sqrt((pow(h,2))-(pow(co,2)));
	s=(ca+co+h)/2;
	A=sqrt(s*(s-ca)*(s-co)*(s-h));
	printf("El Area del triangulo es: %f",A);
	
}
