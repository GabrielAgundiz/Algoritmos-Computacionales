#include<stdio.h>

//Gabriel Agundiz 2109526//
//Programa que almacene las temperaturas registradas y muestre la temperatura mínima y máxima registrada//

void entrada();
void mayor();
void menor();
void salida();

int N, i,may,posma,men,posme,num[30];

main(){
	printf("\nPrograma que almacene las temperaturas registradas y muestre la temperatura minima y maxima registrada\n");
	entrada();
	mayor();
	menor();
	salida();
	printf("\n\nGracias por utilizar el programa\n");
}

void entrada(){

	do{
		printf("Cantidad de temperaturas a almacenar en el arreglo:");
		scanf("%d",&N);
	} while(N<=1 || N>30);
	
	for (i=1;i<=N;i++){
		do{
			printf("\nIngresa la temperatura en grados centigrados: ");
			scanf("%d", &num[i]);	
		}while(num[i]<15 || num[i]>45);
	}
}

void mayor(){
	
	may=num[1];
	posma=1;
	for(i=2;i<=N;i++){
		if(num[i]>may){
			may=num[i];
			posma=i;
		}
	}
}

void menor(){

	men=num[1];
	posme=1;
	for(i=2;i<=N;i++){
		if(num[i]<men){
			men=num[i];
			posme=i;
		}
	}
}

void salida(){
	printf("\nLas temperaturas registradas fueron:\n");
	for(i=1;i<=N;i++){
		printf("num[%d]:%d\n",i,num[i]);
	}
	printf("\nLa temperatura mayor se registro el dia %d y fue de %d grados centigrados",posma,may);
	printf("\nLa temperatura menor se registro el dia %d y fue de %d grados centigrados",posme,men);	
}

