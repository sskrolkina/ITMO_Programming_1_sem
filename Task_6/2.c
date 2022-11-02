#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *array;
    int n;
    scanf("%d",&n);

    array = malloc(n * sizeof(int));

    for(int i = 0;i < n;i++){
        scanf("%d",&array[i]);
    }

    for(int i=0;i<n; i++)
    {
        printf("%d = %d\n",i + 1, array[i]);
    }
    free(array);

    return 0;
}
