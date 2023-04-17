#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdio_ext.h>
int main(void) {
        char *str1;
        char *str2;
        char pos;
        str1=(char*)malloc(sizeof(char)*100);
        printf("enter the string1:");
        fgets(str1,100,stdin);
        *(str1+(strlen(str1)-1))='\0';
		str2=(char*)malloc(sizeof(char)*100);
        printf("enter the string2:");
        fgets(str2,100,stdin);
        *(str2+(strlen(str2)-1))='\0';
        printf("enter the position  :");
        scanf("%c",&pos);
        while(*str1!= '\0' && *str2!='\0'){
                if(pos == *str1){
                        printf("%s",str2);
                                str1++;
                }
                printf("%c",*str1);
                str1++;
        }
}
