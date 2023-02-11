#include <stdio.h>
#include <stdlib.h>

int Sum(int x){
  if(x != 0){
    return(x % 10 + Sum(x / 10));
  }
  else{
    return 0;
  }
}

int NOD(int a,int b){
  while(a != b){
    if(a > b){
      a = a - b;
    }
    else{
      b = b - a;
    }
  }
  return a;
}

int NOK(int a,int b){
  return (abs(a * b) / NOD(a,b));
}

int main(){
  int a;
  int b;
  int x;

  printf("Enter your numbers = ");
  scanf("%d%d",&a,&b);


  printf("NOD = %d\n",NOD(a,b));
  printf("NOK = %d\n",NOK(a,b));

  printf("Enter your number = ");
  scanf("%d",&x);
  printf("Sum of your number = %d",Sum(x));

  return 0;
}
