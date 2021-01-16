#include <iostream>
using namespace std;
int main()
{
	int arr1[5] = {1,2,3,4,5};
	int arr2[5] = {2,3,1,1,2};
	int arr3[5];
	
	cout << "arr1 배열 출력 : ";
	for(int a=0; a<5; a++){
		cout << arr1[a] << " ";
	}
	cout << endl;
	
	cout << "arr2 배열 출력 : ";
	for (int b=0; b<5; b++){
		cout << arr2[b] << " ";
	}
	cout << endl;
	
	for(int k=0;k<5;k++){
		arr3[k] = arr1[k];
	}
	
	int *pi;
	pi = new int[5];
	for (int i=0;i<5;i++){
	*(pi+i) = arr2[i];
	}
	
	cout << "arr3 배열 출력 : ";
	for (int j=0;j<5;j++){
		arr3[j] = arr3[j] + pi[j];
		cout << arr3[j] << " ";
	}
	

	
	return 0;
}