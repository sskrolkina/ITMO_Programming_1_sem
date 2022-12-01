#include <stdio.h>

int simple(int n){
  for(int i = 2; i <= n/2;i++) {
    if ((n % i) == 0) {
      return 0;
    }
  }
    return 1;
}

int main() {
  char string[228];
  int length = 0;
  int k;

  printf("Enter your string = ");
  gets(string);

  for (int i = 0; i < 228; i++) {
    if (string[i] == '\0') {
      break;
    } else {
      length++;
    }
  }
  printf("Length of string = %d\n", length);

  printf("Enter your number = ");
  scanf("%d", &k);

  printf("Result = ");

  int simp;

  for (int i = k; i >= 2; i--) {
    if(simple(i)) {
      simp = i;
      break;
    }
  }
  for(int i = 2; i <= simp;i++){
    printf("%d ",i);
  }
  return 0;
}
