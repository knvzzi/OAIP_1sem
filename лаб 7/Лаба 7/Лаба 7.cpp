#include<iostream>
using namespace std;

int main()
{
	//Основа 1

	/*setlocale(LC_CTYPE, "Russian");
	int b = 7;
	float a = 0.5, w, c = 0;
	float v[] = { 5, 2.5, 3, 8, 9, 3 };

	for (int i = 0; i < 6; i++)
	{
		if (v > 0)
			w = a + v[i];
		else if (v <= 0)
			w = b / v[i];
		if (w > c)
			c = w;
	}
	cout <<"c= "<< c;*/

	//Основа 2

	/*(LC_CTYPE, "Russian");

	int p = 100, q=1, n, i;
	float y[] = { 3, -2, 0.9, 0.5, 1 };

	cin >> n;
	for (i = 1; i <= n ; i++)
	{
		if (y[i] < p)
		p = y[1];

		q *= i * ((y[i] - 5) - p);
	}
	cout <<"q= "<< q;*/

	//Вариант 2.1

	//setlocale(LC_CTYPE, "Russian");

	//double  m = 4, c = -0.045, b[4] = { 0.9, 0.5, -2, -0.1 }, x = 1, g;

	//for (int j = 0; j < 4; j++)
	//{
	//	x *= pow((b[j] + 1), 2);
	//	g = c * x;
	//}
	//cout << g;

	//Вариант 2.2

	double y[5] = { 6, 2, 0.9, 0.1, 5 }, q, z= 1, t = 10;
	for (int i = 0; i < 5; i++)
	{
		if (t > y[i])
		{
			t = y[i];
		}
		z *= (y[i] + t);
	}
	q = z;
	cout << "q = " << q << endl;
}