#include <iostream>
using namespace std;
class Animal{
public:
	Animal() { cout << "Animal 생성자" << endl; }
	~Animal() { cout << "Animal 소멸자" << endl; }
	virtual void speak() { cout << "Animal speak" << endl; }
};
class Dog : public Animal{
public:
	Dog() { cout << "Dog 생성자" << endl; }
	~Dog() { cout << "Dog 소멸자" << endl; }
	void speak() { cout << "멍멍" <<endl; }
};
class Cat : public Animal{
public:
	Cat() { cout << "Cat 생성자" << endl; }
	~Cat() { cout << "Cat 소멸자" << endl; }
	void speak() { cout << "야옹" <<endl; }
};
int main()
{
	Animal *a1 = new Dog();
	Animal *a2 = new Cat();
	a1 -> speak();
	a2 -> speak();
	delete a1;
	delete a2;
	return 0;
}