#include<stdio.h>
int main()
{
int s=1;
for(int i=1;i<10000;i++)
{
s=i*i*i-i*i+s;
if(s>95862)break;
printf("%d\n",s);
}
printf("%d\n",s);
return 0;
}