#include <stdio.h>

int main() {
    int a;
    printf("Enter your number = ");
    scanf("%d",&a);
    printf("Is yor number between [-50;50]?:\n%s",(a>=-50 && a <= 50) ? "Yes\n" : "No\n");
    
    int c;
    printf("Enter your number = ");
    scanf("%d",&c);
    b = 1 & (c << 19);
    printf("%d",b);
    return 0;
}
