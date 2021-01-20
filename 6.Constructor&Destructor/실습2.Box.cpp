#include <iostream>
using namespace std;
class Box{
	float width;
	float length;
	float height;
	bool empty;
public:
	Box(){
		width = 1.0;
		length = 1.0;
		height = 1.0;
		empty = true;
	}
	Box(float a, float b, float c){
		width = a;
		length = b;
		height = c;
		empty = true;
	}
	void set_width(float width);
	void set_length(float length);
	void set_height(float height);
	void print();
	float volume();
	bool box_empty();
};
void Box::set_width(float a){
	width = a;
}
void Box::set_length(float b){
	length = b;
}
void Box::set_height(float c){
	height = c;
}
void Box::print(){
	cout << "가로 : " << width << " 세로 : " << length << " 높이 : " << height << endl;
}
float Box::volume(){
	return (width*length*height);
}
bool Box::box_empty(){
	return empty;
}
int main()
{
	Box b1;
	b1.print();
	Box b2;
	b2.set_width(3);
	b2.set_length(5);
	b2.set_height(7);
	b2.print();
	b1.set_width(2);
	b1.set_length(4);
	b1.set_height(8);
	b1.print();
	float v1,v2;
	v1 = b1.volume();
	v2 = b2.volume();
	if (v1 > v2) { cout << "b1(" << v1 << ")의 부피가 b2(" << v2 << ")의 부피보다 큼";}
	else if (v1 < v2) { cout << "b2(" << v2 << ")의 부피가 b1(" << v1 << ")의 부피보다 큼";}
	
	return 0;
}