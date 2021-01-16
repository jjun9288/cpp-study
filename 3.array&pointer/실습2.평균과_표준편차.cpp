#include <iostream>
#include <math.h>
using namespace std;

float average(float arr[]){
	float sum = 0;
	for (int i=0; i<10; i++){
		sum += arr[i];
	}
	return (sum/10);
}
float std_deviation(float arr[], float k){
	float stdd = 0;
	float sum = 0;
	for (int i=0; i<10; i++){
		sum += pow((arr[i]-k),2);
	}
	stdd = sqrt(sum/10);
	return stdd;
}
int main() 
{
	
	float num[10];
	for(int i=0; i<10; i++){
		cout << i+1 <<"번째 실수 입력 : ";
		cin >> num[i];
	}
	cout << "배열 출력" << endl;
	for (int j=0; j<10; j++){
		cout << num[j] << " ";
	}
	cout << endl;
	
	cout << "평균 : ";
	float avg = average(num);
	cout << avg << " ";

	cout << "표준편차 : ";
	float std = std_deviation(num,avg);
	cout << std;
	
	return 0;
}