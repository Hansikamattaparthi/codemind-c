#include<stdio.h>
int main()
{
    char x,V,I,B,G,R,O,Y,v,i,b,g,r,o,y;
    scanf("%c",&x);
    if(x=='V'||x=='v')
    {
        printf("Violet");
    }
    else if(x=='I'||x=='i')
    {
        printf("Indigo");
    }
    else if(x=='B'||x=='b')
    {
        printf("Blue");
    }
    else if(x=='G'||x=='g')
    {
        printf("Green");
    }
    else if(x=='Y'||x=='y')
    {
        printf("Yellow");
    }
    else if(x=='O'||x=='o')
    {
        printf("Orange");
    }
    else if(x=='R'||x=='r')
    {
        printf("Red");
    }
    else
    {
        printf("-1");
    }
}