#include<stdio.h>
#include<math.h>

void entrada();
void desviacion();

int num[50], i, N,suma,sumad;
float desv,prom;

main(){
	entrada();
	desviacion();
}

void entrada(){
	do{
		printf("Cantidad de numeros a almacenar en el arreglo:");
		scanf("%d",&N);
	} while(N<=1);
	
	for (i=1;i<=N;i++){
		printf("\nIngresa el dato en el arreglo: ");
		scanf("%d", &num[i]);
	}
}

void desviacion(){
	suma=0;
	for(i=1;i<=N;i++){
		suma=suma+num[i];
	}
	prom=suma/N;
	
	for(i=1;i<=N;i++){
		sumad=sumad+(num[i]-prom)*(num[i]-prom);
	}
	desv= sqrt(sumad/(N-1));
	printf("La desviacion estandar es: %f",desv);
}

