#include<stdio.h>
int main()
{
    int n,r,rev=0,sn,srev,r1,rev1=0;
    scanf("%d",&n);
    sn=n*n;
    while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    srev=rev*rev;
    while(srev>0)
    {
        r1=srev%10;
        rev1=rev1*10+r1;
        srev=srev/10;
    }
    if(sn==rev1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}