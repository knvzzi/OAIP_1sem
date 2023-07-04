#include <iostream>
using namespace std;
// Задание 6

int main()
{
	setlocale(LC_CTYPE, "Russian");
	int n;
	float y1, y2, x, a, b, f1, f2, e=0.0001;
	cin >> x;
	cin >> n;
	for (int i = 0; i <= n; i++)
	{
		y1 = pow(x, 2);
		y2 = x + 2;
		if (y1 == y2)
		{
			cout << x << " - корень уравнения"<<endl;
		}
		x++;
	}
	cout << "Введите а = ";
	cin >> a;
	cout << "Введите b = ";
	cin >> b;
	do
	{
		x = (a + b) / 2;
		f1 = 2 - pow(x, 2) + x;
		f2 = 2 - pow(a, 2) + a;
		if (f1 * f2 <= 0)
		{
			b = x;
		}
		else
		{
			a = x;
		}
	}
	while (abs(a - b) > (2 * e));
	cout << "x = " << int(x) << endl;

	//Вариант 6

	/*setlocale(LC_CTYPE, "Russian");
	float x, a, b, f1, f2, e = 0.0001;
	cout << "Введите а = ";
	cin >> a;
	cout << "Введите b = ";
	cin >> b;
	do
	{
		x = (a + b) / 2;
		f1 = 5 * x - 1 + pow(x, 3);
		f2 = 5 * a - 1 + pow(a, 3);
		if (f1 * f2 <= 0)
		{
			b = x;
		}
		else
		{
			a = x;
		}
	}
	while (abs(a - b) > (2 * e));
	cout << "x = " << int(x) << endl;*/

	//Вариант 8

	/*setlocale(LC_CTYPE, "Russian");
	double a, b, e, x, f1, f2;
	cout << "Введите a ";
	cin >> a;
	cout << "Введите b ";
	cin >> b;
	e = 0.0001;
	do
	{
		x = (a + b) / 2;
		f1 = pow(x,3) + x - 4;
		f2 = pow(a,3) + a - 4;
		if (f1 * f2 <= 0)
			b = x;
		else
			a = x;
	}
	while (abs(a - b) > 2 * e);
	cout << "x = " << x << endl;*/

	//Вариант 3

	/*setlocale(LC_CTYPE, "Russian");
	double a, b, e, x, f1, f2;
	cout << "Введите a ";
	cin >> a;
	cout << "Введите b ";
	cin >> b;
	e = 0.0001;
	do
	{
		x = (a + b) / 2;
		f1 = pow(x,3) + 2*x - 1;
		f2 = pow(a,3) + 2*a - 4;
		if (f1 * f2 <= 0)
			b = x;
		else
			a = x;
	}
	while (abs(a - b) > 2 * e);
	cout << "x = " << x << endl;*/
}
