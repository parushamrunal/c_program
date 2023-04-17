#include<stdio.h>
int main()
//unsigned int copy_bits(unsigned int snum, unsigned int dnum, unsigned int n, unsigned int s, unsigned int d)
{
	int snum,dnum,n,s,d;
	printf("Enter the first number: \n");
	scanf("%d", &snum);
	printf("Enter the second number: \n");
	scanf("%d", &dnum);
	printf("Enter the number of bits to be copied: \n");
	scanf("%d", &n);
	printf("Enter the position in first number: \n");
	scanf("%d", &s);
	printf("Enter the position in second number: \n");
	scanf("%d", &d);
	unsigned int c=(1<<n)-1;
	unsigned int b=(snum>>s)&c;
	dnum&=~(c<<d);
	dnum|=b<<d;
	printf("dnum : %d\n",dnum);
}
