#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <conio.h>

float func(int i)
{
	return pow(-1, i) * ((pow(i, 2) + 1) / (pow(i, 3) + 3));
}
//Задание 1
float reshfor(int n)
{
	float s, s1;
	s1 = 0;
	for (int i = 0; i <= (n - 1); ++i)
	{

		s = func(i);
		s1 += s;

	}
	return s1;
}

//Задание 2
float reshfor2(double eps)
{
	float s = 0;
	float s1 = 0;
	for (int i = 0; fabs(s1) <= eps; i++)
	{
		s = func(i);
		s1 += s;
	}
	return s1;
}

//Задание 3
void reshfor3(int n, int k)
{
	float a;
	int k1;
	k1 = k;
	for (int i = 0; i <= (n - 1); ++i)
	{
		a = func(i);
		if ((i + 1) == k)
		{
			k += k1;
			continue;
		}
		else
		{
			printf("Иттерация: %d ", i + 1);
			printf(" Результат: %f\n", a);
		}
	}
}

//Задание 4
int reshfor4(double esp)
{
	float a;
	int i1 = 0;
	bool z;
	z = 1;
	for (int i = 0; z == 1; ++i)
	{
		a = func(i);
		if (fabs(a) <= esp)
		{
			i1 = i;
			z = 0;
			break;
		}
		else
			continue;

	}
	return i1;
}

//Задание 5
int reshfor5(double esp)
{
	float a;
	int i1 = 0;
	bool z = 0;
	for (int i = 0; z == 0; ++i)
	{
		a = func(i);
		if (fabs(a) <= esp && a < 0)
		{
			i1 = i;
			z = 1;
			break;
		}
		else
			continue;

	}
	return i1;
}

//Задание 1
float reshwhile(int n)
{
	float s, s1;
	int i = 0;
	s = 0;
	s1 = 0;
	while (i <= n - 1)
	{
		s = func(i);
		s1 += s;
		++i;
	}
	return s1;
}
//Задание 2
float reshwhile2(double eps)
{
	float s = 0;
	float s1 = 0;
	int i = 0;
	while (fabs(s1) <= eps)
	{
		s = func(i);
		s1 += s;
		++i;
	}
	return s1;
}

//Задание 3
void reshwhile3(int n, int k)
{
	float a;
	int k1;
	k1 = k;
	int i = 0;
	while (i <= (n - 1))
	{
		a = func(i);
		if ((i + 1) == k)
		{
			k += k1;
			++i;
			continue;
		}
		else
		{
			printf("Иттерация: %d ", i + 1);
			printf(" Результат: %f\n", a);
		}
		++i;
	}


}

//Задание 4
int reshwhile4(double esp)
{
	float a;
	int i = 0;
	int i1 = 0;
	bool z;
	z = 1;
	while (z == 1)
	{
		a = func(i);
		if (fabs(a) <= esp)
		{
			i1 = i;
			z = 0;
			break;
		}
		++i;
	}

	return i1;
}

//Задание 5
int reshwhile5(double esp)
{
	float a;
	int i = 0;
	int i1 = 0;
	bool z;
	z = 1;
	while (z == 1)
	{
		a = func(i);
		if (fabs(a) <= esp && a < 0)
		{
			i1 = i;
			z = 0;
			break;
		}
		++i;
	}

	return i1;
}

//Задание 1
float reshdo(int n)
{
	float s, s1;
	int i;
	s1 = 0;
	i = 0;
	do
	{
		s = func(i);
		s1 += s;
		++i;
	} while (i <= (n - 1));
	return s1;
}

//Задание 2
float reshdo2(double eps)
{
	float s = 0;
	float s1 = 0;
	int i = 0;
	do
	{
		s = func(i);
		s1 += s;
		++i;
	} while (fabs(s1) <= eps);
	return s1;
}

//Задание 3
void reshdo3(int n, int k)
{
	float a;
	int k1;
	k1 = k;
	int i = 0;
	do
	{
		a = func(i);
		if ((i + 1) == k)
		{
			k += k1;
			++i;
			continue;
		}
		else
		{
			printf("Иттерация: %d ", i + 1);
			printf(" Результат: %f\n", a);
		}
		++i;
	} while (i <= (n - 2));
}

//Задание 4
int reshdo4(double esp)
{
	float a;
	int i = 0;
	int i1 = 0;
	bool z;
	z = 1;
	do
	{
		a = func(i);
		if (fabs(a) <= esp)
		{
			i1 = i;
			z = 0;
			break;
		}
		++i;
	} while (z == 1);
	return i1;
}

//Задание 5
int reshdo5(double esp)
{
	float a;
	int i = 0;
	int i1 = 0;
	bool z;
	z = 1;
	do
	{
		a = func(i);
		if (fabs(a) <= esp && a < 0)
		{
			i1 = i;
			z = 0;
			break;
		}
		++i;
	} while (z == 1);
	return i1;
}


