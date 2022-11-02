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

    strcpy(string_2,string_1);

    printf("Copy string = %s",string_2);

    return 0;
}
