#include<stdio.h>
int main()
{
    int i=1,n,sum=0;
    scanf("%d",&n);
    while(i<n)
    {
        if(n%i==0)
        {
            i;
            sum=sum+i;//1+2+7
        }
    i++;    
    }
    printf("%d",sum);
}