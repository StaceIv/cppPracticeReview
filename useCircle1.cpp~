#include <iostream>

using namespace std;


class Circle{

	private:
		float x;
		float y;
		float r;
		float area;

		void Area(void){
			float area = 3.14f*r*r;
		};
	
	public:
		Circle(float xx, float yy, float rr){
			
			r = rr;

		};
		~Circle();
		float GetR();
		float GetArea(){
			return area;
		};

		void SetR(float rr);


};

int main(int argc, char* argv[]){

	Circle* first = new Circle(10.0f, 15.0f, 5.0f);

	//first.SetR(10.0f);

	return 0;
}
