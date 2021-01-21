#include <iostream>
using namespace std;
class MyMetric
{
public:
	static double kiloToMile(double k){
		return k * 1.609347;
	}
	static double mileToKilo(double m){
		return m * 0.6214;
	}
};

int main()
{
	double kilo;
	double mile;
	cout << "kilo 입력 : ";
	cin >> kilo;
	cout << kilo << " kilo = " << MyMetric::kiloToMile(kilo) << " mile" << endl;
	cout << "mile 입력 : ";
	cin >> mile;
	cout << mile << " mile = " << MyMetric::mileToKilo(mile) << " kilo" << endl;
}