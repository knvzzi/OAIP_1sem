#include<iostream>
#include <ctime>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "russian");
    int n, i;
    double k{};
    int a[1000];
    cout << "Введите кол-во элементов массива " << endl;
    cin >> n;
    cout << "Введите элементы массива " << endl;
    for (i = 0; i < n; i++)
        cin >> a[i];
    for (i = 1; i < n; i++)
        if (a[i] == a[i - 1])
            k++;
    cout << "Кол-во пар соседних элементов с равными значениями -" << endl;
    cout << k << endl;
    return 0;
}

