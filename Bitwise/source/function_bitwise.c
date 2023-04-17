#include<stdio.h>

unsigned int bin_rep(unsigned int num)
{
 	int res,temp=1;
 	for(int i=31;i>=0;i--){
 	res=num>>i;
 	if(res&1){
 		printf("1");
 	}
 	else{
 	printf("0");
 	}
 }
 	printf("\n");
 	return 0;
}
unsigned int swap_bits_within(unsigned int num,unsigned int s,unsigned int d)
{
 	unsigned int temp1,temp2,res,result;
 	printf("enter a number:\n");
 	scanf("%x",&num);
 	printf("enter first position:\n");
 	scanf("%x",&s);
 	printf("enter second position:\n");
 	scanf("%x",&d);
 	temp1=(num>>s) & 1;
 	temp2=(num>>d) & 1;
 	res=temp1 ^ temp2;
 	res=(res<<s)|(res<<d);
 	result=num^res;
 	printf("%x",result);
 	return res;
}
int swap_bits_between(unsigned int snum,unsigned int dnum, unsigned int s,unsigned int d)
{
 	unsigned int temp1,temp2,temp3,res1,res2,result1,result2;
 	printf("enter a number:\n");
 	scanf("%x",&snum);
 	bin_rep(snum);
 	printf("enter another number:\n");
 	scanf("%x",&dnum);
 	bin_rep(dnum);
 	printf("enter snum position:\n");
 	scanf("%x",&s);
 	printf("enter dnum position:\n");
 	scanf("%x",&d);
 	temp1=(snum>>s)&1;
 	temp2=(dnum>>d)&1;
 	temp3=temp1^temp2;
 	res1=temp3<<s;
 	res2=temp3<<d;
 	result1=res1^snum;
 	result2=res2^dnum;
 	printf("%x\n",result1);
 	bin_rep(result1);
 	printf("%x\n",result2);
 	bin_rep(result2);
 	return 0;
}
unsigned int toggle_even_bits(unsigned int num)
{
 	int res=0, count=0;
 	printf("Enter a number:\n");
 	scanf("%d",&num);
 	for(int temp=num; temp>0; temp>>=1){
 	if(count % 2==1)
 	res=res|(1<<count);
 	count++;
 }
 	printf("%d\n",num^res);
 	return 0;
	scanf("%d",&n);
}
unsigned int toggle_odd_bits(unsigned int num)
{
 	unsigned int res=0, count=0;
 	printf("Enter a number:\n");
 	scanf("%x",&num);
 	for(int temp=num; temp>0; temp>>=1){
 		if(count % 2==0)
 		res=res|(1<<count);
 		count++;
 	}
 	printf("%x\n",num^res);
 	return 0;
}
unsigned int left_rotate_bits(unsigned int num, unsigned int n)
{
 	unsigned int temp, size;
 	printf("enter a number:\n");
 	scanf("%x",&num);
 	printf("enter number of bits u want to rotate:\n");
 	scanf("%d",&n);
 	size=sizeof(num)*8;
 	temp=num<<n|num>>(size-n);
 	printf("%x",temp);
 	return temp;
}
unsigned int right_rotate_bits(unsigned int num, unsigned int n)
{
 	unsigned int temp, size;
 	printf("enter a number:\n");
 	scanf("%x",&num);
 	printf("enter number of bits u want to rotate:\n");
 	scanf("%d",&n);
 	size=sizeof(num)*8;
 	temp=(num>>n)|(num<<(size-n));
 	printf("%x",temp);
 	return temp;
}
unsigned int count_clear_bits(unsigned int num)
{
 	unsigned int count=0;
 	printf("enter a number:\n");
 	scanf("%x",&num);
 	for(int i=1;i<=num;i=i<<1){
 		if((i & num)==0){
 			count++;
		}
 	}
 	printf("%d",count);
 	return count;
}
unsigned int count_set_bits(unsigned int num)
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
unsigned int count_leading_set_bits(unsigned int num)
{
 	printf("enter a number:\n");
 	scanf("%x",&num);
 	int count=0, size;
 	size = sizeof(num)*8;
 	for(int i = 0; i < size; i++){
 		if((num >> i) & 1 == 1){
 		count++;
	 	}
 	}
 	printf("%d",count);
 	return count;
}
unsigned int count_leading_clear_bits (unsigned int num)
 {
	
     printf("Enter a number:\n");	
     scanf("%d",&num);
     for(i=1<<31;i>0;i=i>>1)
     {
         if(i & num)
         {
             continue;
         }
         else
         {
             count++;
         }
     }
     printf("%d\n",count);
}
unsigned int count_trailing_set_bits (unsigned int num)
{
    printf("enter a number :\n");
    scanf("%d",&num);
	for(i=1;i<2147483648;i=i<<1)
    {
        if(i & num)
        {
            count++;
        }
        else
        {
            break;
        }
    }
    printf("%d\n",count);
}
unsigned int count_trailing_clear_bits (unsigned int num)
{
	printf("Enter number:\n");
    scanf("%d",&num);
	for(i=1;i<2147483648;i=i<<1)
	{
  	if(i & num)
        {
            continue;
        }
        else
        {
            count++;
        }
    }
}
