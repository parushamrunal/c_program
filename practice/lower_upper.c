#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char *str;
	str = (char *)malloc(sizeof(char)*100);
	printf("enter the string : ");
	fgets(str, 100, stdin);
	*(str+(strlen(str))-1)='\0';
	char *temp = str;
	if(*str >= 'a' && *str <= 'z'){
		*str = *str - 32;
	}
	while(*str){
		if(*str == ' '){
			str++;
			if((*str >= 'a') && (*str <= 'z')){
				*(str) = *str-32;
			}
		}str++;
	}printf("%s\n",temp);
}
