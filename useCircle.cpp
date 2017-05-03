#include <iostream>
#include "Circle.hpp"
//#include "Circle.cpp"

using namespace std;

int main(int argc, char *argv[]){
     
     //Instantiation of a circle object
	Circle* first = new Circle(10.0f, 15.0f, 5.0f);
    // cout << "Radius of Object is " << first.GetR() << endl;

     //This sets the Radius of object first to 10.0f.
  //   first.SetR(10.0f);
     //This outputs the radius of object first using the getter function.
    // cout << "Radius of Object is " << first.GetR() << endl;

     return 0;
}
