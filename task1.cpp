#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	const double arg = 0.123;
	double answer = (cos(arg) + sin(arg)) / (cos(arg) - sin(arg));
	cout << setprecision(5) << "x = " << arg << endl;
	cout << setprecision(5) << "f = " << answer << endl;

	double sec_arg = 0;
	cout << "Enter a value: ";
	cin >> sec_arg;
	answer = (cos(sec_arg) + sin(sec_arg)) / (cos(sec_arg) - sin(sec_arg));
	cout << setprecision(5) << "x = " << sec_arg << endl;
	cout << setprecision(5) << "f = " << answer << endl;
}