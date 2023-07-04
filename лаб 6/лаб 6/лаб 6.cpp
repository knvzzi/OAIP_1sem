#include<iostream>
using namespace std;

int main()
{
	float y = 1.4e-3, x = 0.2, m = 4, j = 5, p, q;

	while (j < 13)
	{
		p = exp(sin(j / x) * log(x / y) * x);
		if (p <= pow(y, 2))
		{
			q = sqrt(p / m);
		}
		else if (p > pow(y, 2))
		{
			q = sqrt(2 * x) / (j + p);
		}
		cout << "p= " << p << endl;
		cout << "q= " << q << endl;
		j += 2;
	}
	system("pause");
}