#include <iostream>
using namespace std;
int main() {
	int sec;
	int hour;
	int min;
	int second;
	
	cout << "초를 입력 : ";
	cin >> sec;
	hour = sec / 3600;
	min = sec % 3600 / 60;
	second = sec % 3600 % 60;

	cout << sec << "초는 " << hour << "시간 " << min << "분 " << second << "초 입니다.";
	return 0;
}