int main(void)
{
	setlocale(LC_CTYPE, "rus");
	printf("Выберите реализацию программы 1) FOR 2) WHILE 3) DO WHILE:\n");
	int c = 0;
	switch (_getch())
	{
	case '1':
	{
		printf("Вы выбрали версию где все функции реализованны циклом FOR:\n");
		printf("Введите номер задания от 1 до 5: ");
		switch (_getch())
		{
		case '1':
		{
			printf("Задание 1\n ");
			int n;
			float a;
			printf("Введите число n= ");
			scanf_s("%d", &n);
			a = reshwhile(n);
			printf("Результат: %f\n", a);
			break;
		}
		case '2':
		{
			printf("Задание 2\n ");
			float a1;
			float eps;
			printf("Введите точность eps= ");
			scanf_s("%f", &eps);
			a1 = reshwhile2(eps);
			printf("Результат: %4f\n", a1);
			break;
		}
		case '3':
		{
			printf("Задание 3\n ");
			int n1;
			int k;
			printf("Введите число n= ");
			scanf_s("%d", &n1);
			printf("Введите число k= ");
			scanf_s("%d", &k);
			reshfor3(n1, k);
			break;
		}
		case '4':
		{
			printf("Задание 4\n ");
			int i;
			float eps;
			printf("Введите точность eps= ");
			scanf_s("%f", &eps);
			i = reshfor4(eps);
			printf("Результат: %d\n", i);
			break;
		}
		case '5':
		{
			printf("Задание 5\n ");
			int i;
			float eps;
			printf("Введите точность eps= ");
			scanf_s("%f", &eps);
			i = reshfor5(eps);
			printf("Результат: %d\n", i);
			break;
		}
		case '6':
		{
			printf("Такого задания не существует\n ");
			break;
		}
		}
		break;
	}
	case '2':
	{
		printf("Вы выбрали версию где все функции реализованны циклом WHILE:\n");
		printf("Введите номер задания от 1 до 5: ");
		switch (_getch())
		{
		case '1':
		{
			printf("Задание 1\n ");
			int n;
			float a;
			printf("Введите число n= ");
			scanf_s("%d", &n);
			a = reshwhile(n);
			printf("Результат: %f\n", a);
			break;
		}
		case '2':
		{
			printf("Задание 2\n ");
			float a1;
			float eps;
			printf("Введите точность eps= ");
			scanf_s("%f", &eps);
			a1 = reshwhile2(eps);
			printf("Результат: %4f\n", a1);
			break;
		}
		case '3':
		{
			printf("Задание 3\n");
			int n1;
			int k;
			printf("Введите число n= ");
			scanf_s("%d", &n1);
			printf("Введите число k= ");
			scanf_s("%d", &k);
			reshwhile3(n1, k);
			break;
		}
		case '4':
		{
			printf("Задание 4\n ");
			int i;
			float eps;
			printf("Введите точность eps= ");
			scanf_s("%f", &eps);
			i = reshwhile4(eps);
			printf("Результат: %d\n", i);
			break;
		}
		case '5':
		{
			printf("Задание 5\n ");
			int i;
			float eps;
			printf("Введите точность eps= ");
			scanf_s("%f", &eps);
			i = reshwhile5(eps);
			printf("Результат: %d\n", i);
			break;
		}
		case '6':
		{
			printf("Такого задания не существует\n ");
			break;
		}
		}
		break;
	}
	case '3':
	{
		printf("Вы выбрали версию где все функции реализованны циклом DO WHILE:\n");
		printf("Введите номер задания от 1 до 5: ");
		switch (_getch())
		{
		case '1':
		{
			printf("Задание 1\n ");
			int n;
			float a;
			printf("Введите число n= ");
			scanf_s("%d", &n);
			a = reshdo(n);
			printf("Результат: %f\n", a);
			break;
		}
		case '2':
		{
			printf("Задание 2\n ");
			float a1;
			float eps;
			printf("Введите точность eps= ");
			scanf_s("%f", &eps);
			a1 = reshdo2(eps);
			printf("Результат: %4f\n", a1);
			break;
		}
		case '3':
		{
			printf("Задание 3\n ");
			int n1;
			int k;
			printf("Введите число n= ");
			scanf_s("%d", &n1);
			printf("Введите число k= ");
			scanf_s("%d", &k);
			reshdo3(n1, k);
			break;
		}
		case '4':
			printf("Задание 4\n ");
			int i;
			float eps;
			printf("Введите точность eps= ");
			scanf_s("%f", &eps);
			i = reshdo4(eps);
			printf("Результат: %d\n", i);
			break;
		case '5':
			printf("Задание 5\n ");
			int i1;
			float eps1;
			printf("Введите точность eps= ");
			scanf_s("%f", &eps1);
			i1 = reshdo5(eps1);
			printf("Результат: %d\n", i1);
			break;
		case '6':
			printf("Такого задания не существует\n ");
			break;
		}
		break;
	}

	{

	}

	}
	return 0;
}
	