#include<stdio.h>

main(){
	float vms,vkh;
	printf("Ingrese la velocidad en metros por segundo: ");
	scanf("%f",&vms);
	vkh=(vms*1000)/3600;
	printf("La velocidad en kilometros por hora es: %f",vkh);
}
