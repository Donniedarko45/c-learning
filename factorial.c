#include<stdio.h>
int main()
{
   float n,factorial=1;
    printf("enter the number ");
    scanf("%f",&n);
    while(n>1)
    {
        factorial=factorial*n;
        n=n-1;
    }
    printf("factorial is %f",factorial);
    return 0;
}