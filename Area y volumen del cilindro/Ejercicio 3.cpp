#include<stdio.h>
main(){
	float R,H,area,vol,pi;
	R=0;
	H=0;
	pi=3.1416;
	printf("Ingrese el radio: ");
	scanf("%f",&R);
	printf("Ingrese la altura: ");
	scanf("%f",&H);
	vol=pi*R*R*H;
	area=2*pi*R*H;
	printf("El area del cilindro es %f",area);
	printf("\nEl volumen del cilindro es %f",vol);
}
