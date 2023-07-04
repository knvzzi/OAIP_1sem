#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");

	/*int A, i; char tmp[33];
	cout << "Введите число: ";
	cin >> A;

	_itoa_s(A, tmp, 2);
	cout << "Число в двоичном виде: " << tmp << endl;

	if ((A & 3) == 0)
		cout << "Число кратно 4." << endl;
	else
		cout << "Число не кратно 4." << endl;*/

	unsigned int a, n, p, mask;
	char tA[33];
	char tM[33];

	cout << "Ввелите a: ";
	cin >> a;

	_itoa_s(a, tA, 2);
	cout << "а= " << tA << "\nВведите n: ";
	cin >> n;

	cout << "Введите р: ";
	cin >> p;

	mask = (1u << n) - 1;
	mask <<= p;

	_itoa_s(mask, tM, 2);
	cout << "Маска: " << tM;
	a |= mask;
	_itoa_s(a, tA, 2);
	cout << "\nИзменённое a: " << tA;
}
