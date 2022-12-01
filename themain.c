#include "game.h"
#include "game.c"


int main(int argc, char* argv[]) {
  int maxIter = 1000;
  int dumpFreq = 1;

  char outdir[255];
  FILE* file;

  for(int i = 0;i < argc;i++)
  {
    if(!strcmp("--input",argv[i]))
    {
      file = fopen(argv[1 + i],"rb");
    }
    if(!strcmp("--output",argv[i]))
    {
      strcpy(outdir, argv[i + 1]);
    }
    if(!strcmp("--max_iter",argv[i]))
    {
      maxIter = atoi(argv[i + 1]);
    }
    if(!strcmp("--dump_freq",argv[i]))
    {
      dumpFreq = atoi(argv[i + 1]);
    }
  }

  GameSet(file,maxIter,dumpFreq,outdir);
  return 0;
}
