#include <iostream>
int main()
{
	double p, q, x = 0.4e6, t = 6, y = -1.2;
	p = 2.6 * t + cos(y / (3 * x + y));
	q = sin(t) / cos(t);
	std::cout << " p = " <<p;
	std::cout << " q = " <<q;
}