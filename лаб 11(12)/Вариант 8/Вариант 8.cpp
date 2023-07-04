#include <iostream>

using namespace std;

int num1() {
    int k, n, d = 0;

    int* Z = new int;

    cout << "Введите количество элементов в массиве X" << endl;
    cin >> k;

    int* X = new int[k];
    //cout << "Введите элементы массива Х";

    for (int i = 0; i < k; i++)
    {
        cin >> X[i];
    }

    cout << "Введите количество элементов в массиве Y" << endl;
    cin >> n;

    int* Y = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> Y[i];
    }

    for (int i = 0; i < k; i++)
    {
        for (int m = 0; m < n; m++)
        {
            if (X[i] == Y[m])
            {
                Z[d] = X[i];
                d++;
            }
        }
    }

    for (int i = 0; i < d; i++)
    {
        cout << "общие элементы:" << Z[i] << " ";
    }

    return 0;
}
//Функция поиска ближайшего числа для 2 задания
int near(int X[], int q, int k)
{
    int rasn = 1000;
    int nearNum = 0;

    for (int i = 0; i < k; i++)
    {
        if (X[i] < q)
        {
            if (rasn > (q - X[i]))
            {
                rasn = q - X[i];
                nearNum = X[i];
            }
        }
        else {
            if (rasn > (X[i] - q))
            {
                rasn = X[i] - q;
                nearNum = X[i];
            }
        }
    }

    return nearNum;
}

// //Задание 2.
int num2()
{
    int k, n, q;

    cout << "Введите число q" << endl;
    cin >> q;

    cout << "Введите количество элементов в массиве X" << endl;
    cin >> k;

    int* X = new int[k];

    for (int i = 0; i < k; i++)
    {
        cin >> X[i];
    }

    cout << "Введите количество элементов в массиве Y" << endl;
    cin >> n;

    int* Y = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> Y[i];
    }

    cout <<"Сумма, наиболее близкая к q: "<< near(X, q, k) + near(Y, q, n) << endl;

    return 0;
}

int main()
{
    setlocale(LC_ALL, "Rus");

    //num1();
    num2();
}