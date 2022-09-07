// Write a function to print first N prime numbers (TSRN)

#include<stdio.h>

void firstNprime(int);
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
firstNprime(num);
return 0;
}

void firstNprime(int a)
{
    int i,j;

    for(i=2;;i++)
    {
        int count=0;
        for(j=2;j<=i;j++)
        {
            if(i%j==0)
          count++;
        }
    if(count==a)
    {
        printf("%d\n",i);
    
    }
    break;
    }

}