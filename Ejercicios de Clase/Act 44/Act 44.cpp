#include<stdio.h>

int main(){

    int n, ap, init, i;

     do{
        printf("Indica cuantos numeros de la serie quieres: ");
        scanf("%d",&n);
    }while(n < 4);

    do{
        printf("Coloca el numero inicial de la serie (un numero positivo): ");
        scanf("%d",&init);
    }while(init <= 0);

    printf("%d, ", init);
    ap = 0;

    for(i = 1; i<n ; i++){
        if(ap == 0){
            init = init * 3;
            printf("%d, ", init);
            ap = 1;
        }
        else{
            init = init + 2;
            printf("%d, ", init);
            ap = 0;
        }
    }

printf("\n\n");
}
