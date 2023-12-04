#include<stdio.h>
int main()
{
    int n,m,i,t,r,rev=0;
    scanf("%d%d",&n,&m);
    for(i=n;i<=m;i++)
    {
        rev=0;
        t=i;
         while(t>0)
        {
          r=t%10;
          rev=rev*10+r;
          t=t/10;
        }
        if(rev==i)
        {
          printf("%d ",rev);
        }
    }    
}