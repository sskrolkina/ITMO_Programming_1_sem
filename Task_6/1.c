#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i = 0;i < 4;i++){
        scanf("%d",&a[i]);
    }

    for(int i = 0;i < 4;i++){
        printf("%d = %d\n",i + 1,*(a+i));
    }

    return 0;
}
