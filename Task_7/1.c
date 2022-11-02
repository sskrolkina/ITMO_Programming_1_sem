#include <stdio.h>

enum OperatingSystem{
    Symbian,
    Embedded_Linux,
    Windows_CE,
    QNX
};

int main() {
    enum OperatingSystem a,b,c,d,e;
    a = Symbian;
    b = Embedded_Linux;
    c = Windows_CE;
    e = QNX;

    printf("%d",a);

    return 0;
}
