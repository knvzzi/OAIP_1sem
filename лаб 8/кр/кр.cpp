#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	float n = 5, x = 6, i = 1, f = 0;
	while (x < 12)
	{
		for (int i = 1; i <= n; i++)
		{
			f += i / x;
		}
		cout << "f = " << f << endl;
		x += 2;
	}
}