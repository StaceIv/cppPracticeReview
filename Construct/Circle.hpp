
class Circle{

	private:
		float x;
		float y;
		float r;
		float area;

	public:
		Circle(float xx, float yy, float rr);
		~Circle();
		float GetR();
		void SetR(float rr);
		float GetArea();
		void SetArea(float rr);

};
