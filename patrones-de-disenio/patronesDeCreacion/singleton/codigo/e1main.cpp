#include <iostream>
using namespace std;

class Ball {
protected:
	float _x, _y;
	static Ball* theBall_;
	
	Ball();
	Ball(float x, float y) : _x(x), _y(y) {};
	Ball(const Ball & ball);

	void operator=(const Ball & ball);

public: 
	static Ball& getTheBall();
	void move(float _x, float _y) { /*...*/ };
};

Ball::Ball() {}

Ball& Ball::getTheBall()
{
	static Ball theBall_;
	return theBall_;
}

int main() {
	cout << "Test" << endl;
	return 0;
}
