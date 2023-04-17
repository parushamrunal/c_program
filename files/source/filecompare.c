#include<stdio.h>
#include<stdlib.h>
int main(void) {
   FILE *fp1, *fp2;
   char ch1, ch2;
   fp1 = fopen("mrunal.txt", "r");
   fp2 = fopen("munaaa.txt", "r");
   if (fp1 == NULL) {
      printf("Cannot open 1st file for reading ");
      exit(1);
   } else if (fp2 == NULL) {
      printf("Cannot open 2nd file for reading ");
      exit(1);
   } else {
      ch1 = getc(fp1);
      ch2 = getc(fp2);
      while ((ch1 != EOF) && (ch2 != EOF)) {
         ch1 = getc(fp1);
         ch2 = getc(fp2);
      }
      if (ch1 == ch2)
         printf("Files are same");
      else if (ch1 != ch2)
         printf("Files are not same");
      fclose(fp1);
      fclose(fp2);
   }
   return (0);
}
