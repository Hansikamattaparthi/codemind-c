#include<stdio.h>
int main()
{
    int n,r,sum;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        printf("%d",r+1);
        break;
        n=n/10;
    }
    
}