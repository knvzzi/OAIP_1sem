#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	int A, B, C, D;
	int res; res = 0;
	cin >> A >> B >> C >> D;
	if (A % 2 >= 1) {
		res++;
	}
	if (B % 2 >= 1) {
		res++;
	}
	if (C % 2 >= 1) {
		res++;
	}
	if (D % 2 >= 1) {
		res++;
	}
	if (res >=1) {
		cout << "Есть хотя бы одно нечетное";
	}
	else {
		cout << "Нет нечетных";
	}
}