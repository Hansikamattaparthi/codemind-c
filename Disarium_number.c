#include<stdio.h>
#include<math.h>
int main()
{
    int n,r,rev=0,t,c=0,sum=0;
    scanf("%d",&n);
    t=n;
    while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    rev;
    while(rev>0)
    {
       r=rev%10;
       c=c+1;
       sum=sum+pow(r,c);
       rev=rev/10;
    }
    if(sum==t)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}