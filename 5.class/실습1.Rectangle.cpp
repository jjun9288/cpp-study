#include <iostream>
using namespace std;
class Rectangle{
private:
	int width;
	int height;
public:
	void setwidth(int x);
	int getwidth();
	void setheight(int y);
	int getheight();
	void calcArea();
};
void Rectangle::setwidth(int x){
	width = x;
}
int Rectangle::getwidth(){
	return width;
}
void Rectangle::setheight(int y){
	height = y;
}
int Rectangle::getheight(){
	return height;
}
void Rectangle::calcArea(){
	cout << "사각형 가로 : " << width << " 세로 : " << height << "의 면적은 " << (width*height) << "입니다.";
 }
int main()
{
	Rectangle myRec;
	myRec.setwidth(3);
	myRec.setheight(5);
	myRec.calcArea();
	
	return 0;
}