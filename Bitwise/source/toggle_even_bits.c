#include<stdio.h>
int main()
//unsigned int toggle_even_bits (unsigned int num)
{
	int res=0, count=0, num;
	printf("enter the number:\n");
	scanf("%x",&num);
	for(int temp=num;temp>0;temp>=1){
		if(count%2==1)
			res=res|(1<<count);
		count++;
	}
	printf("%d\n",num^res);
	return 0;
}

