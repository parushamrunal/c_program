#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int main(){
	char *str;
	char c;
	str = (char *)malloc(sizeof(char)*100);
	printf("enter the string : ");
	fgets(str, 100, stdin);
	*(str+(strlen(str))-1)='\0';
	printf("enter the char : ");
//	fgetc(c);
	scanf("%c",&c);
	char *temp = str;
	while(*str!='\0'){
		if(*str == c){
			printf("1\n");
			break;
		}else{
			printf("0\n");
			break;
		}
	}str++;
}
