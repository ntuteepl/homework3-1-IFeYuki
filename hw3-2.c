#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char*argv[]) {
int num=3,s1,s2,s3,d1,d2,d3;
scanf("%d%d%d%d%d%d",&s1,&d1,&s2,&d2,&s3,&d3);
if(s1>=d2||s1>=d3)
num--;
if(s2>=d1||s2>=d3)
num--;
if(s3>=d1||s3>=d2)
num--;
printf("%d",num);
return 0;
}
