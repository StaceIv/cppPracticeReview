//In cpp it is possible to have to functions of the same name.
//CPP differentiates between the two functions by looking at the
//number of paramaters and their types. 
#include <iostream>

using namespace std;

//This cube() takes annd returns a float
float cube(float x){
     return x*x*x;
}

//This cube() takes and returns a double.
double cube(double x){
     return x*x*x;
}

//Here we demonstrate how cpp knows which function to call
//based on the parameters.
int main(int argc, char *argv[]){

     float x = 1.63;
     double dx = 3.2;

     //cube(x) will call the function which returns a float since
     //x is a float
     cout << "x = " << x << "x^3 = " << cube(x) << endl;
     //cube(dx) will call the function which returns a double and
     //takes params which are of type double since dx is a double.
     cout << "dx = " << dx << "dx^3 = " << cube(dx) << endl;

     return 0;
}
