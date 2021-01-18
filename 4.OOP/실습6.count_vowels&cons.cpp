#include <iostream>
#include <string>
using namespace std;
class Find{
public:
	string len;
	void show() {
		int vowel = 0;
		int cons = 0;
		for(int i=0; i<len.length();i++){
			switch(len[i]){
				case'a': case'e': case'i': case'o': case'u':{
					vowel += 1;
					break;
				}
				default :{
					cons += 1;
					break;
				}
			}
		}	
		cout << "모음의 개수는 " << vowel << "개 이고" << endl;
		cout << "자음의 개수는 " << cons << "개 입니다.";
	}
};
int main()
{
	string a;
	Find MyF;
	cout << "문자열 입력 (소문자 입력) : ";
	getline(cin,a);
	MyF.len = a;
	MyF.show();
	return 0;
}