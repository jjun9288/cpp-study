#include <iostream>
using namespace std;
class Shape{
protected:
	int x,y;
public:
	void setOrigin(int x, int y){
		this -> x = x;
		this -> y = y;
	}
	virtual void draw(){
		cout << "Shape Draw" << endl;
		cout << "x : " << x << endl;
		cout << "y : " << y << endl;
	}
};

class Rectangle : public Shape{
	int width, height;
public:
	void setWidth(int w) { width = w; }
	void setHeight(int h) { height = h;}
	void draw() {
		cout << "Rectangle Draw" << endl;
		cout << "x : " << x << endl;
		cout << "y : " << y << endl;
		cout << "w : " << width << endl;
		cout << "h : " << height << endl;
	}
};

class Circle : public Shape{
	int radius;
public:
	void setRadius(int r){ radius = r; }
	void draw() {
		cout << "Circle Draw" << endl;
		cout << "x : " << x << endl;
		cout << "y : " << y << endl;
		cout << "r : " << radius << endl;
	}
};

class Triangle : public Shape{
	int base,height;
public:
	void draw(){
		cout << "Triangle Draw" << endl;
		cout << "x : " << x << endl;
		cout << "y : " << y << endl;
		cout << "b : " << base << endl;
		cout << "h : " << height << endl;
	}
};
int main() 
{
	Shape *Arr[3];
	Arr[0]= new Rectangle();
	Arr[1]= new Circle();
	Arr[2]= new Triangle();
	
	for(int i=0;i<3;i++){
		Arr[i] -> setOrigin(10*i, 10*i);
		Arr[i] -> draw();
	}
	
	for(int i=0;i<3;i++){
		delete Arr[i];
	}
	
	return 0;
}