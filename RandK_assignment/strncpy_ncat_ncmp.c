#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char *strncopy(char *s1, char *s2, int n);
char *strnappend(char *s1, char *s2, int n );
int strncomp(char *s1,char *s2, int n);
int main(void) {
	char *s1, *s2;
	int n;
	s1 = (char*)malloc(sizeof(char)*100);
	fgets(s1, 100, stdin);
	*(s1+(strlen(s1))-1)='\0';
	s2 = (char*)malloc(sizeof(char)*100);
	fgets(s2, 100, stdin);
	*(s2+(strlen(s2))-1)='\0';
	printf("strncopy : %s\n",strncopy(s1,s2,n));
	printf("strnappend : %s\n",strnappend(s1,s2,n));
	printf("strncomp: %d",strncmp(s1, s2, n));
	return 0;
}
char *strncopy(char *s1, char *s2, int n){
	char *temp = s2;
	int count = 0;
	while(*s1 != '\0'){
		*s1 = *s2;
		s1++;
		s2++;
		if(count = n){
			break;
		}s2 = '\0';
	}return temp;
}
char *strnappend(char *s1, char *s2, int n){
	char *temp = s2;
	int count = 0;
	while(*s2 != '\0'){
		*temp = *s2;
		s2++;
		temp++;		
	}
	while(*s1 != '\0'){
		*temp = *s1;
		s1++;
		temp++;
		count++;
		if(count == n){
			break;
		}
	}s1 =  '\0';
	return temp;
}
int strncomp(char *s1,char *s2, int n){
int count = 0;
    while(*s1 != '\0' && *s2 != '\0'){
        if(*s1 == *s2){
            s1++;
            s2++;
            count++;
            if(count == n){
                return 0;
                break;
            }
        }
        else if(strlen(s1) > strlen(s2)){
            return 1;
        }
        else{
            return -1;
        }
	}
}
