//#include"header.h"
#include<stdio.h>
//unsigned int left_rotate_bits (unsigned int num, unsigned int n)
int main(){
	int num,n,size,tenp;
	//unsigned int temp, size;
	printf("enter a number:\n");
	scanf("%x",&num);
	printf("enter the number of bits u want to rotate:\n");
	scanf("%d",&n);
	size=sizeof(num)*8;
	tenp=num<<n|num>>(size-n);
	printf("%x",tenp);
//	return temp;
}
