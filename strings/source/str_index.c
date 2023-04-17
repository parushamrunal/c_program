#include<stdio.h>
int strindex(char *str, char c);
void main()
{
	char str[100],c;
	fgets(str,50,stdin);
	scanf("%c",&c);
	int result=strindex(str,c);
	printf("element found at:%d\n",result);
}
int strindex(char *str, char c)
{
	int i,count=0;
	for(i=0;*str!='\0';i++)
		{
			if(*str==c)
			{
				count++;
				if(count==1)
				{
					break;
				}
			}
		str++;
		}
	return i;
}
