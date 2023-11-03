#include<stdio.h>
int main()
{
    int i,a,b;
    scanf("%d%d",&a,&b);
    i=1;
    while(i<=b)
    {
        printf("%d x %d = %d
",a,i,a*i);
        i++;
    }
}