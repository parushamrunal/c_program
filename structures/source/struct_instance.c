#include<stdio.h>
#include<stdlib.h>
struct d {
    int *p;
    char ch;
    short int sh;
};
struct c { 
    char *name;
    struct d *dt;
};
struct b {
    int num;
    struct c ct;
};
struct a {
    int *a;
    struct b *bt;
};
int main(void) {
    struct a var;
    struct a *ptr = &var;
    int n=5;
    ptr = (struct a*)malloc(n*sizeof(struct a));
    ptr->a = (int*)malloc(sizeof(int));
    ptr->bt = (struct b*)malloc(sizeof(struct b));
    ptr->bt->ct.name = (char*)malloc(sizeof(char));
    ptr->bt->ct.dt = (struct d*)malloc(sizeof(struct d));
    ptr->bt->ct.dt->p = (int*)malloc(sizeof(int));
    printf("enter array elements:\n");
    for(int i = 0;i < n;i++) {
        scanf("%d",&(ptr->a[i]));
}
    for(int i =0 ;i<n;i++) {
    printf("%d",ptr->a[i]);
    }
    printf("enter number:\n");
    scanf("%d",&(ptr->bt->num));
    printf("\n%d\n",(ptr->bt->num));
    printf("enter string for c structure:\n");
    scanf("%s",ptr->bt->ct.name);
    printf("%s\n",ptr->bt->ct.name);
    printf("enter array elements for struct d:\n");
    for(int i = 0;i<n;i++) {
        scanf("%d",&(ptr->bt->ct.dt->p[i]));
}
    for(int i = 0;i < n;i++){
        printf("%d",(ptr->bt->ct.dt->p[i]));
    }
    printf("enter character for struct d:");
    getchar();
    scanf("%c",&(ptr->bt->ct.dt->ch));
    printf("%c\n",(ptr->bt->ct.dt->ch));
    printf("enter short int data for struct d:\n");
    scanf("%hi",&(ptr->bt->ct.dt->sh));
    printf("%hi",(ptr->bt->ct.dt->sh));
}
