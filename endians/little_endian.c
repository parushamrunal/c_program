#include<stdio.h>
int main(void){
    unsigned int a = 1;
    char c = (char)a;
    if(c){
        printf("little endian.\n");
    }
    else{
        printf("big endian.\n");
    }
    return 0;
}
