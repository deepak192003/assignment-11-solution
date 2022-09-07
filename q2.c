#include<stdio.h>
int hcfoftwonumber(int,int);
int main()
{
    int a,b,hcf;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
hcf=hcfoftwonumber(a,b);
printf("HCF of two number is %d",hcf);
return 0;

}

int hcfoftwonumber(int a,int b)
{
    int max,lcm,hcf;

max=(a>b)?a:b;
    while (1)
    {
        if(max%a==0 && max%b==0)
        {
        lcm=max; 
        break;
        }
        ++max;
    }
    hcf=((a*b)/lcm);
    return hcf;
    
}