#include <iostream>
using namespace std;
void main()
{
	double a, b, c;
	a = 1;c = 0;
	setlocale(LC_ALL, "Rus");
	cout << "Результат функции при х=1!" << endl;
	c = (sin(2 * a) + sin(5 * a) - sin(3 * a)) / (cos(a) - cos(3 * a) + cos(5 * a));
	cout << c << endl;
	cout << "Введите число!" << endl;
	cin >> b;
	cout << "Резултат функции при введённом числе!" << endl;
	c = (sin(2 * b) + sin(5 * b) - sin(3 * b)) / (cos(b) - cos(3 * b) + cos(5 * b));
	cout << c << endl;
}