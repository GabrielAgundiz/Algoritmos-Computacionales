/*Ejercicio 21 */
/*Uso de estatuto switch*/
#include<stdio.h>
main(){
	char nom[45];
	int cons, zona;
	float pago;
	printf("Nombre del cliente: ");
	scanf("%s",nom);
	printf("\nConsumo de Kilowatt: ");
	scanf("%d",&cons);
	printf("Zona de area metropolitana: \n 1- Monterrey \n 2- San Pedrio \n 3- San Nicolas \n 4/ Guadalupe");
	printf("Zona donde radica el cliente: ");
	scanf("%d",&zona);
	switch(zona){
		case 1: pago=cons*0.85; break;
		case 2: pago=cons*0.90; break;
		case 3: pago=cons*0.87; break;
		case 4: pago=cons*0.82; break;
	}
	if(zona>=1 && zona<=4){
		printf("El pago del cliente %s es de: $ %.2f",nom,pago);
	}
	else{
		printf("\nEl pago del cliente %s no se puede calcular, porque la zona no existe",nom);
	}
}
