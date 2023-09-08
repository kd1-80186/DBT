#include<stdio.h>
int main()
{
    int a, b, sum=0;
    printf("Enter two numbers to add\n");
    scanf(" %d %d" ,&a,&b);
    sum = a+b;
    printf("Sum of two numbers is %d\n" , sum);
    return 0;

}