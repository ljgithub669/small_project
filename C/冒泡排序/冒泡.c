//����ð�ݷ��������򣬽��������������棬�Ƚ�9�ˣ�ÿ�˱Ƚ�9-i��
#include<stdio.h>
int main()
{
int i,j,t;
int a[10];
printf("input 10 numbers:\n");
for(i=0;i<=9;i++)
scanf("%d",&a[i]);

for(i=0;i<9;i++)
	for(j=0;j<9-i;j++)
		{if(a[j]>a[j+1]) {t=a[j+1];a[j+1]=a[j];a[j]=t;}}

printf("sequence result:\n");
for(i=0;i<=9;i++)
printf("%-5d",a[i]);
printf("\n");
return 0;
}
