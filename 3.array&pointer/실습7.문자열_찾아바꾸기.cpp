#include <iostream>
#include <string>
using namespace std;
int main() 
{
	string s;
	string target;
	string change;
	
	cout << "문자열 입력 : ";
	getline(cin,s);
	cout << "찾을 문자열 입력 : ";
	getline(cin,target);
	cout << "바꿀 문자열 입력 : ";
	getline(cin,change);
	cout << "원본 : " << s << endl;
	cout << "교체본 : " << s.replace(s.find(target),change.length(),change);
	
	return 0;
}