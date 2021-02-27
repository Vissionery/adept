#include <iostream>
using namespace std;
bool isInArea(double x, double y)
{
	if (x >= -1 && x <= 1)
		if (y >= x && y <= x && y >= -1 && y <= 1)
			return 1;
		else return 0;
	else return 0;
}
int main()
{
	double x, y;
	bool result;
	setlocale(LC_ALL, "Rus");
	cout << "Введите координату Х=" << endl;
	cin >> x;
	cout << "Введите координату Y=" << endl;
	cin >> y;
	result=isInArea(x, y);
	if (result == 1)
		cout << "Точка находится в области функции";
	else 
		cout << "Точка не находится в области функции";
}