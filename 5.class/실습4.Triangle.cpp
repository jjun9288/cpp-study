#include <iostream>
using namespace std;
class Triangle{
private:
	float length;
	float height;
public:
	void setLength(float a);
	float getLength();
	void setHeight(float b);
	float getHeight();
	void getArea();
};
void Triangle::setLength(float a){
	length = a;
}
float Triangle::getLength(){
	return length;
}
void Triangle::setHeight(float b){
	height = b;
}
float Triangle::getHeight(){
	return height;
}
void Triangle::getArea(){
	cout << "삼각형의 면적은 " << length*height*1/2 << " 입니다.";
}
int main() 
{
	Triangle myT;
	float x,y;
	cout << "삼각형 밑변 입력 : ";
	cin >> x;
	myT.setLength(x);
	cout << "삼각형 높이 입력 : ";
	cin >> y;
	myT.setHeight(y);
	myT.getArea();
	return 0;
}