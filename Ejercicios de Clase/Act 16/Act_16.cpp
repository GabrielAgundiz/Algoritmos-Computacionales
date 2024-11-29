/*Introducir como dato el precio de un producto, 
incrementar el 11% si es inferior a $1500, y el 8% si 
fuera mayor o igual a dicho precio; imprimir el nuevo precio del producto.*/

#include<stdio.h>

int main(){

    float price, new_price;

    printf("\n\nGive the price of the product\n");
    scanf("%f",&price);

    if (price >= 0 && price <= 1500){
        new_price = price * 1.11;
        printf("\nYour total is %f\n\n",new_price);
    }
    else{
        new_price = price * 1.08;
        printf("\nYour total is %f\n\n",new_price);
    }

}
