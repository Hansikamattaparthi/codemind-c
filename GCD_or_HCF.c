#include<stdio.h>
int main()
{
    int a,b,i,lcm,gcd;
    scanf("%d%d",&a,&b);
    i=1;
    while(i<=b)
    {
        lcm=a*i;
        if(lcm%b==0)
        break;
        i++;
    }    
        gcd=(a*b)/lcm;
        printf("%d",gcd);
}