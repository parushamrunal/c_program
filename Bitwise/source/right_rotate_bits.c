#include"header.h"
unsigned int right_rotate_bits (unsigned int num, unsigned int n)
{
	unsigned int temp, size;
	printf("enter the number:\n");
	scanf("%x",&num);
	printf("enter the number of bits u want to rotate:\n");
	scanf("%d",&n);
	size=sizeof(num)*8;
	temp=(num>>n)|(num<<(size-n));
	printf("%x",temp);
	return temp;
}

