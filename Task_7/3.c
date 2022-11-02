#include <stdio.h>

union{
    struct{
        unsigned short Ready : 1;
        unsigned short Toner : 1;
        unsigned short Drum : 1;
        unsigned short Paper : 1;
    };unsigned short x;
}Laser_Printer;

int main(){
    scanf("%x",&Laser_Printer.x);

   if(Laser_Printer.Toner)
      printf("There is enough toner\n");
    else 
      printf("There is not enough toner\n");
    
  if(Laser_Printer.Drum)
      printf("The drum is fine\n");
    else 
      printf("The drum is damaged\n");
    
  if(Laser_Printer.Paper)
      printf("There is enough paper\n");
    else 
      printf("There is not enough paper\n");
    
  if(Laser_Printer.Ready && Laser_Printer.Toner && Laser_Printer.Drum && Laser_Printer.Paper)
      printf("Laser printer is ready\n");
    else 
      printf("Laser printer is not ready\n");

    return 0;
}
