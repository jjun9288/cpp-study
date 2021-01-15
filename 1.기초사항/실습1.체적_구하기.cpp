#include <iostream>
using namespace std;
int main() {	
	int length;
	int width;
	int height;
	int volume;
	//입력받음
	cout << "상자의 길이를 입력 : ";
	cin >> length;
	cout << "상자의 너비를 입력 : ";
	cin >> width;
	cout << "상자의 높이를 입력 : ";
	cin >> height;
	//체적계산
	volume = length * width * height;
	//체적출력
	cout << "상자의 체적 : " << volume;
	return 0;
}