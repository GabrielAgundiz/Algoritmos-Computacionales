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
	printf("Teclea su nivel de empleo: \n 1-Directivo \n 2-Administrativo \n 3-Tecnico \n 4-Operador \n 5-Mantenimiento");
	scanf("%d",&depto);
	if(ht>20){
		he=ht-20;
	}
	else{
		he=0;
	}
	switch(depto){
		case 1: s=250*20+he*200; break;
		case 2: s=188*20+he*200; break;
		case 3: s=150*20+he*180; break;
		case 4: s=135*20+he*180; break;
		case 5: s=128*20+he*150;break;
	}
	printf("Empleado: %s",nom);
	printf("\n Sueldo: %.2f pesos",s);
	getche();
}
