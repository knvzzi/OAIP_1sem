#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");

    srand((unsigned)time(NULL));

    const int N = 100;
    int i, j, count = 0, size, C[N], rmn = 0, rmx = 99;

    cout << "Введите размер массива: ";
    cin >> size;

    cout << "Исходный массив: ";

    for (i = 0; i < size; i++)
    {
        C[i] = rand() % rmx;
        cout << C[i] << "\t";
    }

    for (i = 0, j = size - 1; i < (size / 2); i++, j--)
        if (C[i] == C[j])
            count++;
    if (count == (size / 2))
        cout <<"\n" << "Есть симметрия" << endl;
    else
        cout <<"\n" << "Нет симметрии" << endl;
}