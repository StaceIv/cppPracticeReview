#include <iostream>
#include "Circle.hpp"

using namespace std;

Circle::Circle(float xx, float yy, float rr){
     int x = xx;
     int y = yy;
     int r = rr;
}

Circle::~Circle(){
}

float Circle::GetR(void){
     return r;
}

void Circle::SetR(float rr){
     if(rr > 0.)
	     r = rr;
     else
	     r = 1.0f;
}

void Circle::SetArea(float r){
     float area = 3.14f*r*r;
}

float Circle::GetArea(void){
     return area;
}

//Functions that accept Circle objects by value c, pointer *p
//and reference &r
void vfunc(Circle c); 
void pfunc(Circle *p);
//void rfunc(const Cricle &r);

int main(int argc, char* argv[]){

     Circle first(10.0f, 15.0f, 5.0f);

     //declare a pointer to the object
     Circle *fp = &first;
     fp->SetR(15.0f);
     cout << "Use pointer " << fp->GetArea() << endl;

     vfunc(first); //first because we just use the value of the object
     pfunc(&first); //&first because we are using the pointer, so &first
     		    //gives the address of first (?)

     return 0;
}

void vfunc(Circle c){
     cout << "By value local copy " << c.GetArea() << endl;
     c.SetR(15.0f);
}

void pfunc(Circle *c){
     cout << "Pointer actual object " << c->GetArea() << endl;
     c->SetR(25.0f);
}

//void rfunc(const Circle &c){
//     cout << "Reference actual object but const " << c.GetArea() << endl;
//     //Can't change radius here so can't use SetR()
//}
