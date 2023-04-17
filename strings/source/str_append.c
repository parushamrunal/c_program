#include<stdio.h>
#include<string.h>
char *strappend(char *dest, const char *src);
void main()
{
	char src[50],dest[50];
	printf("enter the strings:");
	fgets(src,50,stdin);
	fgets(dest,50,stdin);
	strappend(dest,src);
	printf("%s",dest);
}
char *strappend(char *dest, const char *src)
{   
    while(*dest!='\0')
	{
		dest++;
		if(*dest=='\n')
		{
			break;
		}
	}    
    while(*src!='\0')  
    {     
        *dest=*src;  
		src++;
		dest++;
		if(*src=='\n')
		{
			*dest='\0';
			break;
		}
	}
}
