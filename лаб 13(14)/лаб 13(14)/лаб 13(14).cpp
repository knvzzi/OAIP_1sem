#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "rus");
	const int n = 3, m = 4;
	int b = 0, d = 1;
	int A[n][m]=
	{
		{ 1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12}
	};

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (A[i][j] % 2 != 0)
			{
				b++;
				d *= A[i][j];
			}
		}
	}
	cout << "Сумма: " << b << endl;
	cout << "Произведение: " << d;
}
