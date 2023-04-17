#include "header.h"
unsigned int set_bits (unsigned int dnum, unsigned int p, unsigned int n, unsigned int snum)
{
	printf("enter source number:\n");
	scanf("%d",&snum);
	printf("enter destination number:\n");
	scanf("%d",&dnum);
	printf("enter no of bits:\n");
	scanf("%d",&n);
	printf("enter position:\n");
	scanf("%d",&p);
	return dnum & ~(~(~0<<n)<<(p+1))|(snum&(~(~0<<n))<<(p+1-n));
}
