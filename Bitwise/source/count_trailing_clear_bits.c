#include "header.h"
unsigned int count_reailing_clear_bits(unsigned int num)
{
	unsigned int x;
	printf("enter the number:");
	scanf("%d",&x);
	int count=0;
	int x;
	while((x&1)==0)
	{
		x=x>>1;
		count++;
	}
	printf("%d",count_trailing_clear_bits(11));
	return 0;
}
