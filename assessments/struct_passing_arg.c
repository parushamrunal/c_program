#include<stdio.h>
struct std{
    int id;
    int class;
    char name[10];
};
void std(struct std a);
void main()
{
    struct std s;
    printf("enter the id:");
    scanf("%d",&s.id);
    printf("enter the class:");
    scanf("%d",&s.class);
    printf("enter the name:");
    scanf("%s",s.name);
    std (s);
}
void std(struct std a)
{
    printf("%d\n%d\n%s",a.id,a.class,a.name);
}

