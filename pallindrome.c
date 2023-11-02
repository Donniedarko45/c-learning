#include<stdio.h>
int main()
{
    int sum=0,rem=0,n,i;
    printf("enter the number which you want to reverse");
    scanf("%d",&n); 
    for(i=n;i>0;i=n)
     {
        
         rem=n%10;
         sum=sum*10+rem;
         n=n/10;
     }
       if(sum==n)
       {
        printf("\n number is pallindrome"); 
     } 
     else
     { 
        printf("\n number is not pallindrome\n");
     }  
        printf("output is %d",sum);   
    
    }