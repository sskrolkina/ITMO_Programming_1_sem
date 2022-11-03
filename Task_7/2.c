#include <stdio.h>


struct Square
{
    int x[2];
    int y[2];
    int z[2];
    int k[2];

};

int P(int x)
{
    return x * 4;
}
int S(int x){
    return x * x;
}

int main(){

    struct Square coordinate = {.x = {0, 0}, .y = {0, 2}, .z = {2, 2}, .k = {2, 0} };
    int sqr = coordinate.y[1] - coordinate.x[1];

    printf("P = %d\n",P(sqr));
    printf("S = %d\n",S(sqr));
    
    return 0;
}
