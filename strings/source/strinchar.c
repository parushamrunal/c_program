#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char *strinschr(char *str, const char c, int pos);
int main(void) {
        char *str,c;
        int pos;
        str = (char *)malloc(sizeof(char) *100);
        printf("enter the string : ");
        fgets(str, 100, stdin);
        *(str+(strlen(str))-1) = '\0';
        printf("enter the character you want to insert : ");
        scanf("%c",&c);
        printf("enter the position to insert : ");
        scanf("%d",&pos);
        printf("%s",strinschr(str,c,pos));
}
char *strinschr(char *str, const char c, int pos){
        int i = strlen(str);
        char *temp = str;
        while(*str++){
        }
        while(i > 0){
                *str = *(str - 1);
                if(i == pos){
                        *(str - 1) = c;
                        break;
                }str--;
                i--;
        }
        return temp;
}
