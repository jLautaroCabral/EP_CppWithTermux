#include <Figure.h>

class Triangle : public Figure {
	private:
		float base_;
		float height_;
	
	public:
		Triangle(float base, float height_);
		float getArea() const;

};
