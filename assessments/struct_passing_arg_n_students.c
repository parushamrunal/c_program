#include<stdio.h>
struct std{
    int id;
    int class;
    char name[10];
	char grade;
};
void std(struct std *a, int n);
void main()
{
    struct std *ptr;
    struct std s[10];
    ptr=s;
	int n;
	printf("enter the no of students : ");
	scanf("%d",&n);
    for(int i=0; i< n; i++) {
    printf("enter the id:");
    scanf("%d",&(ptr+i)->id);
    printf("enter the class:");
    scanf("%d",&(ptr+i)->class);
    printf("enter the name:");
    scanf("%s",(ptr+i)->name);
	printf("enter the grade:");
	scanf(" %c",&(ptr+i)->grade);
    }
    std (ptr,n);
}
void std(struct std *a, int n)
{   
    for(int i=0;i<n;i++){
        printf("id:%d\nclass:%d\nname:%s\ngrade:%c\n",a->id,a->class,a->name,a->grade);
       a++;
    }
}
