#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n!=0)
    {
        if(n%2==0)
        {
        printf("Not Prime");
        }
        else
        {
            printf("Prime");
        }
        break;
    }
}