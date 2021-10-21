#include <stdio.h>
void sum();
void main()
{
    printf("\n Going to clacualte the sum of two number \n");
    sum();
}

void sum()
{
    int a,b;
    printf("\nEnter two Number \n");
    scanf("%d %d",&a,&b);
    printf("the sum is =%d",a+b);
}