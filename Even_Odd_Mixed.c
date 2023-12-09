#include<stdio.h>
int main()
{
	int n,r,Ec=0,Oc=0,c=0;
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		c=c+1;
		n=n/10;
		if(r%2==0)
		{
		   Ec=Ec+1;
		}
		else if(r%2!=0)
		{
			Oc=Oc+1;
        }
	}
	if(Ec==c)
	{
		printf("Even");
	}
	else if(Oc==c)
	{
		printf("Odd");
	}
	else
	{
		printf("Mixed");
	}
	
}