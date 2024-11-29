#include<stdio.h>
#include<conio.h>
#include<math.h>
main (){
	char nom[40];
	float t,cant;
	int zona;
	printf("\nPrograma que calcula el recibo de agua de un cliente");
	printf("\nNombre Completo del cliente: ");
	scanf("%[^\n]s",&nom);
	printf("\nIngrese el consumo en metros cubicos: ");
	scanf("%f",&cant);
	printf("Teclea la zona: \n 1-Monterrey \n 2-San Nicolas \n 3-Sta. Catarina \n 4-Escobedo \n");
	scanf("%d",&zona);	
	if(cant<=20){
		t=50.0;
	}
	if(cant>20){
	switch(zona){
		case 1: t=3.00*cant; break;
		case 2: t=3.25*cant; break;
		case 3: t=2.75*cant; break;
		case 4: t=2.85*cant; break;
		default: printf("La zona no existe, el recibo no puede continuar");
	}
	}
	printf("Cliente: %s",nom);
	printf("\n El pago del cliente es de: %.2f pesos",t);
	getche();
}
