//�����⣬��Ҫ������������������ӷ�Ϊ�����֣����������ĺ�����ȫ��
//����������Ϊ���������沿�ִ�A�ƶ���C������B�������������ƶ���C;���B�ϵĽ���A�ƶ���C
#include<stdio.h>
int main()
{
void hanoi(int n,char A,char B,char C);
void move(char x,char y);
int n;
printf("�����ƶ�����������\n");
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
