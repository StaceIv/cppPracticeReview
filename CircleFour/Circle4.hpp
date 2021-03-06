//Header File for Circle Object

class Circle{

	private:
		float x;
		float y;
		float r;
		float area;
		void Area(void);

	public:
		Circle(float xx, float yy, float rr){
			x = xx;
			y = yy;
			r = rr;
		}; //Constructor
		~Circle(); 			      //Destructor
		float GetR() const;
		void SetR(float rr);
};
