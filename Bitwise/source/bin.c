#include<stdio.h>
int main(){
    unsigned int num = 10;
/*    for(int i=1<<30;i>0;i=i>>1){
        if(a&i){
            printf("1");
        }else{
            printf("0");
        }
    }
}*/

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
