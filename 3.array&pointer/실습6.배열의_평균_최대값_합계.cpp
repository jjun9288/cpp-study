#include <iostream>
using namespace std;
int main()
{
	float arr[5] = {1.5,2,3.1,4.7,5};
	float sum=0;
	float avg=0;
	float max = arr[0];
	cout << "배열 : ";
	for (int i=0; i<5; i++){
		cout << arr[i] << " ";
		sum += arr[i];
		if (arr[i] > max) { max = arr[i]; }
	}
	avg = sum/5;
	cout << endl;
	cout << "배열의 합 : " << sum << endl;
	cout << "배열의 평균 : " << avg << endl;
	cout << "배열의 최대값 : " << max;
	
	return 0;
}