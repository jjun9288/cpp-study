#include <iostream>
using namespace std;
int main() 	
{
	float c;
	float f;
	cout << "섭씨온도를 입력 : ";
	cin >> c;
	
	f = 32 + (1.8 * c);
	cout << "섭씨 "<< c << "ºC는 화씨 " << f << "ºF입니다.";
	return 0;
}