#include <iostream>
#include <math.h>
#define PI 3.141592
using namespace std;
class Radius{
public:
	int r;
	void show() {
		cout << "원의 면적은 " << pow(r,2) * PI << " 입니다." << endl;
	}
};
int main() 	
{
	Radius MyR;
	int a;
	char b;
	cout << "원의 반지름 : ";
	cin >> a;
	MyR.r = a;
	MyR.show();
	while(true) {
		cout << "계속 하시겠습니까?(Y/N) : ";
		cin >> b;
		if (b == 'y' || b== 'Y') {
			cout << "원의 반지름 : ";
			cin >> a;
			MyR.r = a;
			MyR.show();
		}
		else if (b == 'n' || b == 'N') {
			cout << "종료!";
			break;
		}
		else {
			cout << "입력오류!";
			break;
		}
	}	
	return 0;
}