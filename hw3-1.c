#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c=0,d;
    scanf("%d",&a);
    for(b=1;b<=10000;b++)
    {
        d=a%b;
        if  (d==0) c=c+1;
    }

    if  (c==2)
    printf("YES");

    else
    printf("NO");

    return 0;
}
