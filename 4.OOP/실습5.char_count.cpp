#include <iostream>
#include <string>
using namespace std;
class Count{
public:
	string sen;
	void show(){
		int count = 0;
		char a;
		for (int i=0; i<sen[i]; i++){
			if (a == ' ') { count += 1; }
		}
		cout << "단어의 개수는 " << count << "개 입니다.";
	}
};
int main()
{
	Count MyC;
	string a;
	cout << "문자열 입력 :";
	getline(cin,a);
	MyC.sen = a;
	MyC.show();

	return 0;
}