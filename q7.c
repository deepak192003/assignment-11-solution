// Write a function to print first N terms of Fibonacci series (TSRN)
#include<stdio.h>
void first_n_fibonacciseries(int);
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    first_n_fibonacciseries(num);
}
void first_n_fibonacciseries(int a)
{
    int n1=0,n2=1,n3;
    int i;

   if(a==1)
   {
    printf("%d",n1);
   }
   if(a==2)
   {
    printf("%d\n%d",n1,n2);

   }
   if(a>2)
   {
        printf("%d\n%d\n",n1,n2);
        for(i=3;i<=a;i++)
        {
          
            n3=n1+n2;

            printf("\n%d",n3);
            n1=n2;
            n2=n3;
        }
   }

   
}