#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n],even;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            even=i;
        }
    }
    printf("%d",even);
}