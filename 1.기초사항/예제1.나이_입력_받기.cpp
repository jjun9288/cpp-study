#include <iostream>
using namespace std;

int main() {
	string name;
	int age;
	int this_year = 2020;
	
	cout << "이름 : ";
	cin >> name;
	cout << "나이 : ";
	cin >> age;
	
	int year = this_year - age + 1;
	
	cout << "당신의 이름은 " << name << "입니다. \n";
	cout << "당신의 출생년도는 " << year << "입니다.";
}