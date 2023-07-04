#include <iostream>
#include <iomanip> 
using namespace std;

int main()
{ 
	int n;
	float price, p, t;
	cin >> price >> p >> n;
	t = price;
	p = p / 100;
	for (int i = 0; i < n; i++) {
		price += (price * p);
		price -= (price * p);
	}
	t = t - price;
	cout << "result = " << price<< " t= "<< t;
}