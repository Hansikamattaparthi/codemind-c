#include<stdio.h>
int main()
{
    int r,n,rev=0,t;
    scanf("%d",&n);
    t=n;
    while(n!=0)
    {
        r=n%10;//121%10=1 
        rev=rev*10+r;//11
        n=n/10;//12
    }
    if(t==rev)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    
}