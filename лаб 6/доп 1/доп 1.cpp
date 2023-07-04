#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double C1, C2, i = 0;
    cin >> C1;
    cin >> C2;

    while (i < 12)
    {
        C1 = C1 + (C2 / 2);
        C2 = C2 + (C1 / 2);
        i++;
    }
    cout << C1 << "\n";
    cout << C2 << "\n";
}