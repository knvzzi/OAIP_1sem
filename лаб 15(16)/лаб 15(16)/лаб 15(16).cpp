#include<iostream>

using namespace std;

int zad1(int, int, int* B, int** A);
int zad2();

int main()
{
	setlocale(LC_CTYPE, "Russian");
	int choice, c=1;
	do
	{
		cout << "Выберите вариант работы" << endl;
		cout << "1 - с двумерным массивом" << endl;
		cout << "2 - со строкой" << endl;
		cout << "3 - выход" << endl;
		cin >> choice;

		switch (choice)
		{
		case 1:
		{
			int rows, cols, null = 0, al = 0, al1 = 0, min = 1000, max = 0, maxI = 0;
			
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
					cout << A[i][j] << "\t";
				}
				cout << endl;
			}

			zad1(rows, cols, B, A);

			for (int i = 0; i < rows; i++)
			{
				delete[] A[i];
			}

			delete[] A;
			break;
		}
		case 2:
		{
			zad2();
			break;
		}
		case 3: break;
		}
		c++;
		cout << "\n\n";
	} 
	while (c != 3);
}

int zad1(int rows, int cols, int* B, int** A)
{
	int min = 1000, max = 0, maxI = 0;
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

		cout << "Минимальный элемент в строке " << (i + 1) << " - " << min << endl;
		min = 1000;
	}

	for (int i = 0; i < rows; i++)
	{
		if (B[i] > B[i + 1])
		{
			max = B[i];
			maxI = i;
		}
	}

	cout << "В строке " << maxI + 1 << " расположен максимальный из минимальных элементов";

	return 0;
}

int zad2()
{
	char ch, C[30], D[30], E[30];
	int coll = 0, i;

	cout << "Введите символ ";
	cin >> ch;
	cout << "Введите первую строку ";
	cin >> C;
	cout << "Введите вторую строку ";
	cin >> D;
	cout << "Введите третью строку ";
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

	cout << "Суммараное количество вхождения символа " << ch << " в текст равно " << coll;

	return 0;
}