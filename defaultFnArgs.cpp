#include <stdio.h>
#include <iostream>


//Function Prototype
void function(long = 7, double = 2.65, int = 9);
//If arguments are not given in the program, the function
//call will use the arguments assigned in the prototyte.

using namespace std;

//int argc: stands for 'argument count' - argc contains the
//number of arguments passed to the program. Here, for example
//we have argc = 3: function, 7, 2.65, 9
//
//int *argv: stands for 'argument vector'
//we have argv = {"function", "7", "2.65", "9"}

int main(int argc, char *argv[]){

     function(8, 2.23, 7);
     function(8, 2.23);
     function(8);
     function();

     return 0;
}

//Function Definition - specific arguments do not need to be defined again.
void function(long p1, double p2, int p3){
     cout << "function: using " << p1 << " "
	     			<< p2 << " "
				<< p3 << endl;
}
