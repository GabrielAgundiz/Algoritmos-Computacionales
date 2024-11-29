#include<stdio.h>
#include<conio.h>
#include<math.h>
main (){
	char nom[40];
	float s,ht,he;
	int depto;
	printf("\nPrograma que calcula la nomina de los empleados");
	printf("\nNombre Completo: ");
	scanf("%[^\n]s",&nom);
	printf("\nIngresa el numero de horas totales: ");
	scanf("%f",&ht);
	printf("Teclea el Numero de Departamento: \n 1-Recursos Humanos \n 2-Produccion \n 3-Sistemas \n");
	scanf("%d",&depto);
	if(ht>40){
		he=ht-40;
	}
	else{
		he=0;
	}
	switch(depto){
		case 1: s=23.25*40+he*46.50; break;
		case 2: s=25.20*40+he*50.40; break;
		case 3: s=24.30*40+he*48.60; break;
		default: printf("El Departamento no existe, la nomina no puede continuar");
	}
	printf("Empleado: %s",nom);
	printf("\n Sueldo: %.2f pesos",s);
	getche();
}
