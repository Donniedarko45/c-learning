#include<stdio.h>
int main(){
    int n;
    int sum=0;
    int r;
    printf("Enter a number :");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        n=n/10;
        sum=sum+r;
    }
    printf("The sum is %d\n",sum);
    return 0;
}