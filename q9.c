// Write a program in C to find the square of any number using the function.

#include<stdio.h>
int squareofnumber(int);
int main()
{
    int num,square;
    printf("Enter a number: ");
    scanf("%d",&num);

    square=squareofnumber(num);
    printf("Square of %d is %d ",num,square);
}
int squareofnumber(int a)
{
    return a*a;
}