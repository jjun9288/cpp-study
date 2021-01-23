#include <iostream>
using namespace std;
class Car{
public:
	int getMaxSpeed(){
		return 100;
	}
};
class SportsCar : public Car{
public:
	int getMaxSpeed(){		//overriding
		return 300;
	}
	int getMaxSpeed(int gear){
		switch(gear){
			case 0 : return 0;
			case 1 : return 30;
			case 2 : return 60;
			case 3 : return 100;
			default : return 300;
		}
	}
};
int main()
{
	Car c1;
	cout << "Car 최대속도 : " << c1.getMaxSpeed() << endl;
	SportsCar c2;
	cout << "SportsCar 최대속도 : " << c2.getMaxSpeed() << endl;
	cout << "기어가 2일때 SportsCar 최대속도 : " << c2.getMaxSpeed(2) << endl;
	cout << "SportsCar의 부모 클래스의 최대속도 : " << c2.Car::getMaxSpeed() << endl;	//overriding 전꺼 부르기
	
	return 0;
}