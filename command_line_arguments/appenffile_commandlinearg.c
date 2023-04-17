#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[]){
	FILE *fp,*fp1;
	char str[100],c[100];
	fp=fopen("megafile.txt","a");
	if(fp==NULL){
		printf("file not exist");
		exit(0);
	}
	fp1=fopen(argv[1],argv[2]);
	if(fp1==NULL){
		printf("file not exist");
		exit(0);
	}
//	c=fgetc(fp);
	while((c = fgets(fp1)) !=NULL){
		fputs(c,fp);
		c=fgets(fp);
	}
	printf("content appended\n");
	fprintf(fp,"%s",c);
	fclose(fp);
	fclose(fp1);
	return 0;
}
