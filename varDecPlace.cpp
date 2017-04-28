//Variable Declaration Placement is important! If a variable is
//defined within a loop, then we try to access it elsewhere - it 
//won't work for the same variable in the loop. This program is
//an example of variable declaration placement.

#include <iostream>

using namespace std;

int main(int argc, char *argv[]){

     for(int j = 0; j < 10; j++) //int j is declared in this loop, so it will
	     			 //only be used in this loop.
        cout << "Local variable j value: " << j << endl;

     //The above line would not work here!!!

     return 0;
}
