/*Programa de clase*/
/*Leer numeros enteros y mostrrar cuantos son pares y cuantos son impares*/
/*Uso de controladores*/
#include<stdio.h>
main(){
	int N,num,contp,conti,i,sumap,sumai;
	do{
		printf("Total de numeros a leer: ");
		scanf("%d",&N);
	}
	while(N<=1);
	contp=0;
	conti=0;
	sumap=0;
	sumai=0;
	for(i=1;i<=N;i++){
		printf("Ingresa un numero entero: ");
		scanf("%d",&num);
		if(num%2==0){
			sumap=sumap+num;//suma numeros impares//
			contp=contp+1;//contador numeros pares//
		}
		else{
			sumai=sumai+num;//suma numeros impares//
			conti=conti+1;//contador numeros impares//
		}
	}
		printf("La suma de los numeros pares es %d",sumap);
		printf("\nLa cantidad de numeros pares es %d",contp);
		printf("\nLa suma de los numeros impares es %d",sumai);
		printf("\nLa cantidad de numeros impares es %d",conti);
		
}
