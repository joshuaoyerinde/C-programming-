#include <stdio.h>

void sum();//function declaration .....
void main()// the main function
{
    printf("\n Going to clacualte the sum of two number \n");
    sum();
}

//function definotion
void sum()
{
    int a,b;
    printf("\nEnter two Number \n");
    scanf("%d %d",&a,&b);
    printf("the sum is =%d",a+b);
}