#include<stdlib.h>
#include<stdio.h>
int main(int argc, char *argv[]){
	char ch[100];
	FILE *fp1, *fp2;
	fp1 = fopen(argv[1], "r");
	fp2 = fopen(argv[2], "a");
	if(fp1 == NULL && fp2 == NULL){
		printf("error");
		exit(0);
	}
	while(fgets(ch, 100, fp1) !=  NULL){
		fputs(ch,fp2);
	}
	fclose(fp1);
	fclose(fp2);
	return 0;
}
