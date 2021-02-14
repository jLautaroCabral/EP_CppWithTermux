#include <Figure.h>

class Square : public Figure {
	private:
		float side_;
	
	public:
		Square(float side_lenght);
		float getArea() const;
};
