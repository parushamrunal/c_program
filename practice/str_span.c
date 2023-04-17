#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	char *str;
	char *str1;
	str = (char *)malloc(sizeof(char)*100);
	str1 = (char *)malloc(sizeof(char)*100);
	printf("enter the str : ");
	fgets(str, 100, stdin);
	*(str+(strlen(str))-1)='\0';	
	printf("enter the str1 : ");
	fgets(str1, 100, stdin);
	*(str1+(strlen(str1))-1)='\0';
	int count = 0;
	char *temp = str1;
	while(*str){
		while(*str1){
			if(*str == *str1){
				count++;
				str1=temp;
				break;
			}else{
				str1++;
			}
		}str++;
	}
	printf("%d",count);
	return 0;
}
