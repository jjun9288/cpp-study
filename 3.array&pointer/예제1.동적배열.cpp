#include <iostream>
#include <vector>
using namespace std;

void vec(vector<int> arr){
	cout << "배열 출력 : ";
	for (int i=0; i<arr.size(); i++)
		cout << arr[i] << " ";
	cout << endl;
}
int main() 
{
	vector<int> arr;	//동적배열 선언
	int a,b,c,d,e;
	cout << "정수입력 : ";
	cin >> a;
	arr.push_back(a);
	cout << "정수입력 : ";
	cin >> b;
	arr.push_back(b);
	cout << "정수입력 : ";
	cin >> c;
	arr.push_back(c);
	cout << "정수입력 : ";
	cin >> d;
	arr.push_back(d);
	cout << "정수입력 : ";
	cin >> e;
	arr.push_back(e);
	
	vec(arr);
	
	cout << "배열 뒤의 2개 원소 삭제됨";
	cout << endl;
	
	arr.pop_back();
	arr.pop_back();
	vec(arr);
	
	cout << "배열의 첫번째 원소 : ";
	cout << arr.front() << endl;
	cout << "배열의 마지막 원소 : ";
	cout << arr.back() << endl;
	
	cout << "배열 지움" << endl;
	arr.clear();
	
	vec(arr);
	
	return 0;
}