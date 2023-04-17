#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void){
	unsigned int num, res,i,size,n,res1,res2;
	printf("enter the num : ");
	scanf("%u",&num);
    printf("enter the value of n : ");
    scanf("%d",&n);
    for(i = 31; i < 32; i--){
    	res = num >> i;
        if(res & 1){
        	printf("1 ");
        }else{
            printf("0 ");
    	}
    }
     printf("\n");
     size = sizeof(num) * 8;
     res1 = (num >> n)|(num << (size - n));
     for(i = 31; i < 32; i--){
     	res2 = res1 >> i;
        if(res2 & 1){
        	printf("1 ");
        }else{
            printf("0 ");
        }
     }
     printf("\n");
}
