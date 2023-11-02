#include<stdio.h>
int main()
{
    int n1,n2,sum=0;
    printf("first number is n1 \n");
    scanf("%d",&n1);
    printf("second number is n2 \n");
    scanf("%d",&n2);
    int i=n1+1;
    while(i<n2)
    {
       sum=sum+i;
       i=i+1; 
    }
    printf("sum is %d",sum);
    return 5;
}