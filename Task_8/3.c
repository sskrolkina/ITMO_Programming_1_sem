#include <stdio.h>
#include <string.h>

int main() {
    int k,m;
    printf("Enter your first string length and value = ");
    scanf("%d",&k);
    char string_1[k];
    scanf("%s",&string_1);
    printf("Enter your second string length string value = ");
    scanf("%d",&m);
    char string_2[m];
    scanf("%s",&string_2);

    int n;
    printf("How many symbols = ");
    scanf("%d",&n);

    strncpy(string_1,string_2,n);

    printf("Copy string = %s",string_1);

    return 0;
}
