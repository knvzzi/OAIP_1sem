#include <iostream>
#include <iomanip> 
//вар 7

int main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	double С, r, s;
	cout << "  Выберите число ";
	cin >> С;
	r = С / (2 * 3.14);
	s = pow(r, 2) * 3.14;
	cout << "  Площадь круга= " << s << endl;
}