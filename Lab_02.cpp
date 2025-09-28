
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double a;
	double z1;
	double z2;

	//cout << "Enter number ";
	cin >> a;

	z1 = (sin(a) + sin(a * 5) - sin(a * 3)) / (cos(a) - cos(a * 3) + cos(a * 5));
	
	z2 = tan(3 * a);
	
	//cout << "z1 = " << z1 << endl;
	//cout << "z2 = " << z2 << endl;

	return 0;
	
	
}
