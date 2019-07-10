//字符转8位二进制串
#include<stdio.h>

int main()
{
char c1;
for(;(c1=getchar())!='\n';)
{
printf("0");//由于首位0不输出
if(c1==' ')
{
	printf("0");
	printf("%o",00100000);//32
}
else
	if(c1=='!')
	{
	printf("0");
	printf("%o",00100001);//33
	}
else
	if(c1=='"')
	{
	printf("0");
	printf("%o",00100010);//34
	}
else
	if(c1=='#')
	printf("%o",00100011);//35

else
	if(c1=='$')
	{
	printf("0");
	printf("%o",00100100);//36
	}

else
	if(c1=='%')
	{
	printf("0");
	printf("%o",00100101);//37
	}

else
	if(c1=='&')
	{
	printf("0");
	printf("%o",00100110);//38
	}

else
	if(c1=='\'')
	{
	printf("0");
	printf("%o",00100111);//39
	}

else
	if(c1=='(')
	{
	printf("0");
	printf("%o",00101000);//40
	}

else
	if(c1==')')
	{
	printf("0");
	printf("%o",00101001);//41
	}

else
	if(c1=='*')
	{
	printf("0");
	printf("%o",00101010);//42
	}

else
	if(c1=='+')
	{
	printf("0");
	printf("%o",00101011);//43
	}

else
	if(c1==',')
	{
	printf("0");
	printf("%o",00101100);//44
	}

else
	if(c1=='-')
	{
	printf("0");
	printf("%o",00101101);//45
	}

else
	if(c1=='.')
	{
	printf("0");
	printf("%o",00101110);//46
	}
else
	if(c1=='/')
	{
	printf("0");
	printf("%o",00101111);//47
	}
else
	if(c1=='0')
	{
	printf("0");
	printf("%o",00110000);//48
	}
else
	if(c1=='1')
	{
	printf("0");
	printf("%o",00110001);//49
	}
else
	if(c1=='2')
	{
	printf("0");
	printf("%o",00110010);//50
	}
else
	if(c1=='3')
	{
	printf("0");
	printf("%o",00110011);//51
	}
else
	if(c1=='4')
	{
	printf("0");
	printf("%o",00110100);//52
	}

else
	if(c1=='5')
	{
	printf("0");
	printf("%o",00110101);//53
	}
else
	if(c1=='6')
	{
	printf("0");
	printf("%o",00110110);//54
	}
else
	if(c1=='7')
	{
	printf("0");
	printf("%o",00110111);//55
	}
else
	if(c1=='8')
	{
	printf("0");
	printf("%o",00111000);//56
	}
else
	if(c1=='9')
	{
	printf("0");
	printf("%o",00111001);//57
	}

else
	if(c1==':')
	{
	printf("0");
	printf("%o",00111010);//58
	}

else
	if(c1==';')
	{
	printf("0");
	printf("%o",00111011);//59
	}

else
	if(c1=='<')
	{
	printf("0");
	printf("%o",00111100);//60
	}
else
	if(c1=='=')
	{
	printf("0");
	printf("%o",00111101);//61
	}
else
	if(c1=='>')
	{
	printf("0");
	printf("%o",00111110);//62
	}

else
	if(c1=='?')
	{
	printf("0");
	printf("%o",00111111);//63
	}

else
	if(c1=='@')
	printf("%o",01000000);//64

else
	if(c1=='A')
	printf("%o",01000001);//65

else
	if(c1=='B')
	printf("%o",01000010);//66
else
	if(c1=='C')
	printf("%o",01000011);//67

else
	if(c1=='D')
	printf("%o",01000100);//68

else
	if(c1=='E')
	printf("%o",01000101);//69

else
	if(c1=='F')
	printf("%o",01000110);//70

else
	if(c1=='G')
	printf("%o",01000111);//71

else
	if(c1=='H')
	printf("%o",01001000);//72

else
	if(c1=='I')
	printf("%o",01001001);//73

else
	if(c1=='J')
	printf("%o",01001010);//74

else
	if(c1=='K')
	printf("%o",01001011);//75

else
	if(c1=='L')
	printf("%o",01001100);//76

else
	if(c1=='M')
	printf("%o",01001101);//77

else
	if(c1=='N')
	printf("%o",01001110);//78

else
	if(c1=='O')
	printf("%o",01001111);//79

else
	if(c1=='P')
	printf("%o",01010000);//80

else
	if(c1=='Q')
	printf("%o",01010001);//81

else
	if(c1=='R')
	printf("%o",01010010);//82

else
	if(c1=='S')
	printf("%o",01010011);//83

else
	if(c1=='T')
	printf("%o",01010100);//84

else
	if(c1=='U')
	printf("%o",01010101);//85

else
	if(c1=='V')
	printf("%o",01010110);//86

else
	if(c1=='W')
	printf("%o",01010111);//87

else
	if(c1=='X')
	printf("%o",01011000);//88

else
	if(c1=='Y')
	printf("%o",01011001);//89

else
	if(c1=='Z')
	printf("%o",01011010);//90

else
	if(c1=='[')
	printf("%o",01011011);//91

else
	if(c1=='\\')
	printf("%o",01011100);//92

else
	if(c1==']')
	printf("%o",01011101);//93

else
	if(c1=='^')
	printf("%o",01011110);//94

else
	if(c1=='_')
	printf("%o",01011111);//95

else
	if(c1=='`')
	printf("%o",01100000);//96

else
	if(c1=='a')
	printf("%o",01100001);//97
else
	if(c1=='b')
	printf("%o",01100010);//98
else
	if(c1=='c')
	printf("%o",01100011);//99

else
	if(c1=='d')
	printf("%o",01100100);//100

else
	if(c1=='e')
	printf("%o",01100101);//101

else
	if(c1=='f')
	printf("%o",01100110);//102

else
	if(c1=='g')
	printf("%o",01100111);//103

else
	if(c1=='h')
	printf("%o",01101000);//104

else
	if(c1=='i')
	printf("%o",01101001);//105

else
	if(c1=='j')
	printf("%o",01101010);//106

else
	if(c1=='k')
	printf("%o",01101011);//107

else
	if(c1=='l')
	printf("%o",01101100);//108

else
	if(c1=='m')
	printf("%o",01101101);//109

else
	if(c1=='n')
	printf("%o",01101110);//110

else
	if(c1=='o')
	printf("%o",01101111);//111

else
	if(c1=='p')
	printf("%o",01110000);//112

else
	if(c1=='q')
	printf("%o",01110001);//113

else
	if(c1=='r')
	printf("%o",01110010);//114

else
	if(c1=='s')
	printf("%o",01110011);//115

else
	if(c1=='t')
	printf("%o",01110100);//116

else
	if(c1=='u')
	printf("%o",01110101);//117

else
	if(c1=='v')
	printf("%o",01110110);//118

else
	if(c1=='w')
	printf("%o",01110111);//119

else
	if(c1=='x')
	printf("%o",01111000);//120

else
	if(c1=='y')
	printf("%o",01111001);//121
else
	if(c1=='z')
	printf("%o",01111010);//122
else
	if(c1=='{')
	printf("%o",01111011);//123

else
	if(c1=='|')
	printf("%o",01111100);//124

else
	if(c1=='}')
	printf("%o",01111101);//125

else
	if(c1=='~')
	printf("%o",011110110);//126


printf("\n");//词句测试使用
}
printf("\n");
return 0;
}