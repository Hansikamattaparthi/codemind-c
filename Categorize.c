#include<stdio.h>
int main()
{
    float h;
    scanf("%f",&h);
    if(h<=150.5)
    {
        printf("The person is Dwarf.");
    }
    else if(h>=150.6&&h<=165.5)
    {
        printf("The person is average heighted.");
    }
    else if(h>=165.6&&h<=195.5)
    {
        printf("The person is taller.");
    }
    else if(h>=195.6)
    {
        printf("Abnormal height.");
    }
}