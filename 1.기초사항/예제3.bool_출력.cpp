#include <iostream>
using namespace std;
int main() {
	int a;
	int b;
	bool r1, r2, r3, r4;
	
	cout << "정수1 입력 : ";
	cin >> a;
	cout << "정수2 입력 : ";
	cin >> b;
	
	r1 = (a == b);
	r2 = (a != b);
	r3 = (a > b);
	r4 = (a < b);
	
	cout.setf(cout.boolalpha);
	cout << "10 == 12 : " << r1 << "\n";
	cout << "10 != 12 : " << r2 << "\n";
	cout << "10 > 12 : " << r3 << "\n";
	cout << "10 < 12 : " << r4 << "\n";
	return 0;
		
}