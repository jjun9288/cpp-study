#include <iostream>
using namespace std;
int main()
{
	char *pc;
	int *pi;
	double *pd;
	
	pc = (char *)0x10000;
	pi = (int *)0x10000;
	pd = (double *)0x10000;
	
	cout << "pc : " << (void *)pc << "  pi : " << pi << "  pd : " << pd << endl;
	
	pc++; pi++; pd++;
	cout << "pc : " << (void *)pc << "  pi : " << pi << "  pd : " << pd << endl;
	return 0;
}