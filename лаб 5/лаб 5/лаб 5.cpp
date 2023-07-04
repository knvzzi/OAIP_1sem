#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	float x=-1, k=6, y=1.6e-4, i, c, d;
	for (int n = 0; n < 5; n++)
	{
		cin >> i;
		c = i / k - sqrt(y) / 0.4;
		d = exp(1 - c) + 4.9 * (pow(x, 2) + 1);
		cout << c << ' ' << d << endl;
	}
}

