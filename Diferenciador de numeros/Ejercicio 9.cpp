#include<stdio.h>
#include<conio.h>
#include<math.h>

main(){
	int n1,n2,n3,mayor,menor;
	printf("Ingresa el primer numero: ");
	scanf("%d",&n1);
	printf("Ingresa el segundo numero: ");
	scanf("%d",&n2);
	printf("Ingresa el tercer numero: ");
	scanf("%d",&n3);
	if (n1>n2){
		mayor=n1;
		menor=n2;
	}
	else {
		menor=n1;
		mayor=n2;
	}
	if(mayor>n3){
		if(menor>n3){
		menor=n3;
		}
	}
	else {
		mayor=n3;
		}

	
	printf("El numero mayor es: %d",mayor);
	printf("\nEl numero menor es: %d",menor);
}
