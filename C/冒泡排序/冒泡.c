//采用冒泡法进行排序，将大的数沉到最后面，比较9趟，每趟比较9-i次
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
