#include "Circle.hpp"

//Circle object Constructor
Circle::Circle(float xx, float yy, float rr){
     r = (rr > 0.) ? rr : 1.0f;

     x = xx;
     y = yy;
}

Circle::~Circle(){
}

float Circle::GetR(void){
     return r;
}

void Circle::SetR(float rr){
     if(rr>0.)
	     r = rr;
     else 
	     r = 1.0f;
}
