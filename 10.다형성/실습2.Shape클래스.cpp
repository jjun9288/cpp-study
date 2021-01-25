#include <iostream>
#include <string>
#define PI 3.14
using namespace std;
class Shape{
public:
	virtual void print(){}
};

class TwoDimShape : public Shape{
public:
	virtual double getArea(){ return 0;}
	void print(){}
};

class ThreeDimShape : public Shape{
public:
	virtual double getVolume(){ return 0;}
	void print(){}
};

class Rectangle : public TwoDimShape{
	int width;
	int height;
public:
	Rectangle(int w, int h){
		width = w;
		height = h;
	}
	void print(){
		cout<<"=================="<<endl;
		cout<<"width : "<< width << endl;
		cout<<"height : "<< height << endl;
		cout<<"사각형 면적 : "<< getArea()<<endl;
	}
	double getArea(){
		return width*height;
	}
};

class Circle : public TwoDimShape{
	int radius;
public:
	Circle(int r){
		radius = r;
	}
	void print(){
		cout<<"=================="<<endl;
		cout<<"radius : "<<radius<<endl;
		cout<<"원 면적 : "<<getArea()<<endl;
	}
	double getArea(){
		return radius*radius*PI;
	}
};
class Cube : public ThreeDimShape{
private:
	int base;
public:
	Cube(int b){
		base = b;
	}
	double getVolume(){	
		return base*base*base;
	}
	void print(){
		cout<<"=================="<<endl;
		cout<<"base : " <<base<<endl;
		cout<<"정육면체 면적 : "<<getVolume()<<endl;
	}
};

class Sphere : public ThreeDimShape{
private:
	int radius;
public:
	Sphere(int r){
		radius = r;
	}
	double getVolume(){
		return ((double)3/4)*radius*radius*radius*PI;
	}
	void print(){
		cout<<"=================="<<endl;
		cout<<"radius : "<<radius<<endl;
		cout<<"구 면적 : "<<getVolume()<<endl;
	}
};

int main(void){
	Shape *Arr[4];
	Arr[0]= new Rectangle(4,5);
	Arr[1]= new Circle(7);
	Arr[2]= new Cube(6);
	Arr[3]= new Sphere(3);
	
	for(int i=0;i<4;i++){
		Arr[i] -> print();
	}
	
	for(int i=0;i<4;i++){
		delete Arr[i];
	}
	return 0;
}