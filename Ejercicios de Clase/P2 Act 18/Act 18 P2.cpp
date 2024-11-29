/*Ejercicio 18*/
#include<stdio.h>

void entrada();
void proceso();

int n1[50], i, N, N2,n2,c,d;

main(){
	entrada();
	proceso();
}

void entrada(){
	do{
		printf("Cantidad de numeros a almacenar en el arreglo:");
		scanf("%d",&N);
	} while(N<=1);
	
	for (i=1; i<=N;i++){
		printf("\nIngresa el dato en el arreglo: ");
		scanf("%d", &n1[i]);
	}
}

void proceso(){
		c=1;
		do{
			printf("\nIngresa el numero a comparar: ");
			scanf("%d", &n2);
			for(i=1;i<=N;i++){
				if (n2==n1[i]){
				printf("El numero %d si se encuentra en el arreglo\n",n2);
				d=1;
				}
			}
			if (d!=1){
				printf("El numero %d no se encuentra en el arreglo\n",n2);

			}
			printf("Deseas comparar otro numero? (1-Si 2-No): ");
			scanf("%d",&c);	
		}while (c==1);	
	
}


