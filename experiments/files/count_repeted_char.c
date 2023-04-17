#include<stdio.h>
void main()
{
    int count = 0;
    FILE *fp;
    fp=fopen("abc.txt","r");
    char c;
    fseek(fp,0,SEEK_SET);
    while((c = fgetc(fp)) != EOF){
		if(c == 'a'){
			count++;
		}
    }
    printf("%d\n",count);
    fclose(fp);
}


