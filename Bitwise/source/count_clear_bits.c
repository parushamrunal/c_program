#include<stdio.h>
//#include"header.h"
int main()//unsigned int count_clear_bits (unsigned int num)
{
	unsigned int count=0,num;
	printf("enter the number:\n");
	scanf("%x",&num);
	for(int i=1;i<=num;i=i<<1){
		if((i&num)==0){
			count++;
		}
	}
	printf("%d",count);
	return count;
}
