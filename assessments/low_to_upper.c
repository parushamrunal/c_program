#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void) {
	char *str;
	str = (char *)malloc(sizeof(char)*100);
	printf("enter the string:");
	fgets(str, 100, stdin);
	*(str + (sizeof(str) - 1)) = '\0';
	char temp = *str;
	while(*str!='\0'){
		if(*str = ' '){
			if(*str < 97 && *str > 122){
				*str++;
				*str=(*str)-32;
			}str++;
		}
		printf("%s",str);
	}
}
