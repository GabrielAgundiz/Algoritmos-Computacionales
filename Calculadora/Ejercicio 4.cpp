//Calculadora
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    char opcion[40];
    float a, b, resultado;

    printf("Calculadora");
    printf("Escribe la inicial de la operacion que quieras realizar (Ejemplo: Si quieres hacer una suma escribe s) \nPD: La resta se representa como 're' y la raiz como 'ra'");
    printf("\nEleccion: ");
    scanf("%[^\n]s",&opcion);

    if (opcion == "s"){
        printf("La operacion se realizara de la siguiente manera: a + b");
        printf("\nEscribe el valor de a: ");
        scanf("%f",&a);
        printf("\nEscribe el valor de b: ");
        scanf("%f",&b);
        resultado = a + b;
        printf("\nEl resultado es: ",resultado);
    }

    else if (opcion == "re"){
        printf("La operacion se realizara de la siguiente manera: a - b");
        printf("\nEscribe el valor de a: ");
        scanf("%f",&a);
        printf("\nEscribe el valor de b: ");
        scanf("%f",&b);
        resultado = a - b;
        printf("\nEl resultado es: ",resultado);
    }

    else if (opcion == "m"){
        printf("La operacion se realizara de la siguiente manera: a * b");
        printf("\nEscribe el valor de a: ");
        scanf("%f",&a);
        printf("\nEscribe el valor de b: ");
        scanf("%f",&b);
        resultado = a*b;
        printf("\nEl resultado es: ",resultado);
    }

    else if (opcion == "d"){
        printf("La operacion se realizara de la siguiente manera: a/b");
        printf("\nEscribe el valor de a: ");
        scanf("%f",&a);
        printf("\nEscribe el valor de b: ");
        scanf("%f",&b);
        resultado = a/b;
        printf("\nEl resultado es: ",resultado);
    }

    else if (opcion == "p"){
        printf("La operacion se realizara de la siguiente manera: a ^ b");
        printf("\nEscribe el valor de a: ");
        scanf("%f",&a);
        printf("\nEscribe el valor de b: ");
        scanf("%f",&b);
        resultado = pow(a,b);
        printf("\nEl resultado es: ",resultado);
    }

    else if (opcion == "ra"){
        printf("La operacion se realizara de la siguiente manera: sqrt(a)");
        printf("\nEscribe el valor de a: ");
        scanf("%f",&a);
		resultado = sqrt(a);
        printf("\nEl resultado es: ",resultado);
    }

    else{
        printf("Opcion no valida, vuelva a ejecutar el programa");
    }

    return 0;
}
