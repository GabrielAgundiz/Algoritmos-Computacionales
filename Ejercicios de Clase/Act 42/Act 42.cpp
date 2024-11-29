#include<stdio.h>

int main(){

    int n,n1,n2;
    int n_par=0,n_impar=0, n_natural=0;
    printf("\n\nDame 2 numeros y te dire la cantidad de numeros naturales, pares e impares que hay entre ellos (sin contarlos a si mismos)");
    printf("\nDame un numero: ");
    scanf("%d",&n1);
    printf("Dame otro numero: ");
    scanf("%d",&n2);

    if(n2<n1){
        n = n2;
        n2 = n1;
        n1 = n;
    }

    for(int i=n1+1;i<=n2-1;i++){
        
        if(i%2 == 0){
            n_par = n_par + 1;
        }
        else{
            n_impar = n_impar + 1;
        }
        n_natural = n_natural + 1;
    }
   
    printf("\nLa cantidad de numeros naturales es %d",n_natural);
    printf("\nLa cantidad de numeros pares es %d",n_par);
    printf("\nLa cantidad de numeros impares es %d\n\n",n_impar);
}
