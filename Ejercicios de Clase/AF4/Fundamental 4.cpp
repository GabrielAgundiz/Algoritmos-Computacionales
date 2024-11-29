/*Programa 39 - Fundamental 4*/
#include<stdio.h>
void entrada();
void proceso();
void salida();
int n;
float calif, apro = 0, repro = 0, apro_porc, repro_porc;

int main(){
    entrada();
	proceso();
	salida();
}

void entrada(){
	do{
	printf("\n\nDame el numero de alumnos: ");
    scanf("%d",&n);		
	}while(n<=0);
}

void proceso(){
    for(int i=1;i<=n;i++){
        do{
        printf("\nCalificacion del %dº alumno: ",i);
        scanf("%f",&calif);
        }while(calif<0 || calif>100);

        if(calif>=70 && calif<=100){
            apro = apro + 1;
        }
        else {
            repro = repro + 1;
        }
    }
    
    apro_porc = (apro/n)*100;
    repro_porc = (repro/n)*100;	
}
void salida(){
    printf("\n\nEl procentaje de aprobados es %.2f porciento",apro_porc);
    printf("\nEl procentaje de reprobados es %.2f porciento\n\n",repro_porc);	
}

