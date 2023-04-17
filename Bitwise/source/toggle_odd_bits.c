#include"header.h"
unsigned int toggle_odd_bits (unsigned int num)
{
	unsigned int res=0, count=0;
	printf("enter a number:\n");
	scanf("%x",&num);
	for(int temp=num; temp>0;temp>>1){
		if(count%2==0)
			res=res|(1<<count);
		count++;
	}
	printf("%x",num^res);
	return 0;
}
