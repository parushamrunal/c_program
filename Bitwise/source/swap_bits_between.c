#include"header.h"
int swap_bits_between(unsigned int snum,unsigned int dnum,unsigned int s,unsigned int d)
{
	unsigned int temp1,temp2,temp3,res1,res2,result1,result2;
	printf("enter a number snum :\n");
	scanf("%x",&snum);
	printf("enter a number dnum :\n");
	scanf("%x",&dnum);
	printf("enter the snum position :\n");
	scanf("%x",&s);
	printf("enter the dnum position :\n");
	scanf("%x",&d);
	temp1=(snum>>s)&1;
	temp2=(dnum>>d)&1;
	temp3=temp1^temp2;
	res1=temp3<<s;
	res2=temp3<<d;
	result1=res1^snum;
	result2=res2^dnum;
	printf("result1=res1^snum : %x\n",result1);
	printf("result2=res2^dnum : %x\n",result2);
	return 0;
}
