//Declares a variable to be a true read-only constant - It cannot be changed!
//Wherever a constant expression is permitted a const variable
//	is permitted (eg. as an array dimension)
//Const declarations are permitted within header files!
//Const variables may be examined using the debugger.
#include <stdio.h>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
     const int MAXBUF = 1024;
     char buffer[MAXBUF];

     cout << "Buffer is of size " << sizeof(buffer) << " bytes"
	  << endl;
    
     return 0; 
}
