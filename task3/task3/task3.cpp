#include <iostream>
#include <math.h>
using namespace std;
bool isInArea(double x, double y)
{
	if (x >= -1 && x <= 1)
		if (y >= x && y <= x && y >= -1 && y <= 1)
			return 1;
		else return 0;
	else return 0;
}
double f(double x)
{
	if (x <= 3)
		return pow(x, 2) - 3 * x + 9;
	else return 1 / (pow(x, 3) + 6);
}
int main(void)
{
	int n;
	setlocale(LC_ALL, "Rus");
	cout << "Выберите 1 или 2 задание" << endl;
	cin >> n;
	switch (n)
	{
	case 1:
	{
		printf("Задание 1: ");
		double x, y;
		bool result;
		setlocale(LC_ALL, "Rus");
		cout << "Введите координату Х=" << endl;
		cin >> x;
		cout << "Введите координату Y=" << endl;
		cin >> y;
		result = isInArea(x, y);
		if (result == 1)
			cout << "Точка находится в области функции";
		else
			cout << "Точка не находится в области функции";
	}
	break;
	case 2: {
		printf("Задание 2: ");
		double x, result;
		setlocale(LC_ALL, "Rus");
		cout << "Введите число!" << endl;
		cin >> x;
		result = f(x);
		cout << "Результат функции=" << endl;
		cout << result << endl;
	}
    break;
	default:
		printf("Неверный ввод");
		break;
	}
}

