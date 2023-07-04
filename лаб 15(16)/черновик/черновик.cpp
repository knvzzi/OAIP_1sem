#include <iostream>
#include <cstring>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");

	/*int rows, cols, null = 0, al = 0, al1 = 0, min = 1000, max = 0, maxI=0;

	cout << "Введите строки ";
	cin >> rows;
	cout << "Введите колонки ";
	cin >> cols;

	int* B = new int[rows];
	int** A = new int* [rows];

	for (int i = 0; i < rows; i++)
	{
		A[i] = new int[cols];
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cin >> A[i][j];
		}
		cout << endl;
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout<<A[i][j]<<"\t";
		}
		cout << endl;
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (A[i][j] < min)
			{
				min = A[i][j];
				B[i] = min;
			}
		}

		cout << "Минимальный элемент в строке "<<(i+1)<<" - "<< min << endl;
		min = 1000;
	}

	for (int i = 0; i < rows; i++)
	{
		if (B[i] > B[i+1])
		{
			max = B[i];
			maxI = i;
		}
	}

	cout << "В строке " << maxI+1 << " расположен максимальный из минимальных элементов";*/

	char ch, C[30], D[30], E[30];
	int coll = 0, i;

	cin >> ch;
	cin >> C;
	cin >> D;
	cin >> E;

	for (i = strlen(C); i >= 0; i--)
	{
		if (C[i] == ch)
		{
			coll++;
		}
		if (D[i] == ch)
		{
			coll++;
		}
		if (E[i] == ch)
		{
			coll++;
		}
	}

	cout << "Суммраное колличество вхождения символа " << ch << " в текст равно " << coll;
}