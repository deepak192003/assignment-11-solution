// Write a function to print PASCAL Triangle. (TSRN)
#include<stdio.h>
int fact(int);
int combination(int,int);
int pascal(int);
int fact(int n)
{
    int f=1,i;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}

int combination(int n,int r)
{
   return fact(n)/(fact(r)*fact(n-r));
}
int permutationn(int n,int r)
{
    return fact(n)/(fact(n-r));
}

int pascal(int n)

{
    int i,j;
     for(i=0;i<=n;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%d",combination(i,j));
        }
        printf("\n");
    }
}

int main()
{
   pascal(5);
    
}