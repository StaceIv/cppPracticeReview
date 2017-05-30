#include <iostream>
#include <stdio.h>

using namespace std;

//new and delete are used to allocate and then free (deallocate)
//memory to instances of a class (int, or char, etc)

int main(int argc, char* argv[]){
     
 	int *i; //pointer to an int.
	i = new int; //new int object.

	//regular pointer operations allowed
	*i = 0;
	i++;

	cout << "address of i: " << &i << "\n";
	delete i; //free memory where i was stored.

	//dynamic arrays
	char *buf; //pointer to a char
 	buf = new char[1024]; //size of the new character?

	cout << "address buf: " << &buf << "\n";
	cout << "size: " << sizeof(buf) << "\n";

	delete [] buf; //free memory
	
	return 0;
}
