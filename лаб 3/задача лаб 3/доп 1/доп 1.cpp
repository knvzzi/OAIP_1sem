#include <iostream>
#include <iomanip> 

int main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	double m, x, y;
	cout << "Выберите число ";
	cin >> m;
	x = (m + 5) / 2;
	y = x - 5;
	cout << "первое число=" << x << endl;
	cout << "второе число=" << y << endl;
}