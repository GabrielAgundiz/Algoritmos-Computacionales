#include<stdio.h>

void entrada();
void salida();
void sumac();
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
	sumac();
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

void sumac(){
	for(j=1;j<=f;j++){
		suma=0;
		for(i=1;i<=f;i++){
			suma=suma+m[i][j];	
		}
		printf("\nLa suma de los datos de la columna %d es: %d",j,suma);
	}
}
