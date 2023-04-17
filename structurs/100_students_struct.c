#include <stdio.h>
#include <string.h>
struct student {
    int roll_no;
    char name[50];
    float marks;
	char grade;
};
int main() {
    struct student students[5];
    for (int i = 0; i < 5; i++) {
        printf("Enter details of student %d:\n", i + 1);
        printf("Enter roll number: ");
        scanf("%d", &students[i].roll_no);
        printf("Enter name: ");
        scanf("%s", students[i].name);
        printf("Enter marks: ");
        scanf("%f", &students[i].marks);
		printf("Enter grade: ");
        scanf(" %c", &students[i].grade);    
//  		students[i].grade = getchar();
		}
    printf("\nDetails of all students:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nDetails of student %d:\n", i + 1);
        printf("Roll number: %d\n", students[i].roll_no);
        printf("Name: %s\n", students[i].name);	
        printf("Marks: %.2f\n", students[i].marks);	
        printf("grade: %c\n", students[i].grade);
    }

    return 0;
}

