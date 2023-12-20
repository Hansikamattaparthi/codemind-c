#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n],odd;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            odd=a[i];
        }
    }
    printf("%d",odd);
}