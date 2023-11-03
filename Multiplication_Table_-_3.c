#include<stdio.h>
int main()
{
    int i,n,a,b;
    scanf("%d%d%d",&n,&a,&b);
    i=a;
    while(a<=b)
    {
        printf("%d x %d = %d
",n,a,n*a);
        a++;
    }
}