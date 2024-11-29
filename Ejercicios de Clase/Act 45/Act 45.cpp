#include<stdio.h>

int main(){

    int n, i, a, b;

    do{
        printf("Dime cuantos numeros quieres en la serie (numero par): ");
        scanf("%d",&n);
    }while(n%2 == 1);

    for(i = 1 ; i <= (n/2) ; i++){
        a = i;
        b = i*-1;
        printf("%d, %d, ", a , b);
    }

}
