#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    i=1;
    while(i<=12)
    {
        printf("%d x %d = %d
",n,i,n*i);
        i++;
    }
}