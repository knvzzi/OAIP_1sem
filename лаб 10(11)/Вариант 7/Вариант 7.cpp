#include <iostream>

using namespace std;

int main()

{
	setlocale(LC_CTYPE, "Russian");

	//Задание 1

	/*char tmp[33];
	int A, B, maskA = 480;
	int maskB = ~maskA >> 5;

	cout << "Первое число = "; 
	cin >> A;

	cout << "Второе число = "; 
	cin >> B;

	_itoa_s(A, tmp, 2); cout << "A = " << tmp << endl;
	_itoa_s(B, tmp, 2); cout << "B = " << tmp << endl;
	_itoa_s(maskA, tmp, 2);

	cout << "Маска для А: " << tmp << endl;

	_itoa_s((A & maskA) >> 5, tmp, 2);

	cout << "Выделенные биты А: " << tmp << endl;

	_itoa_s(((B & maskB) | ((A & maskA) >> 5)), tmp, 2);

	cout << " Результат B = " << tmp << endl;*/

	//Задание 2

	setlocale(LC_CTYPE, "Russian");

	int n, p, A, B, q;

	cout << "число A: "; 
	cin >> A;

	cout << "число B: "; 
	cin >> B;

	cout << "количество битов n: "; 
	cin >> n;

	cout << "позиция p в числе А: "; 
	cin >> p;

	cout << "позиция q в числе В: "; 
	cin >> q;

	int maskA = 0, maskB = 0;

	for (int i = 1; i <= n; i++) {

		maskA <<= 1;

		maskA++;

		maskB <<= 1;

		maskB++;

	}

	maskA <<= p;

	maskB <<= q;

	char tmp[255];

	_itoa_s(A, tmp, 2); 
	cout << "A = \t\t" << tmp << "\n";

	_itoa_s(B, tmp, 2); 
	cout << "B = \t\t" << tmp << "\n";

	_itoa_s(maskA, tmp, 2); 
	cout << "maskA = \t\t" << tmp << "\n";

	_itoa_s(maskB, tmp, 2); 
	cout << "maskB = \t\t" << tmp << "\n";

	int copyfromA = (A & maskA) >> p;

	_itoa_s(A | maskA, tmp, 2); 
	cout << "новое число A = \t" << tmp << "\n";

	_itoa_s(copyfromA, tmp, 2); 
	cout << "выделенные биты = \t\t" << tmp << "\n";

	B = B & (~maskB);

	B = B | (copyfromA << q);

	_itoa_s(B, tmp, 2); 
	cout << "новое число B = \t" << tmp << "\n";

	return 0;
}
