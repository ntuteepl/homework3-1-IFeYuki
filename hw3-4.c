#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100],b[4],ans[4],A=0,B=0,i,j,k,m,x=-1;
    for(i=0;i<8;i++)
    {
        scanf("%d",&a[i]);
        x+=1;
        if (a[i]==0)
        i=8;
    }

    for(j=0;j<=3;j++)
    {
        ans[j]=a[0]%10;
        a[0]=a[0]/10;
    }

    for(i=1;i<x;i++)
    {
        for(j=0;j<=3;j++)
        {
            b[j]=a[i]%10;
            a[i]=a[i]/10;
        }

        for(k=0;k<4;k++)
        {
            if(b[k]==ans[k])
            {
                A+=1;
            }

            else
            {
                for(m=0;m<4;m++)
                {
                    if(b[k]==ans[m])
                    B+=1;
                }
            }
        }
        printf("%d%c%d%c\n",A,'A',B,'B');
        A=0; B=0;
    }

    return 0;
}
