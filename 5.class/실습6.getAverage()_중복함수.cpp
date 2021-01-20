#include <iostream>
using namespace std;
float getAverage(float x,float y){
	float avg = 0;
	avg = (x+y)/2;
	return avg;
}
float getAverage(float x, float y, float z){
	float avg = 0;
	avg = (x+y+z)/3;
	return avg;
}

int main()
{
	float a,b,c;
	cout << "정수1 입력 : ";
	cin >> a;
	cout << "정수2 입력 : ";
	cin >> b;
	cout << "정수3 입력 : ";
	cin >> c;
	cout << a << ", " << b << " 평균 : " << getAverage(a,b) << endl;
	cout << a << ", " << b << ", " << c << " 평균 : " << getAverage(a,b,c);
	
	return 0;
}