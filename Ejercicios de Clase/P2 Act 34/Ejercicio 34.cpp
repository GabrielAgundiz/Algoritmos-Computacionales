#include<stdio.h>

void entrada();
void principal();
int i,j,f,c,suma,m[10][10];

main(){
	do{
		printf("No. Filas: ");
		scanf("%d",&f);
		printf("No. Columnas: ");
		scanf("%d",&c);
	}while(f!=c);
	entrada();
	principal();
}

void entrada(){
	for (i=1;i<=f;i++){
		for(j=1;j<=c;j++){
			printf("Ingrese el dato: ");
			scanf("%d",&m[i][j]);
		}
	}
}

void principal(){
	printf("Los datos de la diagonal principal son: \n");
	suma=0;
	for(i=1;i<=f;i++){
		for(j=1;j<=c;j++){
			if(i==j){
				printf("%d\n",m[i][j]);
				suma=suma+m[i][j];
			}
		}
	}
	printf("La suma de los datos de la diagonal principal es: %d",suma);
	
}

