#include<stdlib.h>
#include<string.h>
#include <stdio.h>
long a_to_i(char* S)
{
    long num = 0;
    int i = 0;
    while (*(S+i) && (*(S+i) >= '0' && *(S+i) <= '9'))
    {
        num = num * 10 + (*(S+i) - '0');
        i++;
    } 
    return num;
}
int main(void)
{
    //char S[] = "9876";
	char *S;
	S = (char *)malloc(sizeof(char)*10);
	printf("enter the string : ");
	fgets(S, 10, stdin);
	*(S+(strlen(S))-1)='\0';
    printf("%ld ", a_to_i(S));
    return 0;
}


