#include<stdio.h>

int main(){

    int fact, n;
    printf("\n\nDame el numero y te imprimo el factorial: ");
    scanf("%d",&n);
    fact = 1;

    for(int num = n;num>0;num--){
        fact = fact * num;
    }
    
    printf("\nEl factorial de %d es igual a %d\n\n",n,fact);
}
