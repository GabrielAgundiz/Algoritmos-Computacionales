#include<stdio.h>
#include<math.h>
main(){
	int op,y;
	float fx;
	printf("Ingrese la expresion de la que quiere encontrar f(x)");
	printf("\n 1- y^3 \n 2- (y^2 - 14)/(y^3) \n 3- (y^3)+5 \n 4- y^(1/2) \n");
	scanf("%d",&op);
	printf("Ingrese la variable y para la que quiere encontrar f(x) \n");
	scanf("%d",&y);
	
	switch(op){
		case 1: fx=y*y*y; printf("En la funcion y^3, para la variable %d ,f(x) es %f",y,fx);break;
		case 2: fx=(y*y - 14)/(y*y*y);printf("En la funcion (y^2 - 14)/(y^3), para la variable %d ,f(x) es %f",y,fx);break;
		case 3: fx=(y*y*y)+5;printf("En la funcion (y^3)+5, para la variable %d ,f(x) es %f",y,fx);break;
		case 4: fx=sqrt(y);printf("En la funcion y^(1/2), para la variable %d ,f(x) es %f",y,fx);break;
		default: printf("La opcion es erronea, no se puede ejecutar el programa");
	}
	
}
