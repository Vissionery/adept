#include <iostream>
#include "func.h"
using namespace std;
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