#include <iostream>
using namespace std;

int main() {
	//변수 선언
	int year;
	//년도 입력받음
	cout << "년도 입력 : ";
	cin >> year;
	//윤년 계산
	if ((year%4==0 && year%100!=0) || (year%400==0))
		cout << year << "년은 윤년입니다.";
	else
		cout << year << "년은 윤년이 아닙니다.";
	
	return 0;
}