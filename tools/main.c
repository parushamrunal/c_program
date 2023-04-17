#include<stdio.h>
#include<limits.h>
int voidadd(int n1,int n2);
int voidsub(int n1,int n2);
int voidmul(int n1,int n2);
int voiddiv(int n1,int n2);
int voidmod(int n1,int n2);
int main()
{
	int fn,sn;
	int add,sub,mul,div,mod;
	printf("enter the fn:");
	scanf("%d", &fn);
	printf("enter the sn:");
	scanf("%d",&sn);
	add=voidadd(fn,sn);
	sub=voidsub(fn,sn);
	mul=voidmul(fn,sn);
	div=voiddiv(fn,sn);
	mod=voidmod(fn,sn);
	printf("\naddition of fn and sn:=%d",add);
	printf("\nsubstraction of fn and sn:=%d",sub);
	printf("\nmultplication of fn and sn:=%d",mul);
	printf("\ndivision of fn and sn:=%d",div);
	printf("\nmodulus of fn and sn:=%d",mod);
	return 0;
}
