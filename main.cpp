#include <iostream>
#include <string>
#include<Windows.h>
using namespace std;

void summ(double a, double b)
{
	a = a + b;
	cout << "Ответ:" << a << endl;
}
void minu(double a, double b)
{
	a = a - b;
	cout << "Ответ:" << a << endl;
}
void mnosh(double a, double b)
{
	a = a * b;
	cout << "Ответ:" << a << endl;
}
void dele(double a, double b)
{
	a = a / b;
	cout << "Ответ:" << a << endl;
}
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double a;
	double b;
	char act;
	string rur;

	while(true)
	{
		cout << "Ввдите первое число\n";
		try
		{
			cin >> rur;
			a = stod(rur);
			break;
		}
		catch (const std::exception&)
		{
			cout << "Это не число!\n";
		}
	}

	while (true)
	{
		cout << "Введите действие\n";
		cin >> act;
		if (act == '+')
		{
			break;
		}
		if (act == '-')
		{
			break;
		}
		if (act == '*')
		{
			break;
		}
		if (act == '/')
		{
			break;
		}
		cout << "Это не действие!\n";
	}

	while (true)
	{
		cout << "Ввдите второе число\n";
		try
		{
			cin >> rur;
			b = stod(rur);
			break;
		}
		catch (const std::exception&)
		{
			cout << "Это не число!\n";
		}
	}
	if (act == '+')
	{
		summ(a,b);
	}

	else if (act == '-')
	{
		minu(a, b);
	}

	else if (act == '/')
	{
		dele(a, b);
	}

	else if (act == '*')
	{
		mnosh(a, b);
	}

	
}

