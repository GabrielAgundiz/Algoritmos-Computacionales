#include<stdio.h>

void entrada();
void secundaria();
int m[10][10],i,j,f,c,suma;

main(){
	do{
		printf("No. Filas: ");
		scanf("%d",&f);
		printf("No. Columnas: ");
		scanf("%d",&c);
	}while(f!=c);
	entrada();
	secundaria();
}

void entrada(){
	for (i=1;i<=f;i++){
		for(j=1;j<=c;j++){
			printf("Ingrese el dato: ");
			scanf("%d",&m[i][j]);
		}
	}
}

void secundaria(){
	printf("Los datos de la diagonal secundaria son: \n");
	suma=0;
	for(i=1;i<=f;i++){
		for(j=1;j<=c;j++){
			if(i+j==f+1){
				printf("%d\n",m[i][j]);
				suma=suma+m[i][j];
			}
		}
	}
	printf("La suma de los datos de la diagonal secundaria es: %d",suma);
	
}
