#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	float k=6, y=1.6e-4, i, c, d;
	for (int n = 0; n < 3; n++)
	{
		cin >> i;
		for (float x =1; x < 2.1; x=x+0.1) 
		{
			cout << x << "\t";
			c = i / k - sqrt(y) / 0.4;
			d = exp(1 - c) + 4.9 * (pow(x, 2) + 1);
			cout << c << ' ' << d << endl;			
		}
	}
}
