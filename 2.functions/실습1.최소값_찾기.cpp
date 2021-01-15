#include <iostream>
using namespace std;
int get_minimum(int x, int y, int z);
int main() {

	int a;
	int b;
	int c;
	int r;
	
	cout << "정수1 입력 : ";
	cin >> a;
	cout << "정수2 입력 : ";
	cin >> b;
	cout << "정수3 입력 : ";
	cin >> c;
	r = get_minimum(a,b,c);
	cout << "가장 작은 수 : " << r;
	return 0;
}

int get_minimum(int x,int y,int z){
	if (x < y && x < z)
		return x;
	else if (y < x && y < z)
		return y;
	else
		return z;
}

	
	
