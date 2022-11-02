#include <stdio.h>

struct Square{
    int side;
};

int main() {
    struct Square a;
    scanf("%d",&a.side);
    printf("Side of square = %d\n",a);
    printf("P = %d\n",(4*a.side));
    printf("S = %d",(a.side * a.side));

    return 0;
}
