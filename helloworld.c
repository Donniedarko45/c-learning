#include<stdio.h>
int main()
{
    int  n1, n2  ,sum=0;
    printf("enter n1 ");
    scanf("%d",&n1);
    int i=n1+1;
    printf("enter n2");
    scanf("%d",&n2);
    while (i<n2)
    { 
     sum=sum+i;
     i+=1;
    }
    printf("%d",sum);
    return 0;
}