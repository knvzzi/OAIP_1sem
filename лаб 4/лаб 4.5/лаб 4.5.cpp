// доп 2 вар 4
#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	float r, p, q, R;
	cout << "Введите радиус шара";
	cin >> r;
	cout << "Введите диагонали ромба";
	cin >> p >> q;
	R = (p * q) / (sqrt(pow(p / 2, 2) + pow(q / 2, 2)) * 2);
	if (r <= R) {
		cout << "Может";
	}
	else {
		cout << "Не может";
	}
}