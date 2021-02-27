#include <iostream>
#include <math.h>
using namespace std;
double f(double x)
{
	if (x <= 3)
		return pow(x,2) - 3 * x + 9;
	else return 1 / (pow(x,3) + 6);
}
int main()
{
	double x,result;
	setlocale(LC_ALL, "Rus");
	cout << "Введите число!" << endl;
	cin >> x;
	result = f(x);
	cout << "Результат функции="<< endl;
	cout << result << endl;
}


