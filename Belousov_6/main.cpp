#include <iostream>

using namespace std;

double S(double a, double b)
{
	double s = a * b;
	return s;
}

int main()
{
	setlocale(LC_ALL, "russian");

	double a1, b1;
	double a2, b2;
	double a3, b3;

	cout << "Введите размеры 1 прямоугольника: ";
	cin >> a1 >> b1;
	cout << "Введите размеры 2 прямоугольника: ";
	cin >> a2 >> b2;
	cout << "Введите размеры 3 прямоугольника: ";
	cin >> a3 >> b3;

	double s1 = S(a1, b1);
	double s2 = S(a2, b2);
	double s3 = S(a3, b3);

	if (s1 > s2 && s1 > s3)
	{
		cout << "1 наибольший\n";
	}
	else if(s2 > s1 && s2 > s3)
	{
		cout << "2 наибольший\n";
	}
	else
	{
		cout << "3 наибольший\n";
	}

	system("pause");

	return 0;
}
