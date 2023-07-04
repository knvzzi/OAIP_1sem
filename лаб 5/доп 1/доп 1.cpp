#include <iostream>
//вариант 2
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	int n;
	double v = 0, k, p;
	cout<<"\n\t Введите количество лет, процент и стоимость оборудования на каждый год\n";
	cin >> n >> p;
	int s;
	p = p / 100;
	for(n; n > 0; n--) {
		cin >> s;
		v = v + s;
		k = v * p;
		v = v - k;
	}
	cout << "Общая стоимость накопленного оборудования " << v;
}
