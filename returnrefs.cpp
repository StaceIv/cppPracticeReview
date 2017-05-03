//Iostream is the input/output stream referes to the family of classes
//used in input/output. This is what allows cout, cin, etc to be used.
#include <iostream>

using namespace std;

int &get_private(void);

int main(int argc, char *arv[]){
     
	//We are assigning 10 to i, since get_private
	//will return 10.
	int i;
	i = get_private();

	cout << "Private value is " << i << endl;

	//get_private being increased to 20 = 10 + 10.
	get_private() = i +10;

	i = get_private();
	cout << "Private value is  " << i << endl;
	
	return 0;
}

//This function returns a reference to a private variable.
//Function title has '&'?
int &get_private(void){

     static int personal = 10;

     return personal;
}
