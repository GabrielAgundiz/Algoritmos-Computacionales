#include<stdio.h>

int main(){

    int n,pow, resultado=1;

    printf("\n\nDime el numero que quieres elevar: ");
    scanf("%d",&n);
    printf("A que numero lo quieren elevar: ");
    scanf("%d",&pow);

    for(int i=1;i<=pow;i++){
        resultado = resultado * n;
    }
 
    printf("\nEl resultado es: %d\n\n",resultado);
}
