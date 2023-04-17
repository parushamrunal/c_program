#include<stdio.h>
#include<string.h>
char *strnappend(char *dest, const char *src, int n);
void main()
{
	char src[100],dest[100];
    int n;
    fgets(src,50,stdin);
	fgets(dest,50,stdin);
    scanf("%d",&n);
    strnappend(dest,src,n);
    printf("%s\n",dest);
}
char *strnappend(char *dest, const char *src, int n)
{
	while(*dest!='\0')
	{
		dest++;
		if(*dest=='\n')
		{
			*dest='\0';
		}
	}
	for(int i=0;i<n;i++)
    {
        *dest=*src;
        dest++;
        src++;
        if(*src=='\0')
        {
           *dest='\0';
        }
    }
}
