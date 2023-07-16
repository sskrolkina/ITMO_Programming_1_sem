#include <math.h>
	#include "Isosceles_triangle.h"
	

	float Perimeter(struct coords d1,struct coords d2,struct coords d3){
	  return sqrt(pow(d1.x - d2.x, 2) + pow(d1.y - d1.y, 2))
	      + sqrt(pow(d2.x - d3.x, 2) + pow(d2.y - d3.y, 2))
	      + sqrt(pow(d3.x - d1.x, 2) + pow(d3.y - d1.y, 2));
	}
	float Area(struct coords d1,struct coords d2,struct coords d3) {
	  int HalfP = Perimeter(d1, d2,d3) / 2;
	  return sqrt(HalfP *
	      (HalfP - (sqrt(pow(d1.x - d2.x, 2) + pow(d1.y - d2.y, 2)))) *
	      (HalfP- (sqrt(pow(d2.x - d3.x, 2) + pow(d2.y - d3.y, 2)))) *
	      (HalfP- (sqrt(pow(d3.x - d1.x, 2) + pow(d3.y - d1.y, 2)))));
	}
