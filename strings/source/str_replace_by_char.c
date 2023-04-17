#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdio_ext.h>
int main(void) {
        char *str;
        char pos;
        char replace;
        int i;
        str=(char*)malloc(sizeof(char)*100);
        printf("enter the string:");
        fgets(str,100,stdin);
        __fpurge(stdin);
        printf("enter the which char to replace:");
        scanf("%c",&pos);
        __fpurge(stdin);
        printf("enter the char to replace:");
        scanf("%c",&replace);
        __fpurge(stdin);
        *(str+(strlen(str)-1))='\0';
        i = 0;
        while(*(str+i) != '\0'){
                if(*(str+i) == pos){
                        *(str+i) = replace;
                }
                i++;
        }
        printf("str=%s",str);
        return 0;
}
