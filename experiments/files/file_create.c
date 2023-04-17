#include <stdio.h>
#include<stdlib.h>
int main() {
	char name[50];
	int marks,i,n;
	printf("Enter number of students: ");
	scanf("%d",&n);
	FILE *fptr;
//	fptr=fopen("student.txt","w");
	fptr=fopen("student.txt","a");
	for (i=0;i<n;++i) {
		printf("For student%d\n",i+1);
		printf("Enter name: ");
		scanf("%s",name);
		printf("Enter marks: ");
		scanf("%d",&marks);
		fprintf(fptr,"\nName: %s \nMarks=%d \n",name,marks);
	}
	fclose(fptr);
	return 0;
}
