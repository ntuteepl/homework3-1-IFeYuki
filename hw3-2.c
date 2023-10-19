#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s1,d1,s2,d2,s3,d3,num=3;
    scanf("%d%d%d%d%d%d",&s1,&d1,&s2,&d2,&s3,&d3);

    if (d1<=s2 && d2<=s3)      // 1,2,3
        num-=2;
    else if (d1<=s3 && d3<=s2) // 1,3,2
        num-=2;
    else if (d2<=s1 && d1<=s3) // 2,1,3
        num-=2;
    else if (d2<=s3 && d3<=s1) // 2,3,1
        num-=2;
    else if (d3<=s1 && d1<=s2) // 3,1,2
        num-=2;
    else if (d3<=s2 && d2<=s1) // 3,2,1
        num-=2;
    else if (d1<=s2 || d1<=s3)
        num--;
    else if (d2<=s3 || d2<=s1)
        num--;
    else if (d3<=s1 || d3<=s2)
        num--;

    printf("%d",num);
    return 0;
}
