
#include<stdio.h>
int main()
{
    int n1,sum=0,rem=0;
    printf("enter the number : ");
    scanf("%d",&n1);
    int num=n1;
    while(n1>0)
    {
      rem=n1%10;
      sum=sum*10+rem;
      n1=n1/10;
    }
    if(sum==num)
    {
      printf("\n number is palindrome");
    }
      else
      {
        printf("\n number is not palindrome");
      }
    
    printf("number is : %d",sum);
    return 0;
}   

    
