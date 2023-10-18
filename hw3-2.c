#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s1,d1,s2,d2,s3,d3,num=1;
    scanf("%d%d%d%d%d%d",&s1,&d1,&s2,&d2,&s3,&d3);

    if (d1>s2 && d1>s3 && d2<=s3)
        num++;
    else if (d1>s2 && d2>s3 && d1<=s3)
        num++;
    else if (d1>s2 && d2>s3 && d1>s3)
        num+=2;

    printf("%d",num);
    return 0;
}

