#include <iostream>
int main()
{
	double t, u, x = 2e-4, a = 8.1, k = 4;
	t = 2 * k / a + log(2 + x);
	u = sqrt(k - 1) / (t + 1);
	std::cout << " t =" << t;
	std::cout << " u =" << u;
}