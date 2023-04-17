#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char *str_cat(char *str , char *ptr){
    char *temp = str;
    char *s = temp;
    while(*str!='\0'){
        *temp = *str; //copying string1 to the new string
        temp++;
        str++;
    }
    while(*ptr!='\0'){
    *temp = *ptr; //copying string2 at the end of the new string
    temp++;
    ptr++;
    }
    temp = '\0';
    return s;
}
int main()
{
    char *str1 = NULL;
    char *str2 = NULL;
    str1 = (char *)malloc (sizeof(str1)*100);
    str2 = (char *)malloc(sizeof(str2)*100);
    printf("string concatenation at the end of the string\n");
    printf("enter the first string:\n");
    fgets(str1, 100, stdin);
    *(str1+(strlen(str1)-1)) = '\0';
    printf("enter the second string:\n");
    fgets(str2, 100, stdin);
    *(str2+(strlen(str2)-1)) = '\0';
    char *s = str_cat(str1, str2);
    printf("the concatenated string is %s\n",s);
    free(str1);
    free(str2);
    str1 = NULL;
    str2 = NULL;
    return 0;
}
