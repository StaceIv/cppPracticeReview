#include <iostream>
#include "Circle.hpp"

using namespace std;

//Define the Constructor
Circle::Circle(float xx, float yy, float rr){
     r = (rr > 0.) ? rr : 1.0f;

     x = xx;
     y = yy;
}

//Destructor
Circle::~Circle(){
}

//Getter of the radius
float Circle::GetR(void){
     return r;
}

//Setter of the radius
void Circle::SetR(float rr){
     if(rr > 0.)
	     r = rr;
     else
	     r = 1.0;
}

int main(int argc, char* argv[]){

     //Instantiate a new object of class Circle, and assign the
     //appropriate initial values needed by the Constructor
     Circle first(10.0f, 15.0f, 5.0f);
     cout << "Radius is: " << first.GetR() << endl;

     first.SetR(2.0f);
     cout << "Radius is: " << first.GetR() << endl;

     return 0;
}
