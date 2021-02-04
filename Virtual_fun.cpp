// Virtual function //

#include <iostream>
using namespace std;

class figure
{
protected:
	double x, y;
public:
	void set_dim(double i, double j=0) {
		x = i; y = j;
	}

	virtual void show_area() {
		cout << "For this class the expression of calculating an area isn't defined." << endl;
	}

};


class triangle : public figure {
public:
	void show_area() {
		cout << "The height of the triangle: " << x << " and the base of triangle: " << y << ". Area:" << x * 0.5 * y << endl;
	}
};

class rectangle : public figure {
public:
	void show_area() {
		cout << "The rectangle with dimensions " << x << "x" << y << " has an area " << x * y << endl;
	}
};

class circle : public figure {
public:
	void show_area() {
		cout << "The circle with radius: " << x << ". Area: " << 3.14 * x * x << endl;
	}
};

int main() 
{
	figure* p;

	triangle t;
	rectangle r;
	circle c;

	p = &t;
	p->set_dim(10.0, 5.0);
	p->show_area();

	p = &r;
	p->set_dim(4.0, 2.0);
	p->show_area();

	p = &c;
	p->set_dim(9.0);
	p->show_area();

	return 0;
}