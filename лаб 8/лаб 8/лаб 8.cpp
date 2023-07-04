#include <iostream>
using namespace std;
//Задание 5, Вариант 5

int main()
{
	setlocale(LC_CTYPE, "Russian");

	//Метод трапеций 

	int b=12, n=200;
	float h, a=8, x;
	double s1 = 0, s2 = 0, s=0, S;
	h = (b - a) / n;
	x = a;
	do
	{
		s = s + h * ((5 - pow(x, 2)) + (5 - pow(x + h, 2)))/2;
		x = x + h;
	}
	while (x <= b - h);
	cout <<"Площать криволинейной трапеции методом трапеций равна "<< s<<endl;

	//Метод парабол

	h = (b - a) / (2*n);
	x = a+2*h;
	for (int i = 1; i < n; i++)
	{
		s2 = s2 + (5 - pow(x, 2));
		x = x + h;
		s1 = s1 + (5 - pow(x, 2));
		x = x + h;
	}
	S = (h / 3) * ((5 - pow(a, 2)) + 4 * (5 - pow(a + h, 2)) + 4*s1 + 2*s2 + (5 - pow(b, 2)));
	cout << "Площадь криволинейной трапеции методом парабол равна " << S;

}