#include <iostream>
using namespace std;

class Complex{
public:
	float real;
	float imag;
	
	void show(){
		cout << real << " + " << imag << "i";
	}
};

int main()
{
	Complex ex;
	float a,b;
	cout << "복소수의 실수부분 입력 : ";
	cin >> a;
	ex.real = a;
	cout << "복소수의 허수부분 입력 : ";
	cin >> b;
	ex.imag = b;
	ex.show();
	
	return 0;
}