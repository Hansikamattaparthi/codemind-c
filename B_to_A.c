#include<stdio.h>
int main()
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    i=b;
    while(i>=a)
    {
        printf("%d ",i);
    i--;
    }
}