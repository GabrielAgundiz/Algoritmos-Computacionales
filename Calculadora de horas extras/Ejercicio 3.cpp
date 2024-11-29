#include<stdio.h>
#include<conio.h>
#include<math.h>
main (){
	char nom[40];
	float s,ht,he;
	int depto;
	printf("\nPrograma que calcula sueldo de los empleados");
	printf("\nNombre Completo: ");
	scanf("%[^\n]s",&nom);
	printf("\nIngresa el numero de horas totales: ");
	scanf("%f",&ht);
	if(ht>160){
		he=ht-160;
	}
	else{
		he=0;
	}
	s=150*160+he*165;
	
	printf("Empleado: %s",nom);
	printf("\n Sueldo: %.2f pesos",s);
	getche();
}
