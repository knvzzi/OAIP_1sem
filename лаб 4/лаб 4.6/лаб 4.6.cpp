//доп 3 вар 3
#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	float a, b, p, q, r, s;
	cout << "Введите размеры участка ";
	cin >> a >> b;
	cout << "Введите размеры первого дома ";
	cin >> p >> q;
	cout << "Введите размеры второго дома ";
	cin >> r >> s;
	if ((a * b) >= (p * q) + (r * s)) {
		printf("Можно разместить");
	}
	else {
		printf("Нельзя разместить");
	}
}