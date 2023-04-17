#include<stdio.h>
#include<stdlib.h>
int main(){
    char ch[100];
    FILE *fp;
    fp = fopen("abc.txt","a");
    if(fp==NULL){
        printf("error\n");
    }
    printf("enter a string:");
	scanf("%s",ch);
   // gets(ch);
    fprintf(fp,"%s\n",ch);
}
