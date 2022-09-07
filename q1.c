// Write a function to calculate LCM of two numbers. (TSRS)
#include<stdio.h>
int lcmoftwonumber(int,int);
int  main()
{
    int n1,n2,lcm;
    printf("Enter the value of two numbers: ");
    scanf("%d%d",&n1,&n2);
    lcm=lcmoftwonumber(n1,n2);
    printf("Lcm of two number is %d",lcm);
    return 0;
}
 int lcmoftwonumber(int a,int b)
 {
    int i,lcm,max;
    
    max=(a>b)?a:b;
     
   while (1)
   {
        if(max%a==0 && max%b==0)
        {
           return max;
            break;
        }
        ++max;
   }
   
 }