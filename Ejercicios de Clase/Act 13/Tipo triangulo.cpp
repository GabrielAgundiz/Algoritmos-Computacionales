/*Ejercicio 13*/

#include<stdio.h>
main(){
	int a,b,c;
	printf("2109526 Gabriel Gerardo Agundiz Haros");
	printf("\nPrograma que lee los datos de un triangulo e imprime si es equilatero, isosceles O escaleno");
	printf("\nIngrese la medida del primer lado: ");
	scanf("%d",&a);
	printf("\nIngrese la medida del segundo lado: ");
	scanf("%d",&b);
	printf("\nIngrese la medida del tercer lado: ");
	scanf("%d",&c);	
	if (a==b&&b==c&&c==a){
		printf("EL triangulo es equilatero");
	}
	else {
		if(a!=b&&b!=c&&c!=a){
			printf("El triangulo es escaleno");
		}
		else{
			printf("El triangulo es isosceles");
		}
	}
}
