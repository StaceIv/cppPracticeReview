//Header file for the circle object.
//
//Header files contain definitions of functions and variables 
//which can be used by any C++ program by #include "Circle.h"
//

class Circle{
	//private means it can only be accessed by the member 
	//functions of the class
	private:
		float x,y,r; //x,y centre co-ords and radius.
	//Accessible by member functions and any other functions
	//provided the instance of the class is in scope
	public:
		Circle(float xx, float yy, float rr); //Constructor
		~Circle(); //Destructor

		//getter and setter of radius.
		float GetR(); //Return radius
		void SetR(float rr); //Set radius

}; //Class defs end with semi-colons!
