#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	/*int A = 150; char tmp[33];
	_itoa_s(A, tmp, 2);
	cout << "Число А: " << tmp << endl;
	_itoa_s(0x24, tmp, 2);
	cout << "Маска для А: " << tmp << endl;
	_itoa_s(A | 0x24, tmp, 2);
	cout << "Результат: " << tmp << endl << endl;*/

	/*int A; char tmp[33];
	cout << "Введите число ";
	cin >> A;
	_itoa_s(A, tmp, 2);
	cout << "Число в двоичном виде =  " << tmp << endl;
	if ((A & 7) == 0)
		cout << "Число кратно 8" << endl;
	else
		cout << "Число не кратно 8" << endl;*/

	/*char tmp[33];
	int A, B, maskA = 14;
	int maskB = ~maskA >> 1;
	cout << "Первое число А = "; cin >> A;
	cout << "Второе число В = "; cin >> B;
	_itoa_s(A, tmp, 2);
	cout << "A = " << tmp << endl;
	_itoa_s(B, tmp, 2);
	cout << "B = " << tmp << endl;
	_itoa_s(maskA, tmp, 2);
	cout << "Маска для А: " << tmp << endl;
	_itoa_s((A & maskA) >> 1, tmp, 2);
	cout << "Выделенные биты А: " << tmp << endl;
	_itoa_s(maskB, tmp, 2);
	cout << "Маска для B: " << tmp << endl;
	_itoa_s(B & maskB, tmp, 2);
	cout << "Очищены биты в В: " << tmp << endl;
	_itoa_s(((B & maskB) | ((A & maskA) >> 1)), tmp, 2);
	cout << "Результат В = " << tmp << endl;*/
}