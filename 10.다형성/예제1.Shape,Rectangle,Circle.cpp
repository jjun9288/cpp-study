#include <iostream>
using namespace std;
class Shape{
protected:
	int x,y;
public:
	void setOrigin(int x, int y){
		this -> x=x;
		this -> y=y;
	}
	virtual double getArea(){}
};
class Rectangle : public Shape{
	int width, height;
public:
	void setWidth(int w){ width = w; }
	void setHeight(int h){ height = h; }
	double getArea(){ return (width*height); }
};
class Circle : public Shape{
	int radius;
public:
	void setRadius(int r){ radius = r; }
	double getArea() { return (3.14*radius*radius); }
};
void compareArea(double a, double b){
	cout << "면적 비교" << endl;
	if (a >= b) { cout << a << endl; }
	else { cout << b << endl; }
}
int main() 
{
	Rectangle r;
	Shape &s1 = r;
	r.setWidth(3);
	r.setHeight(5);
	double a = s1.getArea();
	Circle c;
	Shape &s2 = c;
	c.setRadius(3);
	double b = s2.getArea();
	compareArea(a,b);
	return 0;
}