#include <iostream>
#include <string>
using namespace std;
class Car{
	int speed;
	int gear;
	string color;
public:
	static int count;
	Car(int s=0, int g=1, string c="white"):speed(s),gear(g),color(c){
		count ++;
	}
	~Car(){
		count --;
	}
	
	void setSpeed(int s){
		speed = s;
	}
	int getSpeed(){
		return speed;
	}
	void setSameSpeed(Car *p){
		if(this->getSpeed() > p->getSpeed()){
			this -> getSpeed();
				p -> speed = this -> getSpeed();
		}
		else
			this -> speed = p -> getSpeed();
	}
	void upSpeed(int s){
		this -> speed += s;
	}
	void print(){
		cout << "speed : " << speed << " gear : " << gear << " color : " << color << endl;
	}
};
int Car::count = 0;
int main()
{
	Car c1;
	c1.print();
	Car c2(10);
	c2.print();
	Car c3(50,3);
	c3.print();
	Car c4(100,4,"black");
	c4.print();
	cout << endl;
	c1.upSpeed(10);
	c2.upSpeed(10);
	c3.upSpeed(10);
	c4.upSpeed(10);
	cout << "Car 객체의 속도 10 높인 후" << endl;
	c1.print();
	c2.print();
	c3.print();
	c4.print();
	return 0;
}