#include<stdio.h>
#include<windows.h>
int main(){
    float s, ns;
    int i;
    i=1;
    
	while(i==1){
	printf("\n\nIngrese el salario del profesor\n");
    scanf("%f",&s);
    
    if (s<18000){
        ns= s * 1.12;
        printf("\nEl nuevo salario del profesor es %f\n\n",ns);
    }
    if(18000<=s && s<=30000){
        ns= s * 1.08;
        printf("\nEl nuevo salario del profesor es %f\n\n",ns);
    }
    if(30000<=s && s<=50000){
        ns= s * 1.07;
        printf("\nEl nuevo salario del profesor es %f\n\n",ns);    	
	}
	if(50000<s){
        ns= s * 1.06;
        printf("\nEl nuevo salario del profesor es %f\n\n",ns); 		
	}
	printf("Desea realizar otra operacion??, 1-si 0-no");
	scanf("%d",&i);
	system("cls");
}
return 0;
}
