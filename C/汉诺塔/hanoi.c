//次问题，需要两步骤来解决，将盘子分为两部分，即下面最大的和上面全部
//以三个盘子为例，将上面部分从A移动至C，借助B；随后将下面最大移动至C;最后将B上的借助A移动至C
#include<stdio.h>
int main()
{
void hanoi(int n,char A,char B,char C);
void move(char x,char y);
int n;
printf("输入移动的盘子数：\n");
scanf("%d",&n);
hanoi(n,'A','B','C');
return 0;
}


void hanoi(int n,char A,char B,char C)
{
if(n==1)
	move(A,C);
else
{
	hanoi(n-1,A,C,B);
	move(A,C);
	hanoi(n-1,B,A,C);
}
}

void move(char x,char y)
{
printf("%c-->%c\n",x,y);
}
