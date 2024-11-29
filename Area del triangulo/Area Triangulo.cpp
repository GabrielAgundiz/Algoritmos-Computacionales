//Este es un programa que calcula el area de un triangulo//

#include<iostream>
#include<stdio.h>
#include<math.h>
main(){
	double l1,l2,l3,s,A;
	printf("Este es un programa que calcula el area de un triangulo \n");
	printf("Ingresa el primer lado del triangulo: ");
	scanf("%lf",&l1);	
	printf("Ingresa el segundo lado del triangulo: ");
	scanf("%lf",&l2);	
	printf("Ingresa el tercer lado del triangulo: ");
	scanf("%lf",&l3);		
	s=((l1+l2+l3)/2.0);
	A=sqrt(s*(s-l1)*(s-l2)*(s-l3));
	printf("El area del triangulo es: %lf", A);	
}
