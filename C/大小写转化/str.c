//大小写转化
#include<stdio.h>

int main()
{
char c;
for(;(c=getchar())!='\n';)
{
if(c>='A'&&c<='Z')
	printf("%c",c+32);
else
	printf("%c",c);
}
printf("\n");
return 0;
}