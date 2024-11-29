#include<stdio.h>
#include<conio.h>
#include<math.h>
main (){
	float pul,mil,yar,met,mas,kil;
	int conv;
	printf("\nPrograma que realiza una conversion de mediciones \n");
	printf("Teclea la conversion a realizar: \n 1-Pulgadas a Milimetros \n 2-Yardas a Metros \n 3-Millas a Kilometros \n");
	scanf("%d",&conv);	
	switch(conv){
		case 1: printf("Ingrese la cantidad de pulgadas que desea convertir: ");
				scanf("%f",&pul);
				mil=pul*25.4;
				printf("La conversion a milimetros son: %f",mil); 
		break;
		case 2: printf("Ingrese la cantidad de yardas que desea convertir: ");
				scanf("%f",&yar);
				met=yar*0.9144;
				printf("La conversion a metros es: %f",met);
		break;
		case 3: printf("Ingrese la cantidad de millas que desea convertir: ");
				scanf("%f",&mas);
				met=yar*1.6093;
				printf("La conversion a kilometros es: %f",kil);
		break;
		default: printf("La opcion no existe, la conversion no puede continuar");
	}
}
