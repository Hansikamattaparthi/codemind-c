#include<stdio.h>
int main()
{
    int u;
    float uc,b,sc,tb;
    scanf("%d",&u);
    if(u<=199)
    {
       uc=1.20;
    }
    else if(u>=200&&u<400)
    {
        uc=1.40;
    }
    else if(u>=400&&u<600)
    {
        uc=1.60;
    }
    else if(u>=600&&u<800)
    {
        uc=1.80;
    }
    else if(u>=800)
    {
        uc=2.00;
    }
    if(u>400)
    {
        b=u*uc;
        sc=b*0.15;
        tb=b+sc;
    }
    else if (u<=400)
    {
        b=u*uc;
        sc=b*0.0;
        tb=b+sc;
    }
    printf("Units Consumed: %d
",u);
    printf("Cost per Unit: %.2f
",uc);
    printf("Bill: %.2f
",b);
    printf("Surcharge: %.2f
",sc);
    printf("Total Amount: %.2f
",tb);
}