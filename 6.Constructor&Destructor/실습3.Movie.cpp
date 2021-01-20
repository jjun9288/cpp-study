#include <iostream>
#include <string>
using namespace std;
class Movie{
	string title;
	string director;
	double score;
public:
	Movie(){
		title = "";
		director = "";
		score = 0.0;
	}
	Movie(string a, string b, double c){
		title = a;
		director = b;
		score = c;
	}
	void set_title(string a);
	string get_title();
	void set_director(string b);
	string get_director();
	void set_score(double c);
	double get_score();
	void print();
};
void Movie::set_title(string a){
	title = a;
}
string Movie::get_title(){
	return title;
}
void Movie::set_director(string b){
	director = b;
}
string Movie::get_director(){
	return director;
}
void Movie::set_score(double c){
	score = c;
}
double Movie::get_score(){
	return score;
}
void Movie::print(){
	cout << "영화제목 : " << title << endl;
	cout << "감독 : " << director << endl;
	cout << "평점 : " << score << endl;
}
int main() 
{
	Movie m1;
	m1.print();
	Movie m2("기생충", "봉준호", 9.2);
	m2.print();
	Movie m3("도굴", "박정배", 7.9);
	m1.set_title("내가 죽던날");
	m1.set_director("박지완");
	m1.set_score(9);
	m1.print();
	
	double s1, s2, s3;
	s1= m1.get_score();
	s2= m2.get_score();
	s3= m3.get_score();
	
	double temp, best;
	temp = max(s1,s2);
	best = max(temp,s3);
	
	cout << "가장 평점이 좋은 영화 : ";
	if (best == s1) { cout << m1.get_title(); }
	else if (best == s2) { cout << m2.get_title(); }
	else { cout << m3.get_title(); }
	
	return 0;
}