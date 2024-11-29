/*Programa 12*/
#include<stdio.h>

main(){
	int n1,n2,n3,n4,n5,mayor,menor;
	printf("Ingresa el primer numero: ");
	scanf("%d",&n1);
	printf("Ingresa el segundo numero: ");
	scanf("%d",&n2);
	printf("Ingresa el tercer numero: ");
	scanf("%d",&n3);
	printf("Ingresa el cuarto numero: ");
	scanf("%d",&n4);
	printf("Ingresa el quinto numero: ");
	scanf("%d",&n5);	
	if (n1>n2){
		mayor=n1;
		menor=n2;
	}
	else{
		mayor=n2;
		menor=n1;
	}
	if(mayor>n3){
		if(menor>n3){
			menor=n3;
		}
	}
	else{
		mayor=n3;
	}
	if(mayor>n4){
		if(menor>n4){
			menor=n4;
		}
	}
	else{
		mayor=n4;
	}	
	if(mayor>n5){
		if(menor>n5){
			menor=n5;
		}
	}
	else{
		mayor=n5;
	}
	printf("El numero mayor es: %d\n",mayor);
	printf("El numero menor es: %d",menor);	
}

