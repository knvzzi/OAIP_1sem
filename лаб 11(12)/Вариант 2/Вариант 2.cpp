#include <iostream>
int num1()
{
    using namespace std;
    setlocale(LC_ALL, "rus");
    const int N = 100;
    int A[N], B[N], S[N], n, * pArrA, * pArrB, * pArrS;

    cout << "введите n = ";
    cin >> n;
    srand((unsigned)time(NULL));

    cout << endl << "массив A: ";
    for (pArrA = A; pArrA < A + n; pArrA++)
    {
        *pArrA = rand() % 5;
        cout << *pArrA << " ";
    }

    cout << endl << "массив B: ";
    for (pArrB = B; pArrB < B + n; pArrB++)
    {
        *pArrB = rand() % 5;
        cout << *pArrB << " ";
    }

    cout << endl << "массив C: ";
    for (int i = 0; i < n; i++)
    {
        S[i] = A[i] + B[i];
        cout << S[i] << " ";
    }

    return 0;
}

int num2()
{
    setlocale(LC_ALL, "rus");
    using namespace std;
    const int N = 10;
    int A[N], c, * pArrA = A, n, min = 10;
    int B[N] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    cout << "введите количество отсутствующих чисел: ";
    cin >> c;

    n = N - c;
    cout << endl << "введите " << n << " элементов массива" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> *pArrA;
        if (*pArrA != B[i])
        {
            if (*pArrA < min)
            {
                min = *pArrA - 1;
            }
        }

    }
    cout << "минимальный элемент: " << min;

    return 0;
}

int main()
{
    setlocale(LC_ALL, "Rus");

    //num1();
    num2();
}