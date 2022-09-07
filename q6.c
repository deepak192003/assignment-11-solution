// Write a function to print all Prime numbers between two given numbers. (TSRN)
#include<stdio.h>
void allprimenumber(int,int);
int main()
{
    int lowerlimit,upperlimit;

    printf("Enter lowerlimit : ");
    scanf("%d",&lowerlimit);
    printf("Enter upperlimit: ");
    scanf("%d",&upperlimit);
    allprimenumber(lowerlimit,upperlimit);
}

void allprimenumber(int a,int b)
{
    int i,j;
    for(i=a+1;i<=b-1;i++)
    {
        for ( j = 2; j < i; j++)
        {
           if(i%j==0)
           {
                break;
           }
          
        }
         if(i==j)
           printf("%d\n",i);
        
    }
}