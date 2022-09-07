// Write a function to check whether a given number is Prime or not. (TSRS)


#include<stdio.h>
int checkprime(int);
int main()
{
    int num,prime;
    printf("Enter a number: ");
    scanf("%d",&num);

    prime=checkprime(num);
    if(prime==0)
    {
        printf("Given number is not prime");
    }
   else
    {
        printf("Given number is prime");
    }
    return 0;
}

int checkprime(int a)
{
    int i;
    for(i=2; ;i++)
{
    if(  a%i==0)
    {
        return 0;
        break;
    }
    else
    {
        return 1;
    }
}
}