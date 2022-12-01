#ifndef GAMELIFE__GAME_H_
#define GAMELIFE__GAME_H_
#include <stdio.h>

struct BMP
{
  int width;
  int height;
  int size;
}BMPImage;

void Game(int* life[],int height,int width);

void GameSet(FILE *file, int maxIter, int dumpFreq, char *dirname);

#endif
