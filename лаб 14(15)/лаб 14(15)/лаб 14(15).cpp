#include<iostream>
#include<ctime>

using namespace std;

int zad1() 
{
	setlocale(LC_CTYPE, "Russian");
	int row, colum, null=0, al=0, al1=0, max=0;

	cout << "Введите строки ";
	cin >> row;
	cout << "Введите колонки ";
	cin >> colum;

	srand(time(0));

	int** A = new int* [row];

	for (int i = 0; i < row; i++)
	{
		A[i] = new int[colum];
	}

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < colum; j++)
		{
			A[i][j] = rand() % 10;
			cout << A[i][j]<<"\t";
		}
		cout << endl;
	}

	for (int j = 0; j < colum; j++)
	{
		for (int i = 0; i < row; i++)
		{
			if (A[i][j] == 0)
			{
				null++;
				break;
			}
		}
	}

	cout << "Количество столбцов, содержащих хотя бы один нулевой элемент = " << null << endl;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < colum; j++)
		{
			if (A[i][j] == A[i][j+1])
			{
				al++;
			}
		}
		if (al > al1)
		{
			al1 = al;
			max = i;
		}
	}
	if (max > 0)
	{
		cout << "Строка, в которой находится самая длинная серия одинаковых элементов = " << (max + 1) << endl;
	}
}
