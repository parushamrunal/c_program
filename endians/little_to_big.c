#include<stdio.h>
int main(void) {
    unsigned int i;
    unsigned int a;
    printf("enter the hexal decimal number :");
    scanf("%x",&i);
    a=((i&0x000000ff)<<24)^(((i&0x0000ff00)<<16)>>8)^(((i&0x00ff0000)<<8)>>16)^(((i&0xff000000)<<0)>>24);
    printf("%x\n",a);
    return 0;
}
