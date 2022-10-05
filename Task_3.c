#include <stdio.h>

int main() {
    
  int a;
    printf("Enter 8-bit number = ");
    scanf("%o",&a);
    printf("Your number in 16-bit = %x \n",a);
    printf("Your number in 8-bit = %o \n",a);
  int b = a << 3;
    printf("Your number but shifted three bits to the left = %o \n",b);
    printf("Result of %o and %o = %o \n",a,b,a&b);

    return 0;
}
