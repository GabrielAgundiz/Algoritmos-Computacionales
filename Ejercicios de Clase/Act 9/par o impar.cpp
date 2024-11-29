//Estatuto selectivo if-else
//Numero Par o impar
#include<stdio.h>
main(){
	int n,r;
	printf("Ingresa un numero entero: ");
	scanf("%d",&n);
	r=n%2;
	if (r==0){
		printf("El numero %d es par",n);
	}
	else{
		printf("El numero %d es impar",n);
	}
	
}

