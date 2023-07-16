#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  fprintf(fopen(argv[1], "w"),"%d", atoi(argv[2])+ atoi(argv[3]));
}
