#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        int n,m,r,c=0,j;
        scanf("%d%d",&n,&m);
        for(j=n;j<=m;j++)
        {
            r=j%10;
           if(r==2||r==3||r==9)
           {
             c=c+1; 
           }
        }   
    printf("%d
",c);    
    }
}