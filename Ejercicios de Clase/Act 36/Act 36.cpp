#include<stdio.h>

int main(){
    int n,res;
    
    for(int a=1;a<=10;a++){
        for(int i=1;i<=10;i++){
            res = a * i;
            printf("\n%d x %d = %d",a,i,res);
        }
        printf("\n\n");
    }
printf("\n\n");
}
