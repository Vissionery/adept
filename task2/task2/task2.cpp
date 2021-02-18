#include <iostream>
using namespace std;
double f(double x, double y)
{
	y = (sin(2 * x) + sin(5 * x) - sin(3 * x)) / (cos(x) - cos(3 * x) + cos(5 * x));
	return y;
}
void main()
{
	double a, b, c;
	a = 1;c = 0;
	setlocale(LC_ALL, "Rus");
	cout << "Результат функции при х=1!" << endl;
	cout << f(a, c) << endl;
	cout << "Введите число!" << endl;
	cin >> b;
	cout << "Резултат функции при введённом числе!" << endl;
	cout << f(b, c) << endl;
}
