//Global variables are generally bad and not to be used - I know this.
//This is just for practice and understanding...

#include <stdio.h>
#include <iostream>

int global = 88;

using namespace std;

int main(int argc, char *argv[]){

     int global = 44;

     cout << "Local global: " << global << endl;
     cout << "Global global: " << ::global << endl;

     return 0;
}
