#include<stdio.h>

int main(){

    int num1, num2, num3, add, mult, highest, lower;
    float avg;

    printf("\n\nGive me the 3 numbers");
    printf("\nNumber 1: "); scanf("%d",&num1);
    printf("Number 2: "); scanf("%d",&num2);
    printf("Number 3: "); scanf("%d",&num3);

    add = num1 + num2+ num3;
    mult = num1 * num2 * num3;
    avg = (num1 + num2+ num3)/3;

    printf("\nThe addition of all the numbers is %d",add);
    printf("\nThe multiplication of all the numbers is %d",mult);
    printf("\nThe average of all the numbers %f\n",avg);

    if(num1 > num2)
    {
        if(num1 > num3)
        {
            if(num2 > num3)
            {
                printf("The highest number is %d\nThe lowest is %d\n\n",num1,num3);
            }
            
            else
            {
                printf("The highest number is %d\nThe lowest is %d\n\n",num1,num2);
            }
        }
    }

    if(num2 > num3)
    {
        if(num2 > num1)
        {
            if(num3 > num1)
            {
                printf("The highest number is %d\nThe lowest is %d\n\n",num2,num1);
            }
            
            else
            {
                printf("The highest number is %d\nThe lowest is %d\n\n",num2,num3);
            }
        }
    }

    if(num3 > num1)
    {
        if(num3 > num2)
        {
            if(num1 > num2)
            {
                printf("The highest number is %d\nThe lowest is %d\n\n",num3,num2);
            }
            
            else
            {
                printf("The highest number is %d\nThe lowest is %d\n\n",num3,num1);
            }
        }
    }

}