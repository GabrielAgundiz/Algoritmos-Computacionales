#include<stdio.h>

int main(){

    int ap=0, n, num, i;

    do{
        printf("Indica cuantos numeros de la serie quieres: ");
        scanf("%d",&n);
    }while(n < 4);
    
	do{
        printf("Coloca el numero en el que inicia la serie (tiene que ser positivo o nulo): ");
        scanf("%d", &num);
    }while(num<0);
    printf("\n%d, ", num);
    
        for(i = 2; i<=n ; i++){
            if(ap == 0){
                num = num + 2;
                printf("%d, ", num);
                ap = 1;
            }
            else{
                if(ap == 1){
                    num = num * 3;
                    printf("%d, ", num);
                    ap = 2;
                }
                else{
                    num = num - 1;
                    printf("%d, ", num);
                    ap = 0;
                }
            }
        }

}
