#include<stdio.h>

int main(){
    int n, num,suma;
    float prom;

    printf("\n\nA cuantos numeros les quieres hacer el promedio?");
    scanf("%d",&n);
    suma = 0;
    
    for(int i=1;i<=n;i++){
        printf("\nNumero: ");
        scanf("%d",&num);
        suma = suma + num;
    }

    prom = suma/(n*1.0);
    printf("\nEl promedio es: %f\n\n", prom);

}
