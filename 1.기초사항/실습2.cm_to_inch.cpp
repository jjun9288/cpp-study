#include <iostream>
using namespace std;
int main() {
	int height;
	int feet;
	double inch;
	//입력
	cout << "당신의 키를 cm로 입력 : ";
	cin >> height;
	//변환
	inch = height / 2.54;
	feet = inch / 12;
	//출력
	cout << height << "는 " << feet << "피트 " << inch << "인치 입니다.";
}