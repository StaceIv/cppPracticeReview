#include <iostream>

using namespace std; 

//Initializing Refrences.
//The variable i and ri will have the same address
//ri is a reference to variable i.
int main(int argc, char *argv[]){


     int i;
     int &ri = i;

     //the addresses of these are equivalent.
     //BUT only if we define int &ri with this &.
     cout << "i address: " << hex << &i << endl;
     cout << "ri address: " << hex << &ri << endl;

     return 0;
}
