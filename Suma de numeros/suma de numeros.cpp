//Si la suma de los tres números es mayor a 100 se le va a restar 20 sino el programa terminará

#include <iostream>

using namespace std;

int main()
{
    int n1,n2,n3,s,sd;
	printf("Este programa realiza la suma de 3 numeros, en caso de que el resultado sea mayor a 100 se le restara 20 \n");
    printf("Ingresa el primer numero: ");
    scanf("%d",&n1);
    printf("\n Ingresa el segundo numero: ");
    scanf("%d",&n2);
    printf("\n Ingresa el tercer numero: ");
    scanf("%d",&n3);
    s=n1+n2+n3;
    
    if(s > 100){
        sd = s - 20;
        printf("\n El resultado de la suma y luego restarle 20 es: %d \n ",sd);
    }

    else{
        printf("\n El resultado de la suma es: %d",s);
    }

}
