#include <iostream>
using namespace std;
class Rectangle{
public:
	int length;
	int height;
	void show() {
		cout << "사각형의 가로 = " << length << " 세로 = " << height;
	}
};

int main()
{
	Rectangle myRect;
	int a,b;
	cout << "사각형의 가로 길이 입력 : ";
	cin>> a;
	myRect.length = a;
	cout << "사각형의 세로 길이 입력 : ";
	cin >> b;
	myRect.height = b;
	myRect.show();
	
	
	return 0;
}