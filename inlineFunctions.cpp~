#include <iostream>
#include <stdio.h>

using namespace std;

//MACRO approach
//Macros are generally avoided. They are dangerous, it
//is generally safer and prefered to use functions.
#define MAX(A,B)((A)>(B)?(A):(B))

//inline Function.
//Inline means that a new copy of the function should be
//placed in the compiled code at each point of reference.
inline int max(int a, int b){
    if(a>b) return a;
    return b;
}

int main(int argc, char *argv[]){

     //MACRO method
     int c, d;
     c = 5;
     d = 7;
     int i = MAX(c++, d++);
     //Calling the MACRO version has side effects!
     cout << "c " << c << " d " << d << " i " << i << endl;

     //inline function method
     c = 5;
     d = 7;
     //call the inline function is safe.
     i = max(c++, d++);
     cout << "c " << c << " d " << d << " i " << i << endl;

     return 0;
}
