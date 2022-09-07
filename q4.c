// Write a function to find the next prime number of a given number. (TSRS)
#include<stdio.h>
int nextprimeno(int);
int main()
{
    int n,nextprimenumber;
    printf("Enter a number: ");
    scanf("%d",&n);
nextprimenumber=nextprimeno(n);
printf("Next prime number of a given number is %d",nextprimenumber);
return 0;

}

int nextprimeno(int a)
{
    int i;
    for(i=a+1;  ;i++)
    {
        if(i%2==1)
        {
            return i;
            break;
        }
    }
}