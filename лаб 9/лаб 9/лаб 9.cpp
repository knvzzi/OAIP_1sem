#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");

    srand((unsigned)time(NULL));

    const int N = 100;
    int i, size, C[N], rmn = 0, rmx = 99;

    cout << "Введите размер массива: ";
    cin >> size;

    if (size < 3)
    {
        cout << "Не соответствует условию";
    }
    
    cout << "Исходный массив: ";

    for (i = 0; i < size; i++)
    {
        C[i] = rand() % rmx;
        cout << C[i]<<"\t";
    }

    cout << endl << "Преобразование: ";

    for(i = 1; i <= size; i++)
    {
        if (i % 3 == 0)
        {
            C[i - 1] = (C[i - 2] + C[i - 3]) / 2;
            cout << C[i - 1]<<"\t";
        }
        else
        {
            cout << C[i-1] << "\t";
        }
    }
}
    