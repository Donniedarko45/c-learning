#include<stdio.h>
void england()
{
    printf("you are in england\n");
    return;   //return ke baad hum seedha line 22 pe aa jayenge
}
void australia()
{
    printf("you are in australia\n");
    england(); //calling england....
    return;
}
void india()
{
    printf("you are in india\n");
    australia(); //calling australia...
    return;
}
int main()
{
    india(); //calling a function india
    return 0;
}