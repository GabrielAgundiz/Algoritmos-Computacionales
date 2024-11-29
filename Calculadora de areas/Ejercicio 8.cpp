//Programa que calcula el area de varias figuras//
#include<stdio.h>
#include<conio.h>
#include<math.h>
main (){
	float area,a,b,dma,dme,c,pi;
	int figura;
	printf("\nPrograma que calcula el area de varias figuras");
	printf("Teclea su nivel de empleo: \n 1-Triangulo \n 2-Rectangulo \n 3-Rombo \n 4-Trapecio \n 5-Cuadrado \n 6-Circulo");
	scanf("%d",&figura);
	switch(figura){
		case 1: 
			printf("\nIngresa el primer lado del triangulo: ");
			scanf("%f",&a);
			printf("\nIngresa el segundo lado del triangulo: ");
			scanf("%f",&b);
			area=(a*b)/2; 
			if (a=b){
			printf("\nEs un triangulo isoceles, su area es: %f",area);	
			}
			else { 
			printf("\nEs un triangulo rectangulo, su area es: %f",area);	
			}
			break;
		
		
		case 2: 
			printf("\nIngresa el primer lado del rectangulo: ");
			scanf("%f",&a);
			printf("\nIngresa el segundo lado del rectangulo: ");
			scanf("%f",&b);
			area=a*b; 
			printf("\nEl area del rectangulo es: %f",area);	
			break;

			 
		case 3:
			printf("\nIngresa la diagonal mayor del rombo: ");
			scanf("%f",&dma);
			printf("\nIngresa la diagonal menor del rombo: ");
			scanf("%f",&dme);
			area=(dma*dme)/2; 
			printf("\nEl area del rombo es: %f",area);	
			break;			
			
		
		case 4: 
			printf("\nIngresa la base mayor del trapecio: ");
			scanf("%f",&dma);
			printf("\nIngresa la base menor del trapecio: ");
			scanf("%f",&dme);
			printf("\nIngresa la altura del trapecio: ");
			scanf("%f",&c);			
			area=((dma*dme)/2)*c; 
			printf("\nEl area del trapecio es: %f",area);
			break;
		
		
		case 5: 
			printf("\nIngresa un lado del cuadrado: ");
			scanf("%f",&a);
			area=a*a; 
			printf("\nEl area del cuadrado es: %f",area);			
			break;
			
		
		case 6:
			printf("\nIngresa el radio del circulo: ");
			scanf("%f",&a);
			pi=3.1416;
			area=pi*(a*a); 
			printf("\nEl area del circulo es: %f",area);			
			break;
	}
	getche();
}
