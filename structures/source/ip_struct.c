#include<stdio.h>
#pragma pack(1)
struct ip{
	char version:4;
	char IHL:4;
	char type_of_service:8;
	int total_length:16;
	int identification:16;
	char DF:1;
	char MF:1;
	int fragment_offset:13;
	char time_to_live:8;
	char protocol:8;
	int header_checksum:16;
	int source:32;
	int destination:32;
};
int main(void){
	printf("%ld-byte",sizeof(struct ip));
	printf("\n");
}
