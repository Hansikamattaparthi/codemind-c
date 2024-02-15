#include<stdio.h>
int main()
{
	char s1[20],s2[20];
	scanf("%[^
]s",s1);
	scanf(" %[^
]s",s2);
	int len1=0,len2=0,i,flag=1;
		for(i=0;s1[i]!=NULL;i++)
	{
		len1=len1+1;
	}
	for(i=0;s2[i]!=NULL;i++)
	{
		len2=len2+1;
	}
    i=0;
	if(len1==len2)
    {
	   while(s1[i]!=NULL&&s2[i]!=NULL)
	   {
	   	       if (s1[i]!=s2[i])
	   	       {
	   	       	flag=0;
	   	       	break;
			   }
			   i++;
	   }
    if(flag==0)
    {
    	printf("Strings are not Equal ");
	}
	else
	{
		printf("Strings are Equal");
	}
}
else
{
	printf("Strings are not Equal");
}
}