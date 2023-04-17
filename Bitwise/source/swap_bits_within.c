#include"header.h"
unsigned int swap_bits_within_(unsigned int snum, unsigned int dnum, unsigned int s, unsigned int d)
{
	printf("enter a number num: \n");
	scanf("%x",&num);
	printf("enter a 1st position s: \n");
	scanf("%x",&s);
	printf("enter a 2nd position d: \n");
	scanf("%x",&d);
	temp1=(num>>s)&1;
	temp2=(num>>d)&1;
	res=temp1^temp2;
	res=(res<<s)|(res<<d);
	result=num^res;
	printf("%x",result);
	return res;
}
