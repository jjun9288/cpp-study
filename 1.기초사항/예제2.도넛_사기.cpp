#include <iostream>
using namespace std;
int main(){
	int cash = 10000;
	int donut_price = 1300;
	
	int donut_num;
	int remain;
	
	donut_num = cash / donut_price;
	remain = cash % donut_price;
	
	cout << cash << "원으로 " << donut_price << "원 도넛을 " << donut_num << "개 사고 " << remain << "원이 남음";

	return 0;
}