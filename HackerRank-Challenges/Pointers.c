#include <stdio.h>
#include <stdlib.h>
void update(int *a,int *b) {


   int sub = *a + *b;
    *b -= *a;
    *a = sub;
    *b = abs(*b);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    int *test = &a;
    *test = 3;

    return 0;
}

