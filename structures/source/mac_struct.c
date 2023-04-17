#include<stdio.h>
#pragma pack(2)
struct mac{
	int frame;
	int duration_id;
	long int a1:48;
	long int a2:48;
	long int a3:48;
	int seq;
	long int a4:48;
};
int main(void){
	printf("%ld-bytes",sizeof(struct mac));
	printf("\n");
}
