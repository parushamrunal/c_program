#include <stdio.h>
union sample {
    int a:5;
    int b:10;
    int c:5;
    int d:21;
    int e;
};
int main(void) {
    union sample s;
    s.e = 100;
    printf("a: %d\n", s.a);
    printf("b: %d\n", s.b);
    printf("c: %d\n", s.c);
    printf("d: %d\n", s.d);
    printf("e: %d\n", s.e);
    return 0;
}

