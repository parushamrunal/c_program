#include<stdio.h>
struct tcp{
	int source_port:16;
	int destination_port:16;
	int sequemce_number:32;
	int acknowledgment_number:32;
	int header_length:4;
	int reserved:6;
	int urg:1;
	int ack:1;
	int psh:1;
	int rst:1;
	int syc:1;
	int fin:1;
	int window:16;
	int checksum:16;
	int urgent_pointer:16;
};
int main(void){
	printf("%ld-bytes",sizeof(struct tcp));
	printf("\n");
}
