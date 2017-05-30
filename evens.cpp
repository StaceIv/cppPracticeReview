#include <stdio.h>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]){

    int x = 5;
    int y = 2;

    int z = 5/2;

    cout << "5/2 = " << z << endl;

    int o = 2* z;

    if(o != x){
        cout << "odd input." << endl;
    } else if(o == x){
        cout << "Even input." << endl;
    }



    return 0;

}
