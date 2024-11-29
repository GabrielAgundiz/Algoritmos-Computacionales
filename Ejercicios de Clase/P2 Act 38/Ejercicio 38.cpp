#include<stdio.h>

void entrada();
void salida();
void sumaf();
int m[10][10],i,j,f,c,suma;

main(){
	do{
		printf("No. Filas: ");
		scanf("%d",&f);
		printf("No. Columnas: ");
		scanf("%d",&c);
	}while(f!=c);
	entrada();
	salida();
	sumaf();
}

void entrada(){
	for (i=1;i<=f;i++){
		for(j=1;j<=c;j++){
			printf("Ingrese el dato: ");
			scanf("%d",&m[i][j]);
		}
	}
}

void salida(){
	printf("Los datos de la matriz son: \n");
	for(i=1;i<=f;i++){
		for(j=1;j<=c;j++){
				printf("%d\t",m[i][j]);
		}
	printf("\n");

	}
}

void sumaf(){
	for(i=1;i<=f;i++){
		suma=0;
		for(j=1;j<=f;j++){
			suma=suma+m[i][j];	
		}
		printf("\nLa suma de los datos de la fila %d es: %d",i,suma);
	}
}
