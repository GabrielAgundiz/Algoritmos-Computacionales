#include<stdio.h>
#include<conio.h>
#include<math.h>
main (){
	char nom[40];
	float t,des;
	int art,cant;
	printf("\nPrograma que calcula pago de un cliente");
	printf("\nNombre Completo del cliente: ");
	scanf("%[^\n]s",&nom);
	printf("Teclea el articulo a comprar: \n 1-Libreta \n 2-Pluma \n 3-Lapiz \n 4-Borrador \n 5-Sacapuntas \n");
	scanf("%d",&art);
	printf("\nIngrese la cantidad a comprar del articulo: ");
	scanf("%d",&cant);	
	des=1;
	if(cant>=10 && cant<=25){
		des=0.85;
	}
	if(cant>25){
		des=0.75;
	}
	switch(art){
		case 1: t=8.5*cant*des; break;
		case 2: t=2.5*cant*des; break;
		case 3: t=2.0*cant*des; break;
		case 4: t=1.5*cant*des; break;
		case 5: t=1.0*cant*des; break;
		default: printf("El articulo no existe, la nota no puede continuar");
	}
	printf("Cliente: %s",nom);
	printf("\n El pago del cliente es de: %.2f pesos",t);
	getche();
}
