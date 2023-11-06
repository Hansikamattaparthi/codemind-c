#include<stdio.h>
int main()
{
    int a,b,i,s;
    scanf("%d%d",&a,&b);
    for(i=1;i<=b;i++)
    {
        s=a*i;
        if(s%b==0)
        {
            printf("%d",s);
            break;
        }
    }
}