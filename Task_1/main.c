#include <stdio.h>

int main() {
   float a;
   char c;
    
  printf("Введите вещественное число = ");
  scanf("%f",&a);
    
  c = getchar(); 
    
  printf("Введите символ = ");
  scanf("%c",&c);
    
  printf("Вещественное число = %f\n",a);
  printf("Символ = %c",c);
    
  return 0;
}
