#include<stdio.h>
void main()
{
        int count=0,count1=0;
           char a[20];
        FILE *fp;
        fp=fopen("myfile.txt","r");
      char c;
//        fseek(fp,0,SEEK_SET);
        while((c = fgetc(fp)) != EOF) {
                if(c == ' ' || c == '\n') {
                        count++;
                }else{
						count1++;
				}
        }
        printf("word: %d\n",count);
	    printf("char: %d\n",count1);
        fclose(fp);
}
