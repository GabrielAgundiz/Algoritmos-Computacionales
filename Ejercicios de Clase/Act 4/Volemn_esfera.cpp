/*talcular el volumen de la esfera*/
#include<stdio.h>
#include<math.h>
#define pi 3.1416
main(){
    float r,vol;
    printf("Ingresa el radio de la esfera:");
    scanf("%f", &r);
    //vol=(4.0/3.0)*pi*r*r*r;
    vol=(4.0/3.0)*pi*pow(r,3);
    printf("El volumen de la esfera es %f", vol);
    	}
