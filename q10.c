// Write a program in C to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the 
// function
#include<stdio.h>
int factorial(int);
int sum_of_series(int);
int main()
{
    int  num=5,result;
    result= sum_of_series(num);
printf("Sum of series is %d",result);
return 0;
}

int sum_of_series(int a)
{
    int i;
    int sum=0;
    for(i=1;i<=5;i++)
    {
        sum=sum+(factorial(i)/i);
    }
    return sum;
}
int factorial(int b)
{
    int f=1;
    int i;
    for(i=1;i<=b;i++)
    {
        f=f*i;
    }
    return f;
}