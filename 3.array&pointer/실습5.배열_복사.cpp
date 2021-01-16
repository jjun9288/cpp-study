#include <iostream>
using namespace std;

void copy(int *A, int *B, int n){
	for (int i = 0; i < n; i++) {
		*(B + i) = *(A + i);
		cout << *(B + i) << " ";
	}
	cout << endl;
}

int main()
{	
	int A[5]= {1,2,3,4,5};
	int B[5]= {0,0,0,0,0};
	
	cout << "복사하기 전 배열" << endl;
	cout << "배열 A : ";
	for (int i=0; i<5; i++){
		cout << A[i] << " ";
	}
	cout << endl;
	cout << "배열 B : ";
	for (int i=0; i<5; i++){
		cout << B[i] << " ";
	}
	cout << endl;
	cout << "복사 후 배열 : " << endl;
	cout << "배열 A : ";
	for (int i=0; i<5; i++){
		cout << A[i] << " ";
	}
	cout << endl;
	cout << "배열 B : ";
	copy(A,B,5);
	return 0;
}