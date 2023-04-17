#include"header.h"
unsigned int count_set_bits (unsigned int num)
{
	unsigned int count=0;
	printf("enter a number:\n");
	scanf("%x",&num);
	while(num){
		count=count+(num&1);
		num=num>>1;
		}
	printf("%x",count);
	return count;
}
