#include<stdio.h>
int main()
{
for(int i=100;i<=300;i++)
{
if(i%3==0)continue;
printf("%15d",i);
}
printf("\n");
return 0;
}