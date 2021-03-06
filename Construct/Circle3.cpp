#include <iostream>
#include "Circle.hpp"

using namespace std;

//This seems to work.
Circle::Circle(float xx, float yy, float rr){
     float x = xx;
     float y = yy;
     float r = rr;
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

void Circle::SetArea(float rr){
     ///cout << "RADIUS IN SETAREA(): " << r << endl;
     float area = 3.14f*rr*rr;
}

float Circle::GetArea(void){
     return area;
}

int main(int argc, char* argv[]){
     
	//Instantiate two Circle objects.
	Circle first(10.0f, 15.0f, 5.0f);
	Circle second(15.0f, 25.0f, 65.0f);

	cout << "Area of Object One is: " << first.GetArea() << endl;
	cout << "Area of Object Two is: " << second.GetArea() << endl;

	//SetR and GetR seem to work, but something is going wrong in the
	//constructor maybe?
	first.SetR(10.0f);
	second.SetR(50.0f);
	cout << "One R: " << first.GetR() << endl;
	cout << "Two R: " << second.GetR() << endl;

	return 0;
}
