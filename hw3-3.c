#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,a0,a1,a2,a3,b,b0,b1,b2,b3,sa,sb;
    scanf("%d%d",&a,&b);

    a3=a/1000;
    a2=(a%1000)/100;
    a1=((a%1000)/100)/10;
    a0=a%10;

    b3=b/1000;
    b2=(b%1000)/100;
    b1=((b%1000)/100)/10;
    b0=b%10;

    sa=a0+a1+a2+a3;
    sb=b0+b1+b2+b3;

    if(sa==sb)
    {
        if(a>>b)
        printf("%d",b);n
        else
        printf("%d",a);
    }

    else
    {
        if(sa>>sb)
        printf("%d",b);
        else
        printf("%d",a);
    }
}
