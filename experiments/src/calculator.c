#include"../hdr/header.h"
int main()
{
	int fn,sn,ch;
	printf("enter the fn and sn:");
	scanf("%d%d", &fn ,&sn);
	while(1){
		ch = getchar();
		if((ch>=48&&ch<=57)||(ch==32)){
			continue;
	}
	else if(ch=='\n'){
		break;
	}
	else{
	printf("enter only integer values:");
	exit(0);
		}
}
	int add_res=add(fn,sn);
	int sub_res=sub(fn,sn);
	int mul_res=mul(fn,sn);
	int divd_res=divd(fn,sn);
	int mod_res=mod(fn,sn);
	printf("\naddition of fn and sn:=%d",add_res);
	printf("\nsubstraction of fn and sn:=%d",sub_res);
	printf("\nmultplication of fn and sn:=%d",mul_res);
	printf("\ndivision of fn and sn:=%d",divd_res);
	printf("\nmodulus of fn and sn:=%d",mod_res);
	return 0;
}
