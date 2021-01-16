#include <iostream>
#include <time.h>
using namespace std;
int main() 
{
	srand((unsigned)time(NULL));
	int arr[10];
	
	for(int i=0;i<10;i++){
		arr[i] = rand()%50+1;
		cout << arr[i] << " ";
	}
	cout << endl;
	
	int max=arr[0];
	int min=arr[0];
	
	
	for(int j=0;j<10;j++){
		if (arr[j] > max) {
			max = arr[j];
		}
		if (arr[j] < min) {
			min = arr[j];
		}
	}
	
	cout << "최대값 : " << max << "\t";
	cout << "최소값 : " << min ; 
	return 0;
}