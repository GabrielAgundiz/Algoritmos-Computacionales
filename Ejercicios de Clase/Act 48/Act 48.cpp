#include<stdio.h>

int main(){
    int n, i, a;

    do{
        printf("Dame el numero hasta donde quieres imprimir la serie (mayor que cero): ");
        scanf("%d",&n);
    } while (n<=0);
    
    for(i = 1; i <= n; i++){
        for(a = 1; a <= i; a++){
            printf("%d", i);
        }
    }
}
