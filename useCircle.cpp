#include <iostream>
#include <string>
//#include "Circle.hpp"
//#include "Circle.cpp"

using namespace std;

class Circle{
	//private means it can only be accessed by the member 
	//functions of the class
	private:
		float x,y,r; //x,y centre co-ords and radius.
	//Accessible by member functions and any other functions
	//provided the instance of the class is in scope
	public:
		Circle(float xx, float yy, float rr){
		     r = (rr > 0.)? rr : 1.0f;
		     x = xx;
		     y = yy;
		}	//Constructor
		~Circle(){} //Destructor

		//getter and setter of radius.
		float GetR(){return r;} //Return radius
		void SetR(float rr){
		     if(rr > 0.)
			     r = rr;
		     else 
			     r = 1.0f;
		}	//Set radius

}; 

int main(int argc, char *argv[]){
     
     //Instantiation of a circle object
	Circle first(10.0f, 5.0f, 15.0f);
        cout << "Radius of Object is " << first.GetR() << endl;

     //This sets the Radius of object first to 10.0f.
        first.SetR(10.0f);
     //This outputs the radius of object first using the getter function.
        cout << "Radius of Object is " << first.GetR() << endl;

     return 0;
}
