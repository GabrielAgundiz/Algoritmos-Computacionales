#include<stdio.h>
int main(){
    int a=0,b=1;
    int x,n;
    do{
        printf("Dime cuantos numeros de la serie de Fibonacci quieres: ");
        scanf("%d",&n);
    }while(n < 4);

    printf("%d, %d, ", a,b);

    for(int i = 3; i<=n; i++){
        x = a + b;
        printf("%d, ", x);
        a = b;
        b = x;
    }
}
