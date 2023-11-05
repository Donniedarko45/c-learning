#include <stdio.h>
int main()
 {

char operation;
double n1,n2,c,t,r,s;
printf("which area you want to cal ('c','t','r','s'): ");
scanf("%c", &operation);
 printf("Enter two operands: ");
 scanf("%lf %lf",&n1, &n2);
 switch(operation)
 {
 case 'c':
 printf("%.1lf",c=3.14*n1*n1);
 break;
 case 't' :
 printf("%.1lf",t=0.5*n1*n2);
 break;
 case 'r':
 printf("%.1lf",r=n1*n2);
 break;
 case 's':
 printf("%.1lf",s=n1*n1);
 break;
  // operator doesn't match any case c t r s
 default:
 printf("Error! operator is not correct");
 }
 return 0;
}




