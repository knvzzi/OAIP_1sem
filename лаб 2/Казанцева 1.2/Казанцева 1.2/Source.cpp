#include <iostream>
int main()
{
	double d, f, x = 4.5, i = -6, z = 1.5e-6;
	d = tan(-x * i) / sqrt(x - z);
	f = sin(2 * d) / d;
	std::cout << " d =" << d;
	std::cout << " f =" << f;
}