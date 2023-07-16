#include <stdio.h>
	#include "Isosceles_triangle.h"
	#include "Isosceles_triangle.c"
	

	

	int main(){
	  struct coords d1,d2,d3;
	

	  printf("Enter first coords = ");
	  scanf("%f %f", &d1.x, &d1.y);
	  printf("Enter second coords = ");
	  scanf("%f %f", &d2.x, &d2.y);
	  printf("Enter third coords = ");
	  scanf("%f %f", &d3.x, &d3.y);
	

	  printf("Perimeter =  %f\n", Perimeter(d1,d2,d3));
	  printf("Area = %f\n", Area(d1,d2,d3));
	

	  return 0;
	}

