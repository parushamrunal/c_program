//checking whether the string 2 is present at the string 1 or not
//fo checking first we need to move the pointer by len1 - len2
//after that compare the two strings and return 1 if the string2 is present at the end of the string1 otherwise return 0
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int str_end(char *s , char *t);
int str_end(char *s , char *t){
    int len1, len2 , i = 0;
    len1 = strlen(s); //length of the first string
    len2 = strlen(t);//length of the second string
    if(len2 >len1){
        printf("string t is not in the string s\n");
        return 0;
    }
    s += (len1 - len2);//moving the pointer in the strnig 1 to the starting position of the string2
    while(*s!='\0'){
        if(*s==*t){//comparing both strings
            s++;
            t++;
            i++;
        }
        else{
            return 0;
            break;
        }
    }
    if(i == len2){ //comparing i value incremented is equal to the length of the string 2
    {
        return 1;
    }
}
}
int main(){
    char *str1 = NULL;
    char *str2 = NULL;
    int s;
    str1 = (char *) malloc(sizeof(char)*100);
    str2 = (char *)malloc(sizeof(char)*100);
    printf("Enter the string 1\n");
    fgets(str1,100,stdin);
    *(str1+(strlen(str1)-1))= '\0';
    printf("enter the string2\n");
    fgets(str2 , 100, stdin);
    *(str2+(strlen(str2)-1))='\0';
    s = str_end(str1,str2);
    printf("the return value of the str_end is %d\n",s);
    if(s==1){
        printf("string 2 is presented at the end of the strnig 1\n");
    }
    else{
        printf("string 2 is not presented at the end of the string 1\n");
   }
   free(str1);
   free(str2);
   str1 = NULL;
   str2 = NULL;
   return 0;
}
