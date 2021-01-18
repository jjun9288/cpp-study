#include <iostream>
#include <string>
using namespace std;
class Car {
public:	
	string name;
	string company;
	int speed;
	string color;
	void show() {
		cout << "자동차 객체의 차종은 " << name << "이고, 제조사는 " << company << "이고, 속도는 " << speed << "이고, 색상은 " << color << "입니다.";  
	}
};
int main() 
{
	Car myCar;
	string a,b,d; int c;
	cout << "자동차 차종 : ";
	cin >> a;
	myCar.name = a;
	cout << "자동차 제조사 : ";
	cin >> b;
	myCar.company = b;
	cout << "자동차 속도 : ";
	cin >> c;
	myCar.speed = c;
	cout << "자동차 색상 : ";
	cin >> d;
	myCar.color = d;
	
	myCar.show();
	
	return 0;
}