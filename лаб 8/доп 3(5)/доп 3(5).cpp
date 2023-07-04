#include <iostream>
using namespace std;
//Задание 5, Вариант 3

int main()
{
	setlocale(LC_CTYPE, "Russian");

	//Метод трапеций 

	int b = 6, n = 200;
	float h, a = 1, x;
	double s1 = 0, s2 = 0, s = 0, S;
	h = (b - a) / n;
	x = a;
	while (x <= b - h)
	{
		s = s + h * (1 + (pow(x, 3)) + (1 + pow(x + h, 3))) / 2;
		x = x + h;
	}
	cout << "Площать криволинейной трапеции методом трапеций равна " << s << endl;

	//Метод парабол

	h = (b - a) / (2 * n);
	x = a + 2 * h;
	for (int i = 1; i < n; i++)
	{
		s2 = s2 + (1 + pow(x, 3));
		x = x + h;
		s1 = s1 + (1 + pow(x, 3));
		x = x + h;
	}
	S = (h / 3) * (1 + (pow(a, 3)) + 4 * (1 + pow(a + h, 3)) + 4 * s1 + 2 * s2 + (1 + pow(b, 3)));
	cout << "Площадь криволинейной трапеции методом парабол равна " << S;
}