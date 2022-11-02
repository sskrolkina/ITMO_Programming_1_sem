#include <stdio.h>

int main() {
    int k;
    printf("Enter your string length and value = ");
    scanf("%d",&k);
    char string_1[k];
    scanf("%s\n",&string_1);

    char a;
    a = getchar();

    int result = 0;

    for(int i = k - 1; i >= 0; i--){
        if(string_1[i] == a){
            result = i + 1;
            break;
        }
    }

    printf("Result = %d", result);

    return 0;
}
