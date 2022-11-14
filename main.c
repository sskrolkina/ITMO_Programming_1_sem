#include <stdio.h>
#include <stdlib.h>

int row = 5;
int col = 4;

int countLiveN(int a[row][col],int r,int c)
{
  int count = 0;

  for(int i = 0;i <= r + 1;i++)
  {
    for(int j = c - 1;j <= c + 1;j++)
    {
      if((i == r && j == c) || (i < 0 || j < 0) || (i >= row || j >= col))
        continue;

      if(a[i][j] == 1)
        count++;
    }
  }
  return count;
}
void BMP(){
  int niggers[40] = {0};
  for (int kill = 0; kill < 40; ++kill) {
    niggers[kill] = 0;
  }
}

int main()
{
  int a[row][col];
  int b[row][col];

  int nLiveCell;

  int gen;

  for(int i = 0;i < row;i++)
  {
    for(int j = 0;j < col;j++){
      a[i][j] = rand() % 2;
    }
  }
  for(int i=0; i<row; i++){
    for(int j=0;j<col;j++){
      printf("  %d  ",a[i][j]);
    }printf("\n");
  }

  printf("How many generation = ");
  scanf("%d",&gen);

  for(int k = 0;k < gen;k++) {
    if(k != 0){
      for(int i = 0;i < row;i++){
        for(int j = 0;j < col;j++){
          a[i][j] = b[i][j];
        }
      }
    }
    for (int i = 0; i < row; i++) {
      for (int j = 0; j < col; j++) {
        nLiveCell = countLiveN(a, i, j);
        if (a[i][j] == 1 && (nLiveCell == 2 || nLiveCell == 3))
          b[i][j] = 1;
        else if (a[i][j] == 0 && nLiveCell == 3)
          b[i][j] = 1;
        else
          b[i][j] = 0;
      }
    }
    int num = k + 1;
    printf("\n %d Generation:\n",num);
    for (int i = 0; i < row; i++) {
      for (int j = 0; j < col; j++) {
        printf("  %d  ", b[i][j]);
      }
      printf("\n");
    }
  }

  return 0;
}