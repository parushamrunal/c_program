#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int rem(char *str){
	char *temp = str;
	int space = 1;
	while(*str != '\0'){
		if(*str == ' ' && *(str + 1)== ' '){
			space++;
			if(space != 1){
				*str = *(str + 1);
				*str++;
			}
		}str++;
	}str = '\0';
	printf("%s\n",temp);
}
int main(void){
	char *str;
	str = (char*)malloc(sizeof(char)*100);
	printf("enter the string :");
	fgets(str, 100, stdin);
	*(str+(strlen(str))-1)='\0';
	rem(str);
}
