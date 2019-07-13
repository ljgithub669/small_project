#include<stdio.h>
int main()
{
int jiecheng(int n);
int n;
printf("请输入待阶乘的数字：\n");
scanf("%d",&n);
//printf("%d的阶乘是%d!=%d \n",n,n,jiecheng(n));
printf("%d!=%d\n",n,jiecheng(n));
return 0;
}

int jiecheng(int n)
{
int s;
if(n==1||n==0)
s=1;
else
s=jiecheng(n-1)*n;
//printf("%d*",n);
return s;
}