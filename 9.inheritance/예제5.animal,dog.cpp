#include <iostream>
using namespace std;
enum BREED { yorks, poodle, bulldog};
class Animal{
protected:
	int age;
	int weight;
public:
	Animal(){
		age = 0;
		weight = 0;
		cout << "animal 생성자" << endl;
	}
	~Animal(){
		cout << "animal 소멸자" << endl;
	}
	void speak() const{
		cout << "animal speak" << endl;
	}
	void eat() const{
		cout << "animal eat" << endl;
	}
};
class Dog : public Animal{
private:
	BREED breed;
public:
	Dog(BREED b){
		breed = b;
		cout << "Dog 생성자" << endl;
	}
	~Dog(){
		cout << "Dog 소멸자" << endl;
	}
	void wag(){
		cout << "Dog wag" << endl;
	}
	void speak() const{
		cout << "Dog speak" << endl;
	}
	void print(){
		cout << "-------------" << endl;
		cout << "age : " << age << endl;
		cout << "weight : " << weight << endl;
		cout << "breed : " << breed << endl;
		cout << "-------------" << endl;
	}
};
int main()
{
	int kind;
	while(true){
		cout << "0:요그테리셔 1:푸들 2:불독 번호입력 : ";
		cin >> kind;
		if (kind >=0 && kind <=3){
			break;
		}
		else { cout << "0~2까지의 번호을 입력하세요." << endl; }
	}
	
	Dog dog((BREED)kind);
	dog.eat();
	dog.speak();
	dog.wag();
	dog.print();
	return 0;
}