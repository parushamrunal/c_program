#include<stdio.h>
int main(){
    unsigned int num = 15,x;
    for(int i = 31; i >= 0; i--){
        int res = num >> i;
        if(res & 1){
            printf("1 ");
        }else{
            printf("0 ");
        }
    }
    printf("\n");
    for(x = 1 << 31; x > 0; x = x >> 2){
        num = num ^ x;
    }
    for(int i = 31; i >= 0; i--){
        int res = num >> i;
        if(res & 1){
            printf("1 ");
        }else{
            printf("0 ");
        }
    }
} 
