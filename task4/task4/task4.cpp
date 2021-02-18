#include <iostream>
using namespace std;
void f();
double x=1, y, result;
void main()
{
	setlocale(LC_ALL, "Rus");
	cout << "Результат функции при х=1!" << endl;
	f();
	cout << result << endl;
	cout << "Введите число!" << endl;
	cin >> y;
	x = y;
	cout << "Резултат функции при введённом числе!" << endl;
	f();
	cout << result << endl;
}
void f(void)
{
	result = (sin(2 * x) + sin(5 * x) - sin(3 * x)) / (cos(x) - cos(3 * x) + cos(5 * x));
}
