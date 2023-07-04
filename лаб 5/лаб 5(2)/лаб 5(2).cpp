#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	float x = -1, k = 6, y = 1.6e-4, i = 0, c, d;
	while (i < 3)
	{
		c = i / k - sqrt(y) / 0.4;
		d = exp(1 - c) + 4.9 * (pow(x, 2) + 1);
		cout << c << ' ' << d << endl;
		i = i + 0.5;
	}
}
