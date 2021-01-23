#include <iostream>
using namespace std;
class Car{
	int speed;
public:
	void setSpeed(){
		speed = 0;
	}
	int getSpeed(){
		return speed;
	}
	int getMaxSpeed(){
		return 100;
	}
	void print(){
		cout << "Car speed = " << speed << endl;
	}
};
class SportsCar : public Car{
	int speed;
	int gear;
public:
	void setSpeed(){
		speed = 0;
	}
	void setGear(int gear){
		this -> gear = gear;
	}
	int getGear(){
		return gear;
	}
	int getMaxSpeed(){		//overriding
		return 100;
	}
	int getMaxSpeed(int gear){
		switch(gear){
			if(gear <= 2){ return Car::getMaxSpeed(); }
			else return 200;
		}
	}
	void print(){
		cout << "Car speed = " << speed;
		cout << " SportsCar speed = " << speed;
		cout << " gear = " << gear << endl;
	}
};
int main()
{
	Car c1;
	c1.print();
	SportsCar c2;
	c2.setGear(0);
	c2.print();
	cout << "Car 최대속도 : " << c1.getMaxSpeed() << endl;
	cout << "SportsCar 최대속도 : " << c2.getMaxSpeed() << endl;
	SportsCar c3;
	c3.setGear(3);
	c3.print();
	cout << "SportsCar의 부모 클래스의 최대속도 : " << c2.Car::getMaxSpeed() << endl;
	
	return 0;
}