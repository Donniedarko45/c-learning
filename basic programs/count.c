#include<stdio.h>
int main()
{
    int n1,n2,count=0;
    printf("enter the number n1  n2");
    scanf("%d %d",&n1,&n2);
while(n2>=n1)
{
    if(n1%3==0)
    {
    count=count+1;
}
n1=n1+1;}
printf("total num is %d",count);
return 0;
}