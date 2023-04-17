#include<stdio.h>
int invers(unsigned int x, int n, int p, int i);
int main(void) {
	unsigned int x,n,p,i;
	printf("enter the value of x:");
	scanf("%d",&x);
	printf("enter the value of n:");
	scanf("%d",&n);
	printf("enter the value of p:");
	scanf("%d",&p);
	invers(x,n,p,x);
	return 0;
}
int invers(int x, int n, int p, int i)
	for(i=n;i>0;i--){
		if(p>0){
			if((x&(1<<i))!=0){
				x=x^(1<<i);
			}
			else{
				x=x^(1<<i);
			}
			p--;
		}
	}
	printf("%d\n",x);
	for(i=1<<7;i>0;i=i>>1){
		if(x&i){
			printf("1");
		}
		else{
			printf("0");
		}
	}
	return x;
}
