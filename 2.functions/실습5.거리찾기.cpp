#include <iostream>
#include <math.h>
using namespace std;
int main() {
	int x1,x2,y1,y2;
	cout << "첫번째 점의 x 값 : ";
	cin >> x1;
	cout << "첫번째 점의 y 값 : ";
	cin >> y1;
	cout << "두번째 점의 x 값 : ";
	cin >> x2;
	cout << "두번째 점의 y 값 : ";
	cin >> y2;
	double distance = sqrt(pow((x2-x1),2) + pow((y2-y1),2));
	printf("점 (%d,%d)와 점(%d,%d)의 거리 : ", x1,y1,x2,y2);
	cout << distance;
	return 0;
}