//Este es un programa que hace todas las operaciones de 2 numeros//

#include<iostream>
#include<stdio.h>
#include<math.h>

main(){
	float n1,n2,s,r,m,d,t;
	printf("Este es un programa que hace todas las operaciones de 2 numeros \n");
	printf("Ingresa el primer numero: \n");
	scanf("%f",&n1);
	printf("Ingresa el segundo numero: \n");
	scanf("%f",&n2);
	s=n1+n2;
	r=n1-n2;
	m=n1*n2;
	d=n1/n2;
	t=s+r+m+d;
	printf("El resultado de la suma de los dos numeros es: %f \n",s);
	printf("El resultado de la resta de los dos numeros es: %f \n",r);
	printf("El resultado de la multiplicacion de los dos numeros es: %f \n",m);
	printf("El resultado de la division de los dos numeros es: %f \n",d);
	printf("El resultado de la suma total de los resultados de las operaciones de los dos numeros es: %f \n",t);
}
