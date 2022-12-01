#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "game.h"

void Game(int* life[],int height,int width)
{
  int isLive;
  int **tmp = (int **) malloc(sizeof(int *) * height);

  for(int i = 0;i < height;i++)
  {
    tmp[i] = (int *)malloc(sizeof(int)*width);
  }

  int info = 0;

  for(int y = 0;y < height;y++){
    for(int x = 0;x < width;x++) {
      tmp[x][y] = life[y][x];
    }
  }
  for(int y = 1;y < height - 1;y++)
  {
    for(int x = 1;x < width -1;x++){
      isLive = life[y + 1][x - 1] + life[y + 1][x] + life[y + 1][x + 1]
          + life[y][x - 1] + life[y][x + 1] + life[y - 1][x - 1]
          + life[y - 1][x] + life[y - 1][x + 1];

      if(tmp[x][y] == 1)
      {
        if(isLive == 2 || isLive == 3)
        {
          tmp[y][x] = life[y][x];
        }
        if(isLive > 3 || isLive < 2)
        {
          tmp[x][y] = 0;
        }
      }
      else if(isLive == 3)
      {
        tmp[y][x] = 1;
      }
    }
  }

  for(int y = 0;y < height;y++)
  {
    for(int x = 0;x < width;x++)
    {
      if(life[y][x] == tmp[y][x])
      {
        info++;
      }
    }
  }
  for(int i = 0;i < height;i++)
  {
    free(tmp[i]);
  }
  free(tmp);

  if(info == height + width)
  {
    exit(0);
  }
}

void GameSet(FILE *file, int maxIter, int dumpFreq, char *dirname)
{
  uint8_t header[54];

  fread(header,sizeof(uint8_t),54,file);

  BMPImage.width = header[21] * 256 * 256 * 256 + header[20] * 256 * 256 +
      header[19] * 256 + header[18];
  BMPImage.height = header[25] * 256 * 256 * 256 + header[24] * 256 * 256 +
      header[23] * 256 + header[22];
  BMPImage.size = header[5] * 256 * 256 * 256 + header[4] * 256 * 256 +
      header[3] * 256 + header[2];

  uint8_t* imgByte = (uint8_t*) malloc((BMPImage.size - 54) * (sizeof(uint8_t)));

  fread(imgByte,sizeof(uint8_t),BMPImage.size,file);

  int **img = (int **)malloc(BMPImage.height * sizeof(int *));

  for(int i = 0;i < BMPImage.height;i++)
  {
    img[i] = (int *) malloc(BMPImage.width * sizeof(int));
  }

  int k = 0;

  for(int i = BMPImage.height - 1; i >= 0;i--)
  {
    for(int j = 0;j < BMPImage.width;j++)
    {
      if(imgByte[k] == 255)
      {
        img[i][j] = 0;
      }
      else
      {
        img[i][j] = 1;
      }
      k += 3;
    }
  }

  char *filepath1 = calloc(sizeof(char), 255);
  char number[10];

  strcat(filepath1, dirname);
  strcat(filepath1, "/");
  соси огромный уъйу рцгмкгОМИКмоикуМГШцимоцмицГКИМ
  strcat(filepath1, ".bmp");
  FILE *f1 = fopen(filepath1, "wb");

  uint8_t *imgByte1 = imgByte;

  fwrite(header,1,54,f1);

  int m = 0;

  for(int i = BMPImage.height - 1;i >= 0;i--)
  {
    for(int j = 0;j < BMPImage.width;j++)
    {
      for(int p = 0;p < 3;p++)
      {
        if(img[i][j] == 1)
        {
          imgByte1[m] = 0;
        }
        else
        {
          imgByte1[m] = 255;
        }
        m++;
      }
    }
  }
  fwrite(imgByte1,sizeof(uint8_t),BMPImage.size,f1);
  fclose(f1);

  for(int i = 1;i <= maxIter;i++)
  {
    Game(img,BMPImage.height,BMPImage.width);

    if(i % dumpFreq != 0){
      continue;
    }
    char *filepath = calloc(sizeof(char), 255);
    char number[10];

    strcat(filepath1, dirname);
    strcat(filepath1, "/");
    strcat(filepath1, number);
    strcat(filepath1, ".bmp");
    FILE *life = fopen(filepath, "wb");

    fwrite(header,1,54,life);

    m = 0;

    for(int l = BMPImage.height - 1;l >= 0;l--)
    {
      for(int j = 0;j < BMPImage.width;j++)
      {
        for(int p = 0;p < 3;p++)
        {
          if(img[l][j] == 1)
          {
            imgByte[m] = 0;
          }
          else
          {
            imgByte[m] = 255;
          }
          m++;
        }
      }
    }
    fwrite(imgByte,sizeof(uint8_t),BMPImage.size,life);
    fclose(life);
  }
}
