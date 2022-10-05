#include <stdio.h>

int main() {
    float a,z1,z2,b,c,d,e;

    printf("Enter your number = ");

    scanf("%f",&a);

    b = (1+a+a * a)/(2*a + a*a);
    c = (1 - a + a*a)/(2*a - a*a);
    d = (5 - 2*a*a);
    
    z1 = (1/(b + 2 - c)) * d;
    z2 = (4 - a * a)/2;
    
    printf("z1 = %f\nz2 = %f",z1,z2);
    return 0;
}
