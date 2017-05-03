#include <iostream>

using namespace std;

int defaultParams(int one = 1, int  two = 2, int three = 3);

int main(int argc, char *argv[]){

     int i = defaultParams();

     cout << "Default: " << i << endl;

     i = defaultParams(3);

     cout << "Default: " << i << endl;

     i = defaultParams(3, 5);

     cout << "Default: " << i << endl;
     return 0;
}

int defaultParams(int d1, int d2, int d3){
     return d1 + d2 + d3;
}
