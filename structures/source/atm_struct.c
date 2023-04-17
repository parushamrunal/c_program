#include<stdio.h>
#pragma pack(1)
struct atm{
	int gfc:4;
	int vpi:8;
	long int vci:16;
	int hec:8;
	int pt:3;
	int clp:1;
};
int main(void){
	printf("%ld-bytes",sizeof(struct atm));
	printf("\n");
}